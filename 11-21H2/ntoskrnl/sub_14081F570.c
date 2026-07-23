/*
 * XREFs of sub_14081F570 @ 0x14081F570
 * Callers:
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 *     IoAssignResources @ 0x140941E70 (IoAssignResources.c)
 *     sub_140945128 @ 0x140945128 (sub_140945128.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056117C @ 0x14056117C (sub_14056117C.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 *     sub_14081F69C @ 0x14081F69C (sub_14081F69C.c)
 *     sub_14081F6E0 @ 0x14081F6E0 (sub_14081F6E0.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_140859598 @ 0x140859598 (sub_140859598.c)
 *     sub_14094804C @ 0x14094804C (sub_14094804C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14081F570(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  PDEVICE_OBJECT v7; // rsi
  _QWORD *v8; // rbx
  int v12; // edi
  size_t v13; // rcx
  __int64 v14; // r14
  int v16; // eax
  size_t v17; // r14
  _QWORD *v18; // rax
  PDEVICE_OBJECT v19; // rcx
  const void **v20; // rsi
  _DWORD *v21; // rcx
  void *Pool2; // r12
  size_t v23; // r8
  _DWORD *v24; // rax
  void *v25; // rbx
  unsigned int v26; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v28[8]; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(&Semaphore, DelayExecution, 0, 0, 0LL);
  v12 = -1073741823;
  if ( a3 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
    Size = v13;
    if ( v13 )
    {
      v8 = (_QWORD *)v13;
LABEL_4:
      v7 = (PDEVICE_OBJECT)a3;
LABEL_5:
      v12 = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) == 0 )
    {
      v16 = sub_1406CFCE0(a3, (__int64)&Size);
      v17 = Size;
      v12 = v16;
      if ( Size )
      {
        if ( v16 == -1073740946 )
        {
          sub_140774F24((char *)Size);
          goto LABEL_17;
        }
        sub_14076FB70(Size, 0x20000);
        v8 = (_QWORD *)v17;
        goto LABEL_4;
      }
      v12 = -1073741670;
    }
  }
  else
  {
    v18 = (_QWORD *)qword_140C45E00;
    Size = qword_140C45E00;
    if ( qword_140C45E00 )
    {
      do
      {
        if ( v18[54] == a2 )
          break;
        v18 = (_QWORD *)*v18;
      }
      while ( v18 );
      Size = (size_t)v18;
      if ( v18 )
      {
        v7 = (PDEVICE_OBJECT)v18[4];
        v8 = v18;
        goto LABEL_5;
      }
    }
    DeviceObject[0] = 0LL;
    v12 = sub_140859598(DeviceObject);
    if ( v12 >= 0 )
    {
      v7 = DeviceObject[0];
      v19 = DeviceObject[0];
      DeviceObject[0]->Flags |= 0x1000u;
      v12 = sub_1406CFCE0((__int64)v19, (__int64)&Size);
      if ( v12 == -1073740946 || (v8 = (_QWORD *)Size) == 0LL )
      {
        IoDeleteDevice(v7);
        v12 = -1073741670;
        goto LABEL_17;
      }
      v7->DriverObject = (struct _DRIVER_OBJECT *)a2;
      sub_14076FB70((__int64)v8, 131073);
      sub_1402DE844((__int64)v8, 772);
      v8[54] = a2;
      *v8 = qword_140C45E00;
      if ( qword_140C45E00 )
        *(_QWORD *)(qword_140C45E00 + 8) = v8;
      qword_140C45E00 = (__int64)v8;
    }
  }
  if ( v12 < 0 )
    goto LABEL_17;
LABEL_6:
  v14 = 0LL;
  if ( v8[2] )
  {
    if ( a4 )
      goto LABEL_42;
  }
  else if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v8[2] = qword_140C46278;
    goto LABEL_42;
  }
  if ( v8[2] )
  {
LABEL_9:
    sub_14081F6E0(v8);
    goto LABEL_10;
  }
LABEL_42:
  if ( v8[52] || v8[68] )
    goto LABEL_9;
LABEL_10:
  if ( !a4 )
  {
    v14 = v8[66];
    goto LABEL_12;
  }
  memset(v28, 0, sizeof(v28));
  v28[0] = v7;
  v28[3] = a4;
  HIDWORD(v28[1]) = a1;
  LODWORD(v28[1]) = 128;
  sub_140747FB4(1u, v28, 1, 0LL);
  v12 = v28[7];
  if ( SLODWORD(v28[7]) < 0 )
  {
LABEL_12:
    sub_14081F69C(a3, v8);
    if ( v12 < 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v20 = a5;
  v21 = (_DWORD *)v28[5];
  if ( *a5 )
    v21 = *a5;
  Size = (unsigned int)sub_140748D08(v21);
  Pool2 = (void *)ExAllocatePool2(256LL, Size, 538996816LL);
  if ( !Pool2 )
  {
    ExAcquireFastMutex(&stru_140C461A0);
    v8[52] = v28[5];
    v8[53] = v28[6];
    KeReleaseGuardedMutex(&stru_140C461A0);
    sub_14081F6E0(v8);
    v12 = -1073741670;
    goto LABEL_12;
  }
  if ( *v20 )
    ExFreePoolWithTag((PVOID)v28[5], 0);
  else
    *v20 = (const void *)v28[5];
  ExAcquireFastMutex(&stru_140C461A0);
  v23 = Size;
  v8[52] = Pool2;
  memmove(Pool2, *v20, v23);
  v8[53] = v28[6];
  KeReleaseGuardedMutex(&stru_140C461A0);
  v14 = v8[66];
LABEL_13:
  if ( v14 )
  {
    v24 = (_DWORD *)sub_14094804C(v14);
    v25 = v24;
    if ( v24 )
    {
      v26 = sub_140748D08(v24);
      sub_14081FDD8(v14, v25, v26);
      ExFreePoolWithTag(v25, 0);
    }
  }
  if ( a1 != 3 && a4 )
    sub_14056117C(a2);
LABEL_17:
  KeReleaseSemaphore(&Semaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
