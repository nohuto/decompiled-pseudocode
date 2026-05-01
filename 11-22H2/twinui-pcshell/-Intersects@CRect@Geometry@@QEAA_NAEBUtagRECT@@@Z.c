/*
 * XREFs of ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1802D4AE2
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5A04 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x18045B058 (-ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPL.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x180579AB0 (-NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180648A08 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1806689C8 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x180668BCC (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_55cd249588c11a309203ecd81774c543___ @ 0x180689E38 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_fa7fbb7d3f2783e8d9281d3ba2f32fb2___ @ 0x180769770 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_180769770.c)
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x18076A8BC (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::CRect::Intersects(Geometry::CRect *this, const struct tagRECT *a2)
{
  LONG top; // r10d
  LONG right; // eax
  LONG left; // r8d
  LONG bottom; // r9d

  top = *((_DWORD *)this + 1);
  right = *((_DWORD *)this + 2);
  if ( top <= a2->top )
    top = a2->top;
  left = *(_DWORD *)this;
  if ( right >= a2->right )
    right = a2->right;
  bottom = *((_DWORD *)this + 3);
  if ( left <= a2->left )
    left = a2->left;
  if ( left >= right )
    return 0;
  if ( bottom >= a2->bottom )
    bottom = a2->bottom;
  return top < bottom;
}
