/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800615FC (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6F2C (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18010E3D0 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x180110570 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 *     ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1801106F0 (-GetDataSourceId@AnimationDataProvider@@UEBA_KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z.c)
 *     ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x180114A40 (-OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_.c)
 *     ??1GestureHandler@@QEAA@XZ @ 0x180152C90 (--1GestureHandler@@QEAA@XZ.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801566AC (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180157BB8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180157D70 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18015AE80 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18015C598 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincip.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CBD4 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18015DA2C (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801600F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180161448 (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180163F08 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180165464 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x1801680F0 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801698E0 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
