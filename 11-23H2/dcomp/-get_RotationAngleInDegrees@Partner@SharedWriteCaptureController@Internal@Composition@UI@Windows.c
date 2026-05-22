/*
 * XREFs of ?get_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ @ 0x18018A17C (-GetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedWriteCaptureController::Partner::get_RotationAngleInDegrees(
        Windows::UI::Composition::Internal::SharedWriteCaptureController::Partner *this,
        float *a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v2 = (Windows::UI::Composition::Internal::SharedWriteCaptureController::Partner *)((char *)this - 192);
  v3 = 0;
  *a2 = 0.0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    *a2 = Windows::UI::Composition::Internal::CaptureControllerBase::GetRotationAngleInDegrees(v2);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
