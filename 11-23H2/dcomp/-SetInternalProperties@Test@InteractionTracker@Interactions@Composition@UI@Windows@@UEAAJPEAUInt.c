/*
 * XREFs of ?SetInternalProperties@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUInteractionTrackerInternalProperties@@@Z @ 0x18013AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Test::SetInternalProperties(
        Windows::UI::Composition::Interactions::InteractionTracker::Test *this,
        struct InteractionTrackerInternalProperties *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 20);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 152) & 2) != 0 )
  {
    v5 = 0;
    if ( a2 )
    {
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this - 20) + 456LL),
        *((_DWORD *)this - 14),
        66,
        a2,
        0x24uLL);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xD5Eu);
    }
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
