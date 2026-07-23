/*
 * XREFs of ntoskrnl_32 @ 0x14055A160
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140938A9C @ 0x140938A9C (sub_140938A9C.c)
 */

__int64 __fastcall ntoskrnl_32(HANDLE Handle, __int16 a2, unsigned int a3, LARGE_INTEGER *a4)
{
  KPROCESSOR_MODE v6; // r13
  __int64 v7; // rax
  NTSTATUS v8; // eax
  unsigned int v9; // eax
  unsigned int *v10; // r14
  unsigned int v11; // r15d
  _QWORD *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // esi
  int v19; // r15d
  __int64 v20; // rax
  char v21; // si
  KIRQL v22; // al
  char v24; // [rsp+30h] [rbp-D8h]
  KIRQL NewIrql; // [rsp+31h] [rbp-D7h]
  NTSTATUS v26; // [rsp+34h] [rbp-D4h]
  char *v27; // [rsp+38h] [rbp-D0h]
  unsigned int v28; // [rsp+40h] [rbp-C8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+54h] [rbp-B4h]
  int v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int *v34; // [rsp+68h] [rbp-A0h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-98h]
  _OWORD v36[8]; // [rsp+80h] [rbp-88h] BYREF

  v33 = 0LL;
  memset(v36, 0, 0x58uLL);
  v27 = 0LL;
  v24 = 0;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 )
  {
    v26 = -1069154303;
    goto LABEL_39;
  }
  if ( a3 && a4 && v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a4;
    v33 = *(_QWORD *)v7;
    a4 = (LARGE_INTEGER *)&v33;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(Handle, 0, ntoskrnl_29, v6, &Object, 0LL);
  v27 = (char *)Object;
  v26 = v8;
  if ( v8 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Object + 24, 1, 0) )
    {
      v26 = -1069154298;
      goto LABEL_39;
    }
    v24 = 1;
    v34 = (unsigned int *)*((_QWORD *)Object + 8);
    v31 = *((_DWORD *)Object + 6);
    v9 = v34[1];
    v30 = v9;
    v28 = v9;
    v10 = v34;
    v11 = v9 - *v34;
    v12 = Object;
    if ( v11 > *((_DWORD *)Object + 5) )
    {
      v26 = -1069154297;
      goto LABEL_39;
    }
    v13 = a3;
    if ( !a3 )
      goto LABEL_29;
    if ( a3 != -1 && a3 > *((_DWORD *)Object + 7) )
    {
      v26 = -1073741583;
      goto LABEL_39;
    }
    SpinLock = (PKSPIN_LOCK)((char *)Object + 104);
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 13);
    v14 = v12[15];
    v15 = v12[14] - v14;
    v16 = (unsigned int)(*(_DWORD *)(v12[10] + 4LL) - *(_DWORD *)v12[10]);
    v17 = *((unsigned int *)v12 + 7);
    if ( v17 >= v15 + v16 + (unsigned __int64)v11 )
      LODWORD(v17) = v11 + v15 + v16;
    if ( a3 == -1 )
      v13 = v17;
    if ( v13 <= (unsigned int)v17 )
    {
      if ( v13 <= (unsigned int)v16 )
      {
        v13 = 0;
      }
      else
      {
        v13 -= v16;
        *((_BYTE *)v12 + 160) = 1;
        v12[16] = v14 + v13;
      }
    }
    else
    {
      v26 = -1073741583;
    }
    KeReleaseSpinLock(SpinLock, NewIrql);
    if ( v26 >= 0 )
    {
      v9 = v28;
LABEL_29:
      v18 = *v10;
      v32 = *v10;
      v19 = v31;
      while ( v18 != v9 )
      {
        v20 = 22LL * (v19 & v18);
        v36[0] = *(_OWORD *)&v10[v20 + 4];
        v36[1] = *(_OWORD *)&v10[v20 + 8];
        v36[2] = *(_OWORD *)&v10[v20 + 12];
        v36[3] = *(_OWORD *)&v10[v20 + 16];
        v36[4] = *(_OWORD *)&v10[v20 + 20];
        *(_QWORD *)&v36[5] = *(_QWORD *)&v10[v20 + 24];
        v32 = ++v18;
        *v10 = v18;
        sub_140938A9C(v27);
        v9 = v28;
      }
      if ( v13 )
      {
        v26 = KeWaitForSingleObject(v27 + 136, WrIoRing, v6, 0, a4);
        if ( v26 )
        {
          v21 = 0;
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v27 + 13);
          if ( v27[160] )
            v27[160] = 0;
          else
            v21 = 1;
          KeReleaseSpinLock((PKSPIN_LOCK)v27 + 13, v22);
          if ( v21 )
            v26 = KeWaitForSingleObject(v27 + 136, WrIoRing, 0, 0, 0LL);
        }
      }
    }
  }
LABEL_39:
  if ( v24 )
    _InterlockedExchange((volatile __int32 *)v27 + 24, 0);
  if ( v27 )
    ObfDereferenceObject(v27);
  return (unsigned int)v26;
}
