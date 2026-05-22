/*
 * XREFs of ?ValidateUpdateOption@InteractionTracker@Interactions@Composition@UI@Windows@@AEBAJW4InteractionTrackerClampingOption@2345@@Z @ 0x18013C548
 * Callers:
 *     ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614 (-TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nume.c)
 *     ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@PEAH@Z @ 0x18013B820 (-TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nu.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::ValidateUpdateOption(
        __int64 a1,
        unsigned int a2)
{
  const char *v3; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 < 2 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x9B6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
    (const char *)0x80070057LL,
    (int)"Invalid option specified",
    v3);
  return 2147942487LL;
}
