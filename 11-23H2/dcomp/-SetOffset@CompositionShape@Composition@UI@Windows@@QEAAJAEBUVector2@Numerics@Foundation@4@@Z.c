/*
 * XREFs of ?SetOffset@CompositionShape@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006DE74
 * Callers:
 *     ?put_Offset@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006DE10 (-put_Offset@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetOffset(
        Windows::UI::Composition::CompositionShape *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  __int64 v4; // rcx
  int updated; // ebx
  int v7[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Vector2 *v8; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Vector2 *v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 19) )
    goto LABEL_2;
  if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultOffset )
    return 0LL;
  updated = Windows::UI::Composition::CompositionShape::EnsureComponentTransform(this);
  if ( updated >= 0 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 19);
    v8 = a2;
    v9 = a2;
    *(_QWORD *)v7 = v4 + 176;
    v11 = &Windows::UI::Composition::ComponentTransform2D::sc_Offset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v4,
                v7,
                &v11);
    if ( updated >= 0 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
