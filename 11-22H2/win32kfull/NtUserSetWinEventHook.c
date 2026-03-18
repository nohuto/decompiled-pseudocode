/*
 * XREFs of NtUserSetWinEventHook @ 0x1C0070880
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C0070A7C (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     _SetWinEventHook @ 0x1C0070AC4 (_SetWinEventHook.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0139BB4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C0139C58 (--1-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v12; // rbx
  ULONG64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // ecx
  ULONG64 v23; // rdx
  char v24[4]; // [rsp+44h] [rbp-A4h] BYREF
  int v25; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  ULONG64 v27; // [rsp+58h] [rbp-90h]
  int v28; // [rsp+68h] [rbp-80h]
  ULONG64 v29; // [rsp+70h] [rbp-78h]
  _BYTE v30[48]; // [rsp+78h] [rbp-70h] BYREF

  v26 = a5;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v24, 6LL, 0LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL);
    v12 = 0LL;
    goto LABEL_6;
  }
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v30);
  v12 = 0LL;
  LODWORD(v13) = 0;
  if ( (a8 & 4) != 0 && a3 && a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v22 = *(_DWORD *)a4;
    v25 = v22;
    v28 = v22;
    v13 = *(_QWORD *)(a4 + 8);
    v29 = v13;
    if ( (v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (unsigned __int16)v22 + v13 + 2;
    if ( v23 <= v13 || v23 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v22 > HIWORD(v25) )
    {
      if ( (v22 & 1) == 0 )
        goto LABEL_20;
    }
    else if ( (v22 & 1) == 0 )
    {
      v27 = v13;
      goto LABEL_3;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3419LL);
LABEL_20:
    ExRaiseAccessViolation();
  }
LABEL_3:
  v14 = (__int64 *)SetWinEventHook(a1, a2, a3, v13, v26, (int)a6, a7, a8);
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::~ObjectLockRecursive<>(
    v30,
    v15,
    v16);
  if ( v14 )
    v12 = *v14;
  EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v12);
LABEL_6:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v12;
}
