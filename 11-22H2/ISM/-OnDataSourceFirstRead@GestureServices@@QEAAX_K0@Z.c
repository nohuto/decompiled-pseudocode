/*
 * XREFs of ?OnDataSourceFirstRead@GestureServices@@QEAAX_K0@Z @ 0x180073450
 * Callers:
 *     ?OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z @ 0x180122960 (-OnFirstDataRead@DataSourcePrincipal@@UEAAJPEAVBamoDataSourceStub@@_K@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 */

void __fastcall GestureServices::OnDataSourceFirstRead(GestureServices *this, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
    (char *)this + 264,
    &v5,
    &v6);
  if ( v5 != *((_QWORD *)this + 34) )
    *(_QWORD *)(*(_QWORD *)(v5 + 24) + 104LL) = a3;
}
