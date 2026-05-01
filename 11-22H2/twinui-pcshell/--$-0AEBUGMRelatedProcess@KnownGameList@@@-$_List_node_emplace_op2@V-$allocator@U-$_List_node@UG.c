/*
 * XREFs of ??$?0AEBUGMRelatedProcess@KnownGameList@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UGMRelatedProcess@KnownGameList@@PEAX@std@@@1@AEBUGMRelatedProcess@KnownGameList@@@Z @ 0x18073E628
 * Callers:
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18073EBEC (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<KnownGameList::GMRelatedProcess,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<KnownGameList::GMRelatedProcess,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v5; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v5 = operator new(0x50uLL);
  a1[1] = v5;
  v5[1] = *(_OWORD *)a3;
  v5[2] = *(_OWORD *)(a3 + 16);
  v5[3] = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v5 + 8) = *(_QWORD *)(a3 + 48);
  *((_DWORD *)v5 + 18) = *(_DWORD *)(a3 + 56);
  *((_WORD *)v5 + 38) = *(_WORD *)(a3 + 60);
  return a1;
}
