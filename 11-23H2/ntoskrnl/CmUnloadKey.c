/*
 * XREFs of CmUnloadKey @ 0x140698DD8
 * Callers:
 *     NtUnloadKey2 @ 0x140698D40 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x140698D90 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x140875C40 (NtUnloadKeyEx.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmConvertHandleToKernelHandle @ 0x140691CD0 (CmConvertHandleToKernelHandle.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     ExWnfHiveUnloaded @ 0x140699814 (ExWnfHiveUnloaded.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpRetryBackOff @ 0x140A1E978 (CmpRetryBackOff.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v7; // rsi
  char v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  char UnloadRundown; // r14
  unsigned __int64 v11; // rcx
  unsigned int Length; // r14d
  wchar_t *TransientPoolWithQuota; // rax
  wchar_t *v14; // rdi
  void *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int16 v17; // ax
  signed int v18; // r8d
  int v19; // eax
  int v20; // r9d
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v27; // [rsp+20h] [rbp-288h]
  char v28; // [rsp+40h] [rbp-268h]
  unsigned int v29; // [rsp+44h] [rbp-264h]
  PVOID Object[2]; // [rsp+60h] [rbp-248h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-238h] BYREF
  PVOID v34; // [rsp+80h] [rbp-228h] BYREF
  HANDLE v35; // [rsp+88h] [rbp-220h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-218h] BYREF
  int v37; // [rsp+A0h] [rbp-208h]
  HANDLE Handle; // [rsp+A8h] [rbp-200h]
  __m128i v39; // [rsp+C0h] [rbp-1E8h]
  __int128 v40; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-1C8h]
  __int128 v42; // [rsp+F0h] [rbp-1B8h]
  _OWORD v43[2]; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+120h] [rbp-188h]
  _OWORD v45[19]; // [rsp+130h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v37 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v45, 0, 0x128uLL);
  LODWORD(v45[6]) = -1;
  *((_QWORD *)&v45[9] + 1) = &v45[9];
  *(_QWORD *)&v45[9] = &v45[9];
  memset((char *)&v45[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v8 = 0;
  v36[1] = v36;
  v36[0] = v36;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  v28 = UnloadRundown;
  if ( !UnloadRundown )
  {
    v18 = -1073741431;
LABEL_54:
    v29 = v18;
    v14 = 0LL;
    goto LABEL_35;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v18 = -1073741727;
    goto LABEL_54;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v18 = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v40 = *(_OWORD *)a1;
  v41 = *(_OWORD *)(a1 + 16);
  v42 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v39 = 0LL;
    v11 = v41;
    if ( (unsigned __int64)v41 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v39.m128i_i32[0] = *(_DWORD *)v11;
    v16 = *(_QWORD *)(v11 + 8);
    v39.m128i_i64[1] = v16;
    DestinationString = (UNICODE_STRING)v39;
    v17 = _mm_cvtsi128_si32(v39);
    if ( v17 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v17 + v16;
      if ( v11 > 0x7FFFFFFF0000LL || v17 + v16 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (wchar_t *)CmpAllocateTransientPoolWithQuota(v11, DestinationString.Length, 892816707LL);
    v14 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v18 = -1073741670;
      v29 = -1073741670;
      UnloadRundown = v28;
      goto LABEL_35;
    }
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v14 = 0LL;
  }
  *(_QWORD *)&v41 = &DestinationString;
  v42 = 0LL;
  if ( PreviousMode == 1 )
  {
    v18 = CmConvertHandleToKernelHandle(*((void **)&v40 + 1), v15, 1, 0, &v35);
    v29 = v18;
    if ( v18 < 0 )
      goto LABEL_34;
    *((_QWORD *)&v40 + 1) = v35;
  }
  DWORD2(v45[1]) = 0;
  LODWORD(v45[0]) = 4;
  LOBYTE(v27) = 0;
  v19 = ObReferenceObjectByNameEx(&v40, 0LL, 0LL, CmKeyObjectType, v27, v45, Object);
  if ( v19 == -1073741772 )
    v19 = -1073741811;
  v18 = v19;
  v29 = v19;
  if ( v19 < 0 )
    goto LABEL_34;
  if ( !v4 )
    goto LABEL_27;
  v34 = 0LL;
  v18 = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v34, 0LL);
  v7 = v34;
  v29 = v18;
  if ( v18 < 0 )
  {
LABEL_34:
    UnloadRundown = v28;
    goto LABEL_35;
  }
  KeResetEvent((PRKEVENT)v34);
LABEL_27:
  if ( !CmpCallBackCount || (v21 = CmpIsRegistryLockAcquired() == 0, v22 = 1, !v21) )
    v22 = 0;
  if ( !v22 )
  {
LABEL_32:
    ExWnfHiveUnloaded(&DestinationString);
    LODWORD(v34) = 0;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
LABEL_60:
      v18 = -1073741431;
      v29 = -1073741431;
    }
    else
    {
      while ( 1 )
      {
        LOBYTE(v24) = a3;
        v18 = CmpPerformUnloadKey(Object[0], a2, v24, v7);
        v29 = v18;
        if ( v18 != -1073741267 )
          break;
        CmpRetryBackOff(&v34, v25, 3221226029LL);
        if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
          goto LABEL_60;
      }
    }
    goto LABEL_34;
  }
  *(PVOID *)&v43[0] = Object[0];
  *((_QWORD *)&v43[0] + 1) = v7;
  LOBYTE(v20) = 1;
  v23 = CmpCallCallBacksEx(34, (unsigned int)v43, 0, v20, 35, (__int64)Object[0], (__int64)v36);
  v18 = v23;
  v29 = v23;
  if ( v23 >= 0 )
  {
    v8 = 1;
    goto LABEL_32;
  }
  UnloadRundown = v28;
  if ( v23 == -1073740541 )
  {
    v18 = 0;
    v29 = 0;
  }
LABEL_35:
  if ( v8 )
    v29 = CmPostCallbackNotificationEx(35, (__int64)Object[0], v18, (__int64)v43, 0LL, v36);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v14 )
    CmSiFreeMemory((PPRIVILEGE_SET)v14);
  if ( v35 )
    ZwClose(v35);
  CmpCleanupParseContext(v45, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v29;
}
