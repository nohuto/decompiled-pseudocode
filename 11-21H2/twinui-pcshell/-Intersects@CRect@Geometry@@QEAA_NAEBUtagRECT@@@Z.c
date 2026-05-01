/*
 * XREFs of ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x18036F50C
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800728C4 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x180386ABC (-ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPL.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x1804BF0A0 (-NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_26cca3a0c1c2e804cd017d0045782f16___ @ 0x1805FFCD4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ABI--Windows--Internal--S.c)
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x180600D70 (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
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
