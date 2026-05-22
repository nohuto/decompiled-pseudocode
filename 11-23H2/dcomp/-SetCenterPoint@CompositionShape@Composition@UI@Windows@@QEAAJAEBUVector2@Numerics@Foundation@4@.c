/*
 * XREFs of ?SetCenterPoint@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006DF74
 * Callers:
 *     ?put_CenterPoint@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006DF10 (-put_CenterPoint@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetCenterPoint(
        Windows::UI::Composition::CompositionShape *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  int updated; // ebx
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 19) )
    goto LABEL_4;
  if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultCenterPoint )
    return 0LL;
  updated = Windows::UI::Composition::CompositionShape::EnsureComponentTransform(this);
  if ( updated >= 0 )
  {
LABEL_4:
    v5 = *((_QWORD *)this + 19);
    v7[1] = a2;
    v7[2] = a2;
    v7[0] = v5 + 168;
    v9 = &Windows::UI::Composition::ComponentTransform2D::sc_CenterPoint;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v5,
                v7,
                &v9);
    if ( updated >= 0 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBA,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
