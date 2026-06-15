/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180033D0C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800368E0 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18001888C (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180034094 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        wil::details **a1)
{
  void *v2; // rdx
  void *v3; // rdx

  wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(a1 + 4));
  wil::details_abi::SemaphoreValue::~SemaphoreValue(a1 + 2, v2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    a1 + 1,
    v3);
}
