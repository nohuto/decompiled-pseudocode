/*
 * XREFs of ?put_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4HolographicDisplayIdleMode@3456@@Z @ 0x18011ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetIdleMode@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXW4HolographicDisplayIdleMode@2345@@Z @ 0x18011A5A4 (-SetIdleMode@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXW4HolographicDi.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::Api::put_IdleMode(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  unsigned int v7; // edi

  v2 = a1 - 136;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Internal::HolographicCompositionDisplay::SetIdleMode(v2, a2, v5, v6);
    v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
