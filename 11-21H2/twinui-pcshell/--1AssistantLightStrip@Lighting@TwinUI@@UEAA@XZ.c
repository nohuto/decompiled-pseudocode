/*
 * XREFs of ??1AssistantLightStrip@Lighting@TwinUI@@UEAA@XZ @ 0x180561334
 * Callers:
 *     ??_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z @ 0x1805613A0 (--_EAssistantLightStrip@Lighting@TwinUI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TwinUI::Lighting::AssistantLightStrip::~AssistantLightStrip(
        TwinUI::Lighting::AssistantLightStrip *this)
{
  __int64 v2; // rcx

  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 64);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 40);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)this + 16);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_QWORD *)this = &TwinUI::Lighting::IAssistantLight::`vftable';
}
