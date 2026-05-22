/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@EEAAXXZ @ 0x1801158C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E5E78 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 */

void __fastcall std::_Ref_count_obj2<SystemCursorShape2>::_Destroy(__int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 56), (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 40));
  std::_Deallocate<16,0>(*(void **)(a1 + 40), 0x28uLL);
  v3 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
