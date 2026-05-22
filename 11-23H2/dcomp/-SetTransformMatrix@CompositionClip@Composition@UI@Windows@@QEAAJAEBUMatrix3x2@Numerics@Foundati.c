/*
 * XREFs of ?SetTransformMatrix@CompositionClip@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180080CC8
 * Callers:
 *     ?put_TransformMatrix@Api@CompositionClip@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x180080C60 (-put_TransformMatrix@Api@CompositionClip@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Founda.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Compo.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::SetTransformMatrix(
        Windows::UI::Composition::CompositionClip *this,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  int updated; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Matrix3x2 *v12; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Matrix3x2 *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 20) )
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
  v9 = Windows::UI::Composition::CompositionClip::EnsureComponentTransform(this);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_7:
    v6 = *((_QWORD *)this + 20);
    v12 = a2;
    v13 = a2;
    *(_QWORD *)v11 = v6 + 136;
    v15 = (PVOID *)&Windows::UI::Composition::ComponentTransform2D::sc_TransformMatrix;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v6,
                (__int64)v11,
                &v15);
    v8 = updated;
    if ( updated >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
      (const char *)(unsigned int)updated);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
