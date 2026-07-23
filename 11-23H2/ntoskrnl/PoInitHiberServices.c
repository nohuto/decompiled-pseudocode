/*
 * XREFs of PoInitHiberServices @ 0x140801DB8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080ABF0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x140384330 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1408016E4 (PopTraceHibernatePolicyUpdate.c)
 *     PopInitializeHibernateGlobals @ 0x1408017B4 (PopInitializeHibernateGlobals.c)
 *     PopAcquireTransitionLock @ 0x14080190C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140801968 (PopReleaseTransitionLock.c)
 *     PopBcdClearPendingResume @ 0x140801F04 (PopBcdClearPendingResume.c)
 *     PopHibernateEvaluation @ 0x140801F64 (PopHibernateEvaluation.c)
 *     PopBcdEstablishResumeObject @ 0x140802260 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C4D8 (BcdFlushStore.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 (*PoInitHiberServices())(void)
{
  int v0; // eax
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  HANDLE v4; // rbx
  __int64 (*result)(void); // rax
  NTSTATUS v6; // eax
  HANDLE v7; // rbx
  char v8; // [rsp+40h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+48h] [rbp+18h] BYREF
  HANDLE v10; // [rsp+50h] [rbp+20h] BYREF

  BcdStoreHandle = 0LL;
  v8 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v1);
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  PopHibernateEvaluation(v3, v2, &v8);
  PopReleasePolicyLock();
  PopReleaseTransitionLock(2);
  PopTraceHibernatePolicyUpdate();
  if ( !ExIsSoftBoot()
    && (v8 || !PopHiberBootOptimizationEnabledReg)
    && BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
  {
    v4 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle);
    PopBcdClearPendingResume(v4);
    BcdCloseStore(v4);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (__int64)&PopHibernatePolicyWnfSubscription,
              (__int64)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  v10 = (HANDLE)-1LL;
  BcdStoreHandle = (HANDLE)-1LL;
  if ( byte_140D53289 )
  {
    v6 = BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &v10);
    v7 = v10;
    if ( v6 >= 0 )
    {
      if ( BcdOpenObject(v10, &GUID_CURRENT_BOOT_ENTRY, &BcdStoreHandle) >= 0 )
      {
        BiDeleteElement(BcdStoreHandle, 620757338LL);
        BcdFlushStore(v7);
      }
      if ( BcdStoreHandle != (HANDLE)-1LL )
        BcdCloseObject(BcdStoreHandle);
    }
    if ( v7 != (HANDLE)-1LL )
      BcdCloseStore(v7);
  }
  result = qword_140C6AF28;
  if ( qword_140C6AF28 )
    return (__int64 (*)(void))qword_140C6AF28();
  return result;
}
