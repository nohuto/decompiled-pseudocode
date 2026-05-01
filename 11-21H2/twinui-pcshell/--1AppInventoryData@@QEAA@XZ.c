/*
 * XREFs of ??1AppInventoryData@@QEAA@XZ @ 0x180569C7C
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180569E60 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     _ComputeAppIdFromExePath_::_1_::dtor$1 @ 0x180569EFF (_ComputeAppIdFromExePath_--_1_--dtor$1.c)
 *     _GetAppInventoryData_::_1_::dtor$0 @ 0x18056A112 (_GetAppInventoryData_--_1_--dtor$0.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056A14C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     _GetDisplayNameFromExePath_::_1_::dtor$4 @ 0x18056A3A7 (_GetDisplayNameFromExePath_--_1_--dtor$4.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall AppInventoryData::~AppInventoryData(AppInventoryData *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
  std::wstring::_Tidy_deallocate((__int64)this);
}
