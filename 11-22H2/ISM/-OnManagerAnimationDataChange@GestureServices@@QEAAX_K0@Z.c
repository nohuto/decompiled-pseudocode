/*
 * XREFs of ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x1801615BC
 * Callers:
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180073C64 (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180162C18 (-ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180163B88 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180165958 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 */

void __fastcall GestureServices::OnManagerAnimationDataChange(GestureServices *this, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = a3;
  v5 = a2;
  if ( a2 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
      (_QWORD *)this + 33,
      &v7,
      (const unsigned __int8 *)&v5);
    if ( v7 != *((_QWORD *)this + 34) )
      GestureHandler::OnManagerConfiguredForAnotherDataSource(*(GestureHandler **)(v7 + 24));
  }
  if ( a3 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
      (_QWORD *)this + 33,
      &v5,
      (const unsigned __int8 *)&v6);
    if ( v5 != *((_QWORD *)this + 34) )
      ++*(_DWORD *)(*(_QWORD *)(v5 + 24) + 228LL);
  }
}
