/*
 * XREFs of ?put_DepthMode@Partner@Visual@Composition@UI@Windows@@UEAAJW4CompositionDepthMode@Private@345@@Z @ 0x18010D480
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetDepthMode@Visual@Composition@UI@Windows@@QEAAJW4CompositionDepthMode@Private@234@@Z @ 0x18010B8C4 (-SetDepthMode@Visual@Composition@UI@Windows@@QEAAJW4CompositionDepthMode@Private@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::put_DepthMode(__int64 a1, int a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = a1 - 232;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 232 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Visual::SetDepthMode(v2, a2);
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
