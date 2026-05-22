/*
 * XREFs of ?get_RotationAngle@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ @ 0x18018A158 (-GetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::get_RotationAngle(
        Windows::UI::Composition::Internal::CaptureController::Partner *this,
        float *a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v2 = (Windows::UI::Composition::Internal::CaptureController::Partner *)((char *)this - 192);
  v3 = 0;
  *a2 = 0.0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    *a2 = Windows::UI::Composition::Internal::CaptureControllerBase::GetRotationAngle(v2);
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
