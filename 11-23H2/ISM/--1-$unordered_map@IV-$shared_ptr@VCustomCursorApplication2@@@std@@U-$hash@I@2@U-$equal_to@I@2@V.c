/*
 * XREFs of ??1?$unordered_map@IV?$shared_ptr@VCustomCursorApplication2@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D7AEC
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$7 @ 0x18006C22A (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$7.c)
 *     _GestureServices::GestureServices_::_1_::dtor$9 @ 0x18006E502 (_GestureServices--GestureServices_--_1_--dtor$9.c)
 *     _GestureServices::GestureServices_::_1_::dtor$10 @ 0x18006E51B (_GestureServices--GestureServices_--_1_--dtor$10.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$3 @ 0x1801041D6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$3.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$4 @ 0x1801041E6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D704C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::unordered_map<unsigned int,std::shared_ptr<CustomCursorApplication2>>::~unordered_map<unsigned int,std::shared_ptr<CustomCursorApplication2>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x28uLL);
}
