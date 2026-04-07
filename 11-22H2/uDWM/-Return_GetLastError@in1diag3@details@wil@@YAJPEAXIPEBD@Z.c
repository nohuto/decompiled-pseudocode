/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D804
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180038E80 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18004D080 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18004D390 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D79C (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A9C0C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B5E2C (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x18010C69C (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800994D0 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
