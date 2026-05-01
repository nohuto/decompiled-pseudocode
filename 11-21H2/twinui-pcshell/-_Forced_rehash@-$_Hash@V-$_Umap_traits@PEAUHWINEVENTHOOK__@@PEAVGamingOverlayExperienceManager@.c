/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18033BED8
 * Callers:
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180329F6C (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180019A40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 v8; // rsi
  const unsigned __int8 *v9; // r11
  const unsigned __int8 *v10; // rbx
  __int64 **v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  const unsigned __int8 **v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r8
  const unsigned __int8 **v19; // rdx
  const unsigned __int8 **v20; // rdx

  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1807B4DA8;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  result = (__int64)std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
                      (unsigned __int64 **)&qword_1807B4DB8,
                      2 * v5,
                      qword_1807B4DA8);
  v8 = v5 - 1;
  qword_1807B4DD8 = v5;
  qword_1807B4DD0 = v5 - 1;
  v9 = *(const unsigned __int8 **)qword_1807B4DA8;
  v10 = *(const unsigned __int8 **)qword_1807B4DA8;
  while ( v9 != (const unsigned __int8 *)v3 )
  {
    v10 = *(const unsigned __int8 **)v10;
    result = std::_Fnv1a_append_bytes((__int64)v7, v9 + 16, 8uLL);
    v13 = qword_1807B4DB8;
    v14 = 2 * (v8 & result);
    if ( *(_QWORD *)(qword_1807B4DB8 + 16 * (v8 & result)) == v3 )
    {
      *(_QWORD *)(qword_1807B4DB8 + 16 * (v8 & result)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    result = *(_QWORD *)(qword_1807B4DB8 + 16 * (v8 & result) + 8);
    v7 = *v11;
    if ( *v11 == *(__int64 **)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(const unsigned __int8 ***)(v12 + 8);
        *v16 = v10;
        v7 = (__int64 *)*((_QWORD *)v10 + 1);
        *v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        *((_QWORD *)v10 + 1) = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(qword_1807B4DB8 + 8 * v14) == result )
        break;
      result = *v17;
      if ( v7 == *(__int64 **)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(const unsigned __int8 ***)(v12 + 8);
        *v19 = v10;
        v7 = (__int64 *)*((_QWORD *)v10 + 1);
        *v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        *((_QWORD *)v10 + 1) = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(const unsigned __int8 ***)(v12 + 8);
    *v20 = v10;
    v7 = (__int64 *)*((_QWORD *)v10 + 1);
    *v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = (__int64)v7;
    *((_QWORD *)v10 + 1) = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v8 = qword_1807B4DD0;
    v9 = v10;
  }
  return result;
}
