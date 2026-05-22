/*
 * XREFs of ?get_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAW4CompositionProjectedShadowDrawOrder@345@@Z @ 0x180184270
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::Velocity::get_DrawOrder(
        Windows::UI::Composition::CompositionProjectedShadowReceiver::Velocity *this,
        enum Windows::UI::Composition::CompositionProjectedShadowDrawOrder *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *(_DWORD *)a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 4);
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
