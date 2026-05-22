/*
 * XREFs of ?put_ProtectContents@Partner@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18010D660
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::put_ProtectContents(
        Windows::UI::Composition::Visual::Partner *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 200) & 2) != 0 )
  {
    v5 = 0;
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 26) + 456LL),
      *((_DWORD *)this - 26),
      48,
      a2 != 0);
    *((_DWORD *)this + 7) = *((_DWORD *)this + 7) & 0xFFFFDFFF | (a2 != 0 ? 0x2000 : 0);
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
