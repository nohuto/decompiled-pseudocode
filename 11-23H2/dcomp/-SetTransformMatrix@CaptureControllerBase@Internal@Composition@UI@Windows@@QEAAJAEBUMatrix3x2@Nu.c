/*
 * XREFs of ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18018A8C4
 * Callers:
 *     ?put_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@6@@Z @ 0x180180250 (-put_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUMatrix3x2@.c)
 *     ?put_TransformMatrix@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@6@@Z @ 0x180182D00 (-put_TransformMatrix@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Compo.c)
 *     ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x18018A02C (-EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetTransformMatrix(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  int updated; // eax
  unsigned int v10; // ebx
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  const struct Windows::Foundation::Numerics::Matrix3x2 *v12; // [rsp+28h] [rbp-20h]
  const struct Windows::Foundation::Numerics::Matrix3x2 *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 22) )
  {
    v4 = *(_QWORD *)a2 - Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix )
    {
      v4 = *((_QWORD *)a2 + 1) - qword_18021B7E8;
      if ( !v4 )
        v4 = *((_QWORD *)a2 + 2) - qword_18021B7F0;
    }
    if ( !v4 )
      return 0LL;
    v5 = Windows::UI::Composition::Internal::CaptureControllerBase::EnsureComponentTransform(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  v8 = *((_QWORD *)this + 22);
  v12 = a2;
  v13 = a2;
  *(_QWORD *)v11 = v8 + 136;
  v15 = (PVOID *)&Windows::UI::Composition::ComponentTransform2D::sc_TransformMatrix;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
              v8,
              (__int64)v11,
              &v15);
  v10 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x101,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
      (const char *)(unsigned int)updated);
    return v10;
  }
  return 0LL;
}
