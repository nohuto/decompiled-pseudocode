/*
 * XREFs of ?get_Comment@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18012AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::get_Comment(
        Windows::UI::Composition::CompositorCommon::Api *this,
        HSTRING *a2)
{
  HSTRING *v2; // rbx
  unsigned int v4; // edi

  v2 = (HSTRING *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 176));
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    WindowsDuplicateString(v2[125], a2);
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
