/*
 * XREFs of ?put_DefaultSDRBoost@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x18017FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetDefaultSDRBoost@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXM@Z @ 0x18018A460 (-SetDefaultSDRBoost@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::put_DefaultSDRBoost(
        Windows::UI::Composition::Internal::CaptureController::Partner *this,
        float a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi

  v2 = (Windows::UI::Composition::Internal::CaptureController::Partner *)((char *)this - 192);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Internal::CaptureControllerBase::SetDefaultSDRBoost(v2, a2);
    v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
