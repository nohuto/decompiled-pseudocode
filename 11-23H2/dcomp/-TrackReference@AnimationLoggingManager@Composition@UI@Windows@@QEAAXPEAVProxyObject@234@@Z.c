/*
 * XREFs of ?TrackReference@AnimationLoggingManager@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@@Z @ 0x18002E54C
 * Callers:
 *     ?TrackReferenceForRedirectableProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEAV1234@@Z @ 0x18002E500 (-TrackReferenceForRedirectableProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEAV1234@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18002E5CC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Compos.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::AnimationLoggingManager::TrackReference(
        Windows::UI::Composition::AnimationLoggingManager *this,
        struct Windows::UI::Composition::ProxyObject *a2)
{
  _QWORD *v3; // r10
  unsigned int v4; // r11d
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = *((_DWORD *)a2 + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::_Find_lower_bound<unsigned int>(
    (char *)this + 152,
    v7,
    &v9);
  if ( *(_BYTE *)(v8 + 25) || v4 < *(_DWORD *)(v8 + 32) || v8 == *v3 )
  {
    v5 = *(_QWORD *)std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
                      v3,
                      v7,
                      &v9);
    *(_QWORD *)(v5 + 40) = a2;
    v6 = *(_QWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 48) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
