/*
 * XREFs of ?get_CenterPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z @ 0x18017F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@5@XZ @ 0x18018A110 (-GetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::get_CenterPoint(
        Windows::UI::Composition::Internal::CaptureController::Partner *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::Internal::CaptureController::Partner *)((char *)this - 192);
  *(_QWORD *)a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)Windows::UI::Composition::Internal::CaptureControllerBase::GetCenterPoint(v2);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
