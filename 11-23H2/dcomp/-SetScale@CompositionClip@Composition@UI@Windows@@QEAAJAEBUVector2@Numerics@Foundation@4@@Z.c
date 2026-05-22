/*
 * XREFs of ?SetScale@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x180155BF0
 * Callers:
 *     ?put_Scale@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180156310 (-put_Scale@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::SetScale(
        __int64 **this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  int updated; // ebx
  __int64 *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !this[20] )
  {
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultScale )
      return 0LL;
    updated = Windows::UI::Composition::CompositionClip::EnsureComponentTransform((Windows::UI::Composition::CompositionClip *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v6 = this[20];
  v7[1] = a2;
  v7[2] = a2;
  v7[0] = v6 + 23;
  v9 = (WCHAR **)&Windows::UI::Composition::ComponentTransform2D::sc_Scale;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
              v6,
              (__int64)v7,
              &v9);
  if ( updated < 0 )
    goto LABEL_4;
  return 0LL;
}
