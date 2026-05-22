/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4
 * Callers:
 *     ??1InputSinkDataCache@@QEAA@XZ @ 0x180055F30 (--1InputSinkDataCache@@QEAA@XZ.c)
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x180056288 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1?$list@U?$pair@$$CBI_K@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ @ 0x1800AA398 (--1-$list@U-$pair@$$CBI_K@std@@V-$allocator@U-$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800DAC10 (--1InputStateManager@@MEAA@XZ.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x18010FAEC (--1SystemCursorController2@@UEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x180112F60 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180116E88 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180119F78 (-clear@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18016AA44 (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18016AC80 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x180171974 (--1ResizeProcessor@@UEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x180175448 (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180175594 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x18019E8A0 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x1801B7288 (--1HapticInterface@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x1801BB4FC (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x1801C2794 (--1InputInfoValidator@@UEAA@XZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x1801C2930 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801C2CA8 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801C56F4 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801F9AA0 (--1DWMCursorBroker@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
