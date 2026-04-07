/*
 * XREFs of ?MemoryFree@@YAXPEAX@Z @ 0x18001398C
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000F498 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000F61C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180011E68 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180012CE4 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18003F7FC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180040CFC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18004185C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180093D70 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180093DE8 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180093E3C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x180093F2C (--1RawUsageIndex@details_abi@wil@@QEAA@XZ.c)
 *     ??1heap_buffer@details_abi@wil@@QEAA@XZ @ 0x180093FC8 (--1heap_buffer@details_abi@wil@@QEAA@XZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180094AE8 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180094C38 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     <none>
 */

void __fastcall MemoryFree(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
