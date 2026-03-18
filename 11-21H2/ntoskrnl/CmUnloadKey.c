/*
 * XREFs of CmUnloadKey @ 0x14069E454
 * Callers:
 *     NtUnloadKey2 @ 0x14069E1D0 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x14069E2D0 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x14069E320 (NtUnloadKeyEx.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     CmConvertHandleToKernelHandle @ 0x14067DA70 (CmConvertHandleToKernelHandle.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140AB419C (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v8; // r14
  char v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Length; // ebx
  wchar_t *TransientPoolWithQuotaTag; // rax
  wchar_t *v13; // rsi
  void *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // ebx
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // r15d
  char UnloadRundown; // [rsp+42h] [rbp-256h]
  PVOID v28; // [rsp+50h] [rbp-248h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-238h] BYREF
  PVOID Object; // [rsp+70h] [rbp-228h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-220h]
  int v32; // [rsp+7Ch] [rbp-21Ch]
  HANDLE v33; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-210h] BYREF
  int v35; // [rsp+98h] [rbp-200h]
  HANDLE Handle; // [rsp+A0h] [rbp-1F8h]
  UNICODE_STRING v37; // [rsp+B0h] [rbp-1E8h]
  __int128 v38; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-1C8h]
  __int128 v40; // [rsp+E0h] [rbp-1B8h]
  _OWORD v41[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+110h] [rbp-188h]
  _OWORD v43[19]; // [rsp+120h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v31 = a2;
  v35 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v43, 0, 0x128uLL);
  LODWORD(v43[6]) = -1;
  *((_QWORD *)&v43[9] + 1) = &v43[9];
  *(_QWORD *)&v43[9] = &v43[9];
  memset((char *)&v43[13] + 8, 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v9 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v19 = -1073741431;
LABEL_53:
    v13 = 0LL;
    goto LABEL_36;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v19 = -1073741727;
    goto LABEL_53;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_53;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v38 = *(_OWORD *)a1;
  v39 = *(_OWORD *)(a1 + 16);
  v40 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v37 = 0LL;
    v15 = v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v16 = *(_DWORD *)v15;
    *(_DWORD *)&v37.Length = v16;
    v17 = *(_QWORD *)(v15 + 8);
    v37.Buffer = (wchar_t *)v17;
    DestinationString = v37;
    if ( (_WORD)v16 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v17 + (unsigned __int16)v16;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
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
    TransientPoolWithQuotaTag = (wchar_t *)CmpAllocateTransientPoolWithQuotaTag(
                                             0x7FFFFFFF0000LL,
                                             DestinationString.Length,
                                             0x35374D43u);
    v13 = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v19 = -1073741670;
      v32 = -1073741670;
      goto LABEL_36;
    }
    memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v13;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v13 = 0LL;
  }
  *(_QWORD *)&v39 = &DestinationString;
  v40 = 0LL;
  if ( PreviousMode == 1 )
  {
    v19 = CmConvertHandleToKernelHandle(*((void **)&v38 + 1), v14, 1, 0, &v33);
    if ( v19 < 0 )
      goto LABEL_36;
    *((_QWORD *)&v38 + 1) = v33;
  }
  DWORD2(v43[1]) = 0;
  LODWORD(v43[0]) = 4;
  v20 = ObReferenceObjectByNameEx(
          (__int64)&v38,
          0LL,
          0,
          (__int64)CmKeyObjectType,
          0,
          (__int64)v43,
          (PADAPTER_OBJECT *)&v28);
  if ( v20 == -1073741772 )
    v20 = -1073741811;
  v19 = v20;
  if ( v20 >= 0 )
  {
    if ( v4 )
    {
      Object = 0LL;
      v19 = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v8 = Object;
      if ( v19 < 0 )
        goto LABEL_36;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v41[0] = v28;
      *((_QWORD *)&v41[0] + 1) = v8;
      v22 = CmpCallCallBacks(34, (unsigned int)v41, v21, 35, (__int64)v28, (__int64)v34);
      v19 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v19 = 0;
        goto LABEL_36;
      }
      v9 = 1;
    }
    LODWORD(Object) = 0;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
    {
LABEL_58:
      v19 = -1073741431;
    }
    else
    {
      v24 = v31;
      while ( 1 )
      {
        LOBYTE(v23) = a3;
        v19 = CmpPerformUnloadKey(v28, v24, v23, v8);
        if ( v19 != -1073741267 )
          break;
        CmpRetryBackOff(&Object);
        if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive() )
          goto LABEL_58;
      }
    }
  }
LABEL_36:
  if ( v9 )
    v19 = CmPostCallbackNotification(35, (_DWORD)v28, v19, (unsigned int)v41, (__int64)v34);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( v13 )
    CmSiFreeMemory((PPRIVILEGE_SET)v13);
  if ( v33 )
    ZwClose(v33);
  CmpCleanupParseContext(v43, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
