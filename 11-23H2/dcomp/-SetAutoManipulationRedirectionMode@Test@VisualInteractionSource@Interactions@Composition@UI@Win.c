/*
 * XREFs of ?SetAutoManipulationRedirectionMode@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJXZ @ 0x18011DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Test::SetAutoManipulationRedirectionMode(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Test *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 20);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 152) & 2) != 0 )
  {
    v4 = *((_QWORD *)this + 8);
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(v4 + 24) + 456LL),
      *(_DWORD *)(v4 + 128),
      0,
      0LL);
    v3 = 0;
    *(_DWORD *)(v4 + 152) = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
