/*
 * XREFs of ?OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180122B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x1801658F8 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 */

__int64 __fastcall DataProviderPrincipal::OnReaderDisconnected(
        DataProviderPrincipal *this,
        struct BamoDataProviderStub *a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v8 = a3;
  v6 = v5;
  std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
    v5 + 264,
    &v9,
    &v8);
  if ( v9 != *(_QWORD *)(v6 + 272) )
    GestureHandler::OnDataSourceReaderDisconnected(*(GestureHandler **)(v9 + 24));
  return 0LL;
}
