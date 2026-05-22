/*
 * XREFs of ?put_IsDoubleSided@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJE@Z @ 0x1801922B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::Api::put_IsDoubleSided(
        Windows::UI::Composition::Scenes::ScenePbrMaterial::Api *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // esi
  bool v6; // di

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v5 = 0;
    v6 = a2 != 0;
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this - 18) + 456LL),
      *((_DWORD *)this - 10),
      4,
      v6);
    *((_BYTE *)this + 60) = v6;
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
