/*
 * XREFs of ?InjectManipulation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJUInjectManipulationArgs@@@Z @ 0x18011DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Test::InjectManipulation(
        __int64 a1,
        const void *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 152) & 2) != 0 )
  {
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) + 456LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 128LL),
      7,
      a2,
      0x80uLL);
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
