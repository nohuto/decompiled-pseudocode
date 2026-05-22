/*
 * XREFs of ?SetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z @ 0x18018A74C
 * Callers:
 *     ?put_RotationAngleInDegrees@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x180180130 (-put_RotationAngleInDegrees@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x180182BE0 (-put_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x18018A02C (-EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetRotationAngleInDegrees(
        __int64 **this,
        float a2)
{
  int updated; // ebx
  __int64 *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v8; // [rsp+60h] [rbp+8h] BYREF
  float v9; // [rsp+70h] [rbp+18h] BYREF
  void **v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !this[22] )
  {
    if ( a2 == 0.0 )
      return 0LL;
    updated = Windows::UI::Composition::Internal::CaptureControllerBase::EnsureComponentTransform((Windows::UI::Composition::Internal::CaptureControllerBase *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v5 = this[22];
  v9 = a2;
  v6[0] = v5 + 24;
  v6[1] = &v8;
  v6[2] = &v9;
  v10 = (void **)&Windows::UI::Composition::ComponentTransform2D::sc_RotationAngleInDegrees;
  v8 = a2 * 0.017453292;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v5,
              (__int64)v6,
              &v10);
  if ( updated < 0 )
    goto LABEL_4;
  return 0LL;
}
