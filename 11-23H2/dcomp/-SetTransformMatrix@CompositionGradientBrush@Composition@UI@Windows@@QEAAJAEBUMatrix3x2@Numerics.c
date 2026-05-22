/*
 * XREFs of ?SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180071F68
 * Callers:
 *     ?put_TransformMatrix@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x180071F00 (-put_TransformMatrix@Api@-$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Compo.c)
 *     ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ @ 0x180071DA0 (-EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::SetTransformMatrix(
        Windows::UI::Composition::CompositionGradientBrush *this,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  __int64 v4; // rcx
  int updated; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Matrix3x2 *v12; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Matrix3x2 *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 29) )
    goto LABEL_2;
  v8 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
  if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix )
  {
    v8 = *((_QWORD *)a2 + 1) - qword_18021B7E8;
    if ( !v8 )
      v8 = *((_QWORD *)a2 + 2) - qword_18021B7F0;
  }
  if ( !v8 )
    return 0LL;
  v9 = Windows::UI::Composition::CompositionGradientBrush::EnsureComponentTransform(this);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_2:
    v4 = *((_QWORD *)this + 29);
    v12 = a2;
    v13 = a2;
    *(_QWORD *)v11 = v4 + 136;
    v15 = (PVOID *)&Windows::UI::Composition::ComponentTransform2D::sc_TransformMatrix;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v4,
                (__int64)v11,
                &v15);
    v6 = updated;
    if ( updated >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
      (const char *)(unsigned int)updated);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
