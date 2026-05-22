/*
 * XREFs of ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18000BE3C
 * Callers:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000BD18 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18009DE18 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18009F5A8 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E5214 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5564 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z @ 0x1801AD190 (-AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z.c)
 *     ?CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z @ 0x1801AD2B0 (-CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z.c)
 *     ?CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z @ 0x1801AD590 (-CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z.c)
 *     ?EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z @ 0x1801AD640 (-EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z.c)
 *     ?GetLostEvent@CPresentationManager@@UEAAJPEAPEAX@Z @ 0x1801AD750 (-GetLostEvent@CPresentationManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880 (-GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z.c)
 *     ?GetPresentStatisticsAvailableEvent@CPresentationManager@@UEAAJPEAPEAX@Z @ 0x1801ADB60 (-GetPresentStatisticsAvailableEvent@CPresentationManager@@UEAAJPEAPEAX@Z.c)
 *     ?HrFindInterface@CPresentationManager@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801ADCB0 (-HrFindInterface@CPresentationManager@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 *     ??0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z @ 0x1801AFAE8 (--0CPresentationResource@@IEAA@PEAVCPresentationManager@@@Z.c)
 *     ??1CPresentationResource@@IEAA@XZ @ 0x1801AFC18 (--1CPresentationResource@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::EnterCriticalSection(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  EnterCriticalSection(a2);
  *a1 = a2;
  return a1;
}
