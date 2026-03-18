/*
 * XREFs of ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x18004A648
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180031F14 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceRe.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::CWeakResourceReference(
        CWeakResourceReference *this,
        struct CResource *a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  v5 = *((_QWORD *)this + 2);
  *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
                           0LL,
                           (__int64)v4,
                           &v5)
            + 24LL) = this;
  *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) |= 8u;
  return this;
}
