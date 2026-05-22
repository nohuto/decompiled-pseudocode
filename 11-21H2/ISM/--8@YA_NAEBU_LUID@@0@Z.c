/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1800E6D20
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x18008DAEC (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x18008E900 (std--_Func_impl_no_alloc__lambda_d5678778919a42e7570bc6bda635f82a__bool_Activatable_ea_18008E900.c)
 *     std::_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x18008E940 (std--_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_Activatable_ea_18008E940.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800E7880 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
