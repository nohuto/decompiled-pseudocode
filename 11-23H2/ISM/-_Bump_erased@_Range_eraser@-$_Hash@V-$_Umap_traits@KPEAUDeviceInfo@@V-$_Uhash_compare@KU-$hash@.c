/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18010B85C
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18010BA38 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801B5448 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KUPointerState@InputInfoValidator@@V-$_Uhash_compare@K.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)a1[2];
  a1[2] = *v2;
  std::_Deallocate<16,0>(v2, 0x20uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
