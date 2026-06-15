/*
 * XREFs of ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180014170 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005F820 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005FF6C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800CC53C (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800CC60C (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1800CC6E8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D57CC (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ @ 0x1800D590C (--1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800EEE78 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x18011C9C0 (--_GCStandardEvent@@UEAAPEAXI@Z.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x18012C060 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x180133870 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CDB34 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::CloseHandle(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CloseHandle(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x937, v2, v3);
}
