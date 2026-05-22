/*
 * XREFs of ?SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18005C238
 * Callers:
 *     ?put_TransformMatrix@Api@CompositionShape@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18005C1D0 (-put_TransformMatrix@Api@CompositionShape@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Found.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Compo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetTransformMatrix(
        Windows::UI::Composition::CompositionShape *this,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  int updated; // eax
  unsigned int v9; // ebx
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Matrix3x2 *v12; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Matrix3x2 *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 19) )
    goto LABEL_7;
  v4 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
  if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix )
  {
    v4 = *((_QWORD *)a2 + 1) - qword_18021B7E8;
    if ( !v4 )
      v4 = *((_QWORD *)a2 + 2) - qword_18021B7F0;
  }
  if ( !v4 )
    return 0LL;
  v5 = Windows::UI::Composition::CompositionShape::EnsureComponentTransform(this);
  v6 = v5;
  if ( v5 >= 0 )
  {
LABEL_7:
    v7 = *((_QWORD *)this + 19);
    v12 = a2;
    v13 = a2;
    *(_QWORD *)v11 = v7 + 136;
    v15 = &Windows::UI::Composition::ComponentTransform2D::sc_TransformMatrix;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v7,
                v11,
                &v15);
    v9 = updated;
    if ( updated >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
      (const char *)(unsigned int)updated);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
