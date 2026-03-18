/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800320E4
 * Callers:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180031F14 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceRe.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert_new_node_before(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_1803D37C0;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_1803D37C8;
  v6 = 2 * (a2 & xmmword_1803D37E0);
  v7 = *(_QWORD *)(qword_1803D37C8 + 16 * (a2 & xmmword_1803D37E0));
  if ( v7 == qword_1803D37B8 )
  {
    *(_QWORD *)(qword_1803D37C8 + 8 * v6) = a4;
  }
  else
  {
    if ( v7 == a3 )
    {
      *(_QWORD *)(qword_1803D37C8 + 8 * v6) = a4;
      return a4;
    }
    if ( *(_QWORD **)(qword_1803D37C8 + 8 * v6 + 8) != v4 )
      return a4;
  }
  *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
  return a4;
}
