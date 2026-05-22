/*
 * XREFs of ?SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006E614
 * Callers:
 *     ?put_Offset@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006E5B0 (-put_Offset@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::SetOffset(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  int updated; // ebx
  __int64 *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 36) )
    goto LABEL_4;
  if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultOffset )
    return 0LL;
  updated = Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform(this);
  if ( updated >= 0 )
  {
LABEL_4:
    v5 = (__int64 *)*((_QWORD *)this + 36);
    v7[1] = a2;
    v7[2] = a2;
    v7[0] = v5 + 22;
    v9 = (WCHAR **)&Windows::UI::Composition::ComponentTransform2D::sc_Offset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v5,
                (__int64)v7,
                &v9);
    if ( updated >= 0 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2FC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
