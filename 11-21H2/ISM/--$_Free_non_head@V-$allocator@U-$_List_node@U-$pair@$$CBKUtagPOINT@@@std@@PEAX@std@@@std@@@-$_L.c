/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C
 * Callers:
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800496B8 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1InputSinkDataCache@@QEAA@XZ @ 0x180049770 (--1InputSinkDataCache@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBI_K@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ @ 0x1800808F4 (--1-$list@U-$pair@$$CBI_K@std@@V-$allocator@U-$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800B27E8 (--1InputStateManager@@MEAA@XZ.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x1800E82CC (--1SystemCursorController2@@UEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800EB7D4 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800EF6B4 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800F2630 (-clear@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18013D654 (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18013D890 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x1801449BC (--1ResizeProcessor@@UEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x18014861C (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180148768 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x1801712FC (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x18018B148 (--1HapticInterface@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x18018F1BC (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x180196FD4 (--1InputInfoValidator@@UEAA@XZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x180197174 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801974D4 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180199D30 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801CDD94 (--1DWMCursorBroker@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
