/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z @ 0x100035BC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     _MsixvcAddPackageAsync@20 @ 0x10004D20 (_MsixvcAddPackageAsync@20.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcUpdatePolicyString@16 @ 0x10005360 (_MsixvcUpdatePolicyString@16.c)
 *     _MsixvcUpdatePolicyUInt64@20 @ 0x100053B0 (_MsixvcUpdatePolicyUInt64@20.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400 (_MsixvcRemediateMutablePackagesForVolumeAsync@8.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z @ 0x10006424 (-GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066E9 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756 (-CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z @ 0x100048EA (--$ReportFailure_Hr@$00@details@wil@@YGXPAXIPBD110J@Z.c)
 */

void __userpurge wil::details::in1diag3::Return_Hr(
        int a1@<ecx>,
        wil::details::in1diag3 *this,
        void *a3,
        unsigned int a4,
        const char *a5,
        int a6)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  wil::details::ReportFailure_Hr<1>(this, a1, a1, retaddr, a3);
}
