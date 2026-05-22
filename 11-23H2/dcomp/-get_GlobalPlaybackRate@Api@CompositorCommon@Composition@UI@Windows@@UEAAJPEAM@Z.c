/*
 * XREFs of ?get_GlobalPlaybackRate@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::get_GlobalPlaybackRate(
        Windows::UI::Composition::CompositorCommon::Api *this,
        float *a2)
{
  float *v2; // rbx
  unsigned int v4; // edi

  v2 = (float *)((char *)this - 176);
  *a2 = 1.0;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 176));
  if ( ((_BYTE)v2[8] & 2) != 0 )
  {
    *a2 = v2[249];
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
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
