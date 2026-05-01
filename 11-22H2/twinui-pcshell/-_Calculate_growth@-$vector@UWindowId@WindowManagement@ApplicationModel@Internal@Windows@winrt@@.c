/*
 * XREFs of ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801AD05C
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801AD008 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH@Z @ 0x180229A48 (--$_Emplace_reallocate@$$V@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH@Z.c)
 *     ??$_Emplace_reallocate@AEBH@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAHAEBH@Z @ 0x1803F4F4C (--$_Emplace_reallocate@AEBH@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAHAEBH@Z.c)
 *     ??$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1804BA8A8 (--$_Emplace_reallocate@AEBUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Emplace_reallocate@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@?$vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@QEAAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU23456@$$QEAU23456@@Z @ 0x1804BAB34 (--$_Emplace_reallocate@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18050A9BC (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x1806464E0 (--$_Emplace_reallocate@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$ve.c)
 *     ??$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x180669580 (--$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180693FC0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x1806C9D58 (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z @ 0x1806C9E78 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1806CA15C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@KV-$allocator@K@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Clear_and_reserve_geometric@?$vector@KV?$allocator@K@std@@@std@@AEAAX_K@Z @ 0x1806DE05C (-_Clear_and_reserve_geometric@-$vector@KV-$allocator@K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x18070A4C8 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
