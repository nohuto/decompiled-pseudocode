/*
 * XREFs of ?SetOffset@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A564
 * Callers:
 *     ?put_Offset@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z @ 0x18017FF40 (-put_Offset@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Fo.c)
 *     ?put_Offset@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z @ 0x1801829F0 (-put_Offset@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 *     ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x18018A02C (-EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetOffset(
        __int64 **this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  int updated; // ebx
  __int64 *v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WCHAR **v9; // [rsp+50h] [rbp+8h] BYREF

  if ( !this[22] )
  {
    if ( *(_QWORD *)a2 == Windows::UI::Composition::ComponentTransform2D::sc_defaultOffset )
      return 0LL;
    updated = Windows::UI::Composition::Internal::CaptureControllerBase::EnsureComponentTransform((Windows::UI::Composition::Internal::CaptureControllerBase *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v6 = this[22];
  v7[1] = a2;
  v7[2] = a2;
  v7[0] = v6 + 22;
  v9 = (WCHAR **)&Windows::UI::Composition::ComponentTransform2D::sc_Offset;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
              v6,
              (__int64)v7,
              &v9);
  if ( updated < 0 )
    goto LABEL_4;
  return 0LL;
}
