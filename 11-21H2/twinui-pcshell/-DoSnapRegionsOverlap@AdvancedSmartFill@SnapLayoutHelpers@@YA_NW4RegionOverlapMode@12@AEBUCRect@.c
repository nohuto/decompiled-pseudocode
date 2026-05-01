/*
 * XREFs of ?DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@Geometry@@1H@Z @ 0x1805A35FC
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_58b5290418fe0bee3adfb61fed5cdaa6___ @ 0x18059B418 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Geometry--CRect_______l.c)
 *     _lambda_3ef9939cdadba85e6c7bf3436be4e95a_::operator() @ 0x18059B81C (_lambda_3ef9939cdadba85e6c7bf3436be4e95a_--operator().c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall SnapLayoutHelpers::AdvancedSmartFill::DoSnapRegionsOverlap(
        int a1,
        SnapLayoutHelpers *a2,
        const struct Geometry::CRect *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    return SnapLayoutHelpers::IsEqualWithErrorThreshold(
             a2,
             a3,
             (const struct Geometry::CRect *)(unsigned int)a4,
             (int)a4);
  if ( a1 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      a4);
  return SnapLayoutHelpers::IntersectsWithErrorThreshold(
           (RECT *)a2,
           (RECT *)a3,
           (const struct Geometry::CRect *)(unsigned int)a4,
           (int)a4);
}
