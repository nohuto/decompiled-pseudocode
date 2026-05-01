/*
 * XREFs of ??1?$unordered_map@HURect@Foundation@Windows@@U?$hash@H@std@@U?$equal_to@H@5@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x18065EF48
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$36 @ 0x1802BD302 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$36.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065E79C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@s.c)
 */

void __fastcall std::unordered_map<int,Windows::Foundation::Rect>::~unordered_map<int,Windows::Foundation::Rect>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x28uLL);
}
