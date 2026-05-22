/*
 * XREFs of ?put_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJW4CompositionProjectedShadowDrawOrder@345@@Z @ 0x180184430
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::Velocity::put_DrawOrder(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    if ( (_DWORD)v4 != *(_DWORD *)(a1 + 16) )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 128) + 456LL),
        *(_DWORD *)(a1 - 24),
        1,
        v4);
      *(_DWORD *)(a1 + 16) = v4;
    }
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
