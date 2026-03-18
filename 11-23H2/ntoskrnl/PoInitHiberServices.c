/*
 * XREFs of PoInitHiberServices @ 0x140801AE8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x140384150 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExSubscribeWnfStateChange @ 0x1407DAD30 (ExSubscribeWnfStateChange.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140801414 (PopTraceHibernatePolicyUpdate.c)
 *     PopInitializeHibernateGlobals @ 0x1408014E4 (PopInitializeHibernateGlobals.c)
 *     PopAcquireTransitionLock @ 0x14080163C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140801698 (PopReleaseTransitionLock.c)
 *     PopBcdClearPendingResume @ 0x140801C34 (PopBcdClearPendingResume.c)
 *     PopHibernateEvaluation @ 0x140801C94 (PopHibernateEvaluation.c)
 *     PopBcdEstablishResumeObject @ 0x140801F90 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803098 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 (*PoInitHiberServices())(void)
{
  int v0; // eax
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 (*result)(void); // rax
  int v9; // eax
  __int64 v10; // rbx
  char v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v1);
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  PopHibernateEvaluation(v3, v2, &v11);
  PopReleasePolicyLock(v5, v4, v6);
  PopReleaseTransitionLock(2);
  PopTraceHibernatePolicyUpdate();
  if ( !ExIsSoftBoot() && (v11 || !PopHiberBootOptimizationEnabledReg) && (int)BcdOpenStore(0LL, 2LL, &v12) >= 0 )
  {
    v7 = v12;
    PopBcdEstablishResumeObject(v12, 0LL);
    PopBcdClearPendingResume(v7);
    BcdCloseStore(v7);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (__int64)&PopHibernatePolicyWnfSubscription,
              (__int64)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  v13 = -1LL;
  v12 = -1LL;
  if ( byte_140D53289 )
  {
    v9 = BcdOpenStore(0LL, 2LL, &v13);
    v10 = v13;
    if ( v9 >= 0 )
    {
      if ( (int)BcdOpenObject(v13, &GUID_CURRENT_BOOT_ENTRY, &v12) >= 0 )
      {
        BiDeleteElement(v12, 620757338LL);
        BcdFlushStore(v10);
      }
      if ( v12 != -1 )
        BcdCloseObject(v12);
    }
    if ( v10 != -1 )
      BcdCloseStore(v10);
  }
  result = qword_140C6AF28;
  if ( qword_140C6AF28 )
    return (__int64 (*)(void))qword_140C6AF28();
  return result;
}
