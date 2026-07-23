/*
 * XREFs of NtCreateWnfStateName @ 0x1407113B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x140711768 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071186C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140711A04 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpWnfRegisterPermanentName @ 0x1407E8280 (ExpWnfRegisterPermanentName.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  PCWNF_TYPE_ID v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  BOOL v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v23; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-A0h] BYREF
  int v25[2]; // [rsp+50h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+58h] [rbp-90h]
  _QWORD v27[2]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v28[2]; // [rsp+70h] [rbp-78h] BYREF
  PCWNF_TYPE_ID v29; // [rsp+78h] [rbp-70h]
  PSECURITY_DESCRIPTOR v30; // [rsp+80h] [rbp-68h]
  __int128 v31; // [rsp+98h] [rbp-50h] BYREF

  v11 = TypeId;
  v27[1] = SecurityDescriptor;
  v31 = 0LL;
  v24 = 0LL;
  v27[0] = 0LL;
  v28[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v25 = 0LL;
  v23 = 0LL;
  v26 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, 0, 1, 1, (__int64)&v23);
    if ( NameInstance < 0 )
      goto LABEL_33;
    goto LABEL_13;
  }
  v14 = 0x7FFFFFFF0000LL;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)StateName < 0x7FFFFFFF0000LL )
    v15 = (__int64)StateName;
  *(_BYTE *)v15 = *(_BYTE *)v15;
  *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId < 0x7FFFFFFF0000LL )
      v14 = (__int64)TypeId;
    v31 = *(_OWORD *)v14;
    v26 = (PCWNF_TYPE_ID)&v31;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_33;
  }
  LOBYTE(v14) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v14, 1, 1, (__int64)&v23);
  if ( NameInstance >= 0 )
  {
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(v23);
    v16 = (unsigned int)NameLifetime < WnfPersistentStateName || (unsigned int)(NameLifetime - 2) <= 1;
    if ( !v16
      || NameLifetime == WnfWellKnownStateName
      || ((unsigned int)DataScope < WnfDataScopeMachine || (unsigned int)(DataScope - 4) < 2 ? (v17 = 1) : (v17 = 0),
          !v17
       || PersistData && ((DataScope & 0xFFFFFFFB) != 0 || NameLifetime != WnfPermanentStateName)
       || MaximumStateSize > 0x1000
       || DataScope == WnfDataScopeProcess && NameLifetime == WnfTemporaryStateName
       || DataScope == WnfDataScopePhysicalMachine) )
    {
      NameInstance = -1073741811;
    }
    else if ( NameLifetime == WnfTemporaryStateName || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(v18) = PersistData;
      NameInstance = ExpWnfGenerateStateName(&v24, (unsigned int)NameLifetime, (unsigned int)DataScope, v18);
      if ( NameInstance >= 0 )
      {
        v19 = v24;
        *StateName = (_WNF_STATE_NAME)(v24 ^ 0x41C64E6DA3BC0074LL);
        v28[0] = MaximumStateSize;
        v29 = v26;
        v30 = v23;
        if ( NameLifetime == WnfTemporaryStateName )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v19) = v24;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v25, (int)Process, 0, DataScope, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v25[0], v19, (unsigned int)v28, (_DWORD)Process, (__int64)v27);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v27[0] + 8LL));
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v19, v28);
        }
      }
    }
    else
    {
      NameInstance = -1073741727;
    }
  }
LABEL_33:
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( v23 && v23 != SecurityDescriptor )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v14) = PreviousMode;
    SeReleaseSecurityDescriptor(v23, v14, v11, PersistData);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return NameInstance;
}
