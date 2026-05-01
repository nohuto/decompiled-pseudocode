/*
 * XREFs of ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180561124
 * Callers:
 *     ??$_Construct_in_place@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YAXAEAVAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@2@Z @ 0x18055F5E0 (--$_Construct_in_place@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Dev.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18023877C (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rcx
  void **v9; // rdi
  unsigned __int64 v10; // r15
  char *v11; // rbx
  __int64 v12; // rcx
  char *v14; // [rsp+20h] [rbp-28h]
  void *v15[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  *a1 = &TwinUI::Lighting::AssistantLightStrip::`vftable';
  v8 = *a2;
  a1[1] = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(a1 + 2, a3);
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(a1 + 5, a4);
  v9 = (void **)(a1 + 8);
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  v10 = (__int64)(a1[3] - a1[2]) >> 2;
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  if ( v10 )
  {
    std::vector<Windows::UI::Color>::_Buy_nonzero((__int64)v15, v10);
    v11 = (char *)v15[0];
    memset_0(v15[0], 0, 4 * v10);
    v14 = &v11[4 * v10];
    v15[1] = v14;
  }
  else
  {
    v11 = (char *)v15[0];
  }
  if ( v9 != v15 )
  {
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 8));
    *v9 = v11;
    a1[9] = v14;
    a1[10] = v16;
    *(_OWORD *)v15 = 0LL;
    v16 = 0LL;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v15);
  v12 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a3);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a4);
  return a1;
}
