/*
 * XREFs of ?put_DebugOverlayMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4DebugOverlayFlags@3456@@Z @ 0x18011AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::Api::put_DebugOverlayMode(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // edx

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 112);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 104) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 - 112);
    v7 = *(_DWORD *)(a1 - 8);
    *(_DWORD *)(a1 + 24) = v4;
    DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v6 + 456), v7, 3, v4);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
