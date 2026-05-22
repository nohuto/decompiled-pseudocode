/*
 * XREFs of ?AdjustPositionXIfGreaterThanThreshold@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMM@Z @ 0x180136F20
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::AdjustPositionXIfGreaterThanThreshold(
        Windows::UI::Composition::Interactions::InteractionTracker::Api *this,
        float a2,
        float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v7; // edx
  DirectComposition::CDevice *v8; // rcx
  _DWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 14);
    v7 = *((_DWORD *)this - 2);
    v5 = 0;
    *(float *)&v10[1] = a2;
    *(float *)&v10[2] = a3;
    v8 = *(DirectComposition::CDevice **)(v6 + 456);
    v10[0] = 0;
    DirectComposition::CDevice::ResourceSetBufferProperty(v8, v7, 65, v10, 0xCuLL);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
