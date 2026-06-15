/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180039EFC
 * Callers:
 *     ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x180039470 (--$emplace@AEA_KPEAUAudioStateMonitor@@@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonit.c)
 * Callees:
 *     _o_ceilf_0 @ 0x180003470 (_o_ceilf_0.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Rehash_for_1(
        __int64 a1)
{
  __int64 v1; // rdx
  bool v3; // sf
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  float v6; // xmm0_4
  float v7; // xmm0_4
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *result; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 i; // r9
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r10
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rdi
  _QWORD *v26; // r9
  _QWORD *v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rdi
  _QWORD *v30; // r10
  _QWORD *v31; // r9
  _QWORD *v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // r9
  _QWORD *v35; // r8
  _QWORD *v36; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 + 1 < 0;
  v4 = v1 + 1;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    v6 = (float)(int)(v4 & 1 | (v4 >> 1)) + (float)(int)(v4 & 1 | (v4 >> 1));
  else
    v6 = (float)(int)v4;
  v7 = o_ceilf_0(v6 / *(float *)a1);
  v8 = 0LL;
  if ( v7 >= 9.223372e18 )
  {
    v7 = v7 - 9.223372e18;
    if ( v7 < 9.223372e18 )
      v8 = 0x8000000000000000uLL;
  }
  v9 = v8 + (unsigned int)(int)v7;
  v10 = 8LL;
  if ( v9 > 8 )
    v10 = v9;
  if ( v5 < v10 )
  {
    if ( v5 >= 0x200 || (v5 *= 8LL, v5 < v10) )
      v5 = v10;
  }
  _BitScanReverse64(&v11, 0xFFFFFFFFFFFFFFFuLL);
  if ( v5 > 1LL << v11 )
    std::_Xlength_error("invalid hash bucket count");
  v12 = v5 - 1;
  v13 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v14, v12 | 1);
  v15 = 1LL << ((unsigned __int8)v14 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    a1 + 24,
    2 * v15,
    v13);
  *(_QWORD *)(a1 + 56) = v15;
  *(_QWORD *)(a1 + 48) = v15 - 1;
  result = **(_QWORD ***)(a1 + 8);
  v17 = result;
  while ( result != (_QWORD *)v13 )
  {
    v17 = (_QWORD *)*v17;
    v18 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
    {
      v20 = *((unsigned __int8 *)result + i + 16);
      v18 = 0x100000001B3LL * (v20 ^ v18);
    }
    v21 = *(_QWORD *)(a1 + 24);
    v22 = 2 * (v18 & *(_QWORD *)(a1 + 48));
    if ( *(_QWORD *)(v21 + 16 * (v18 & *(_QWORD *)(a1 + 48))) == v13 )
    {
      *(_QWORD *)(v21 + 16 * (v18 & *(_QWORD *)(a1 + 48))) = result;
LABEL_21:
      *(_QWORD *)(v21 + 8 * v22 + 8) = result;
      goto LABEL_29;
    }
    v23 = *(_QWORD **)(v21 + 16 * (v18 & *(_QWORD *)(a1 + 48)) + 8);
    v24 = result[2];
    if ( v24 == v23[2] )
    {
      v25 = (_QWORD *)*v23;
      if ( (_QWORD *)*v23 != result )
      {
        v26 = (_QWORD *)result[1];
        *v26 = v17;
        v27 = (_QWORD *)v17[1];
        *v27 = v25;
        v28 = (_QWORD *)v25[1];
        *v28 = result;
        v25[1] = v27;
        v17[1] = v26;
        result[1] = v28;
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
      v29 = v23 + 1;
      if ( *(_QWORD **)(v21 + 8 * v22) == v23 )
        break;
      v23 = (_QWORD *)*v29;
      if ( v24 == *(_QWORD *)(*v29 + 16LL) )
      {
        v30 = (_QWORD *)*v23;
        v31 = (_QWORD *)result[1];
        *v31 = v17;
        v32 = (_QWORD *)v17[1];
        *v32 = v30;
        v33 = (_QWORD *)v30[1];
        *v33 = result;
        v30[1] = v32;
        v17[1] = v31;
        result[1] = v33;
        goto LABEL_29;
      }
    }
    v34 = (_QWORD *)result[1];
    *v34 = v17;
    v35 = (_QWORD *)v17[1];
    *v35 = v23;
    v36 = (_QWORD *)*v29;
    *v36 = result;
    *v29 = v35;
    v17[1] = v34;
    result[1] = v36;
    *(_QWORD *)(v21 + 8 * v22) = result;
LABEL_29:
    result = v17;
  }
  return result;
}
