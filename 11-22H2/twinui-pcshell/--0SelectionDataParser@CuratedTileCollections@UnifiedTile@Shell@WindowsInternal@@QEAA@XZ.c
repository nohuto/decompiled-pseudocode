/*
 * XREFs of ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x180739ADC
 * Callers:
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x1803E8C44 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180739DD0 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=11
WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this)
{
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *v1; // rax
  char *v2; // rbx
  char *v3; // rdi
  char *v4; // rsi
  char *v5; // r14
  char *v6; // r15
  char *v7; // rbp
  char *v8; // r12
  char *v9; // r13
  BSTR v10; // rax
  BSTR v11; // rax
  BSTR v12; // rax
  BSTR v13; // rax
  BSTR v14; // rax
  BSTR v15; // rax
  BSTR v16; // rax
  BSTR v17; // rax
  BSTR v18; // rax

  v1 = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ISelectionDataParser>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(
      Microsoft::WRL::Details::ModuleBase::module_,
      0LL);
    v1 = this;
  }
  *(_QWORD *)v1 = &WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vftable';
  v2 = (char *)v1 + 16;
  *((_QWORD *)v1 + 2) = 0LL;
  v3 = (char *)v1 + 24;
  *((_QWORD *)v1 + 3) = 0LL;
  v4 = (char *)v1 + 32;
  *((_QWORD *)v1 + 4) = 0LL;
  v5 = (char *)v1 + 40;
  *((_QWORD *)v1 + 5) = 0LL;
  v6 = (char *)v1 + 48;
  *((_QWORD *)v1 + 6) = 0LL;
  v7 = (char *)v1 + 56;
  *((_QWORD *)v1 + 7) = 0LL;
  v8 = (char *)v1 + 64;
  *((_QWORD *)v1 + 8) = 0LL;
  v9 = (char *)v1 + 72;
  *((_QWORD *)v1 + 9) = 0LL;
  *((_QWORD *)v1 + 10) = 0LL;
  v10 = SysAllocString(L"GroupCellWidth");
  _bstr_t::operator=(v2, v10);
  v11 = SysAllocString(L"PreInstalledAppsEnabled");
  _bstr_t::operator=(v3, v11);
  v12 = SysAllocString(L"TargetedContentTilesEnabled");
  _bstr_t::operator=(v4, v12);
  v13 = SysAllocString(L"EducationModeEnabled");
  _bstr_t::operator=(v5, v13);
  v14 = SysAllocString(L"CommercialDevice");
  _bstr_t::operator=(v6, v14);
  v15 = SysAllocString(L"Region");
  _bstr_t::operator=(v7, v15);
  v16 = SysAllocString(L"DualSim");
  _bstr_t::operator=(v8, v16);
  v17 = SysAllocString(L"SKU");
  _bstr_t::operator=(v9, v17);
  v18 = SysAllocString(L"OfficeSKU");
  _bstr_t::operator=((char *)this + 80, v18);
  return this;
}
