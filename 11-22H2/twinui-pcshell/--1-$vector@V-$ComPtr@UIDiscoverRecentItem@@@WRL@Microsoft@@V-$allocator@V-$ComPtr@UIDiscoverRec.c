/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18048C5A8
 * Callers:
 *     _PenWorkspaceDiscoverBroker::GetRecentItems_::_1_::dtor$0 @ 0x18048D633 (_PenWorkspaceDiscoverBroker--GetRecentItems_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x18048C114 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPE.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::~vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
