/*
 * XREFs of ?put_Comment@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1800950C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180095110 (-SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::put_Comment(
        Windows::UI::Composition::CompositorCommon::Api *this,
        HSTRING a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rbx
  unsigned int v4; // edi

  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 176));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::CompositorCommon::SetComment(v2, a2);
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
