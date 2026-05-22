/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x1800EB9A4
 * Callers:
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800E8FE0 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Unchecked_erase(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rcx

  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)a2 + 16, 4uLL);
  v5 = v4[3];
  v6 = 2 * (v4[6] & appended);
  if ( *(__int64 **)(v5 + 16 * (v4[6] & appended) + 8) == a2 )
  {
    if ( *(__int64 **)(v5 + 16 * (v4[6] & appended)) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = a2[1];
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 16 * (v4[6] & appended)) == a2 )
  {
    *(_QWORD *)(v5 + 16 * (v4[6] & appended)) = *a2;
  }
  v8 = *a2;
  --v4[2];
  *(_QWORD *)a2[1] = v8;
  *(_QWORD *)(v8 + 8) = a2[1];
  v9 = (std::_Ref_count_base *)a2[4];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::_Deallocate<16,0>(a2, 0x28uLL);
  return v8;
}
