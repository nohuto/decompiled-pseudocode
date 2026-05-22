/*
 * XREFs of ?put_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x180180C80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetSDRBoost@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXM@Z @ 0x18018066C (-SetSDRBoost@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::Partner::put_SDRBoost(
        Windows::UI::Composition::Internal::CaptureRenderTarget::Partner *this,
        float a2)
{
  Windows::UI::Composition::Internal::CaptureRenderTarget *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi

  v2 = (Windows::UI::Composition::Internal::CaptureRenderTarget::Partner *)((char *)this - 136);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Internal::CaptureRenderTarget::SetSDRBoost(v2, a2);
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
