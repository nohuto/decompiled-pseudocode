/*
 * XREFs of ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x1801616D0
 * Callers:
 *     ?OnConnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x180055B40 (-OnConnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x180163FB0 (-OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ.c)
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x1801640E8 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 *     ?OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z @ 0x1801659B8 (-OnTargetConfiguredForAnotherDataSource@GestureHandler@@QEAAXPEAVAnimationTargetClientProxy@@@Z.c)
 */

void __fastcall GestureServices::OnTargetAnimationDataChange(
        GestureServices *this,
        struct AnimationTargetClientProxy *a2,
        __int64 a3,
        __int64 a4)
{
  struct AnimationTargetClientProxy *v6; // rdx
  struct AnimationTargetClientProxy *v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  if ( a3 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
      (_QWORD *)this + 33,
      &v7,
      (const unsigned __int8 *)&v8);
    if ( v7 != *((struct AnimationTargetClientProxy **)this + 34) )
      GestureHandler::OnTargetConfiguredForAnotherDataSource(*((GestureHandler **)v7 + 3), v6);
  }
  if ( a4 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
      (_QWORD *)this + 33,
      &v8,
      (const unsigned __int8 *)&v9);
    if ( v8 != *((_QWORD *)this + 34) )
      ++*(_DWORD *)(*(_QWORD *)(v8 + 24) + 236LL);
  }
}
