/*
 * XREFs of ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C
 * Callers:
 *     ?DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ @ 0x18000BFF0 (-DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ @ 0x18000F450 (-DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848 (-RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928 (-RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIUnknown@@@Z @ 0x18000DC04 (-erase@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUI.c)
 *     ??$emplace@AEAU?$pair@PEAUIUnknown@@PEAU1@@std@@@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@PEAUIUnknown@@PEAU1@@1@@Z @ 0x18007FC54 (--$emplace@AEAU-$pair@PEAUIUnknown@@PEAU1@@std@@@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@1@AEBQEAUIUnknown@@@Z @ 0x18008010C (--$find@X@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PE.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::MapWeakPeerForWeakTargetBase::Configure(
        struct CReadWriteLock **this,
        struct CReadWriteLock *a2,
        struct IUnknown *a3,
        struct IUnknown *a4,
        bool a5)
{
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-10h] BYREF
  struct CReadWriteLock *v10; // [rsp+68h] [rbp+28h] BYREF
  struct IUnknown *v11; // [rsp+70h] [rbp+30h] BYREF

  v11 = a3;
  v10 = a2;
  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  dword_180220AE0 = GetCurrentThreadId();
  if ( !a3 || !a4 )
    goto LABEL_10;
  std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::find<void>(
    this,
    &v10,
    &v11);
  if ( !a5 )
  {
    if ( v10 != this[1] && *((struct IUnknown **)v10 + 3) == a4 )
    {
      std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::erase(
        this,
        (const unsigned __int8 *)&v11);
      goto LABEL_6;
    }
LABEL_10:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  if ( v10 != this[1] )
    goto LABEL_10;
  v8[0] = a3;
  v8[1] = a4;
  std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::emplace<std::pair<IUnknown *,IUnknown *> &>(
    (__int64)this,
    (__int64)v9,
    (__int64)v8);
LABEL_6:
  dword_180220AE0 = 0;
  ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
}
