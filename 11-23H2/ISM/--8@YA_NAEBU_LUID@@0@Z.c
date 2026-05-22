/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1800FF9F4
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001B8AC (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18006055C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800A46D4 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x1800A54F0 (std--_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_Activatable_ea_1800A54F0.c)
 *     std::_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x1800A5530 (std--_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_Activatable_ea_1800A5530.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x180100670 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1801B8DB4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
