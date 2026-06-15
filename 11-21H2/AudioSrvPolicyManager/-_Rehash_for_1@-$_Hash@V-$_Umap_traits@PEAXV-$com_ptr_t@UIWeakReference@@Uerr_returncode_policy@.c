/*
 * XREFs of ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18001DA90
 * Callers:
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18001450C (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 * Callees:
 *     _o_ceilf_0 @ 0x180003470 (_o_ceilf_0.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Rehash_for_1(
        __int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  _QWORD *result; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 i; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rdi
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rdi
  _QWORD *v26; // r10
  _QWORD *v27; // r9
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // r9
  _QWORD *v31; // r8
  _QWORD *v32; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v3 < 0 )
    v4 = (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1))
       + (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1));
  else
    v4 = (float)(int)v3;
  v5 = o_ceilf_0(v4 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  v8 = 8LL;
  if ( v7 > 8 )
    v8 = v7;
  if ( v2 < v8 )
  {
    if ( v2 >= 0x200 || (v2 *= 8LL, v2 < v8) )
      v2 = v8;
  }
  _BitScanReverse64(&v9, 0xFFFFFFFFFFFFFFFuLL);
  if ( v2 > 1LL << v9 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v10, (v2 - 1) | 1);
  v11 = 1LL << ((unsigned __int8)v10 + 1);
  v12 = *(_QWORD *)(a1 + 8);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    a1 + 24,
    2 * v11,
    v12);
  *(_QWORD *)(a1 + 48) = v11 - 1;
  *(_QWORD *)(a1 + 56) = v11;
  result = **(_QWORD ***)(a1 + 8);
  v14 = result;
  while ( result != (_QWORD *)v12 )
  {
    v14 = (_QWORD *)*v14;
    v15 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
      v15 = 0x100000001B3LL * (*((unsigned __int8 *)result + i + 16) ^ (unsigned __int64)v15);
    v17 = 2 * (v15 & *(_QWORD *)(a1 + 48));
    v18 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v18 + 16 * (v15 & *(_QWORD *)(a1 + 48))) == v12 )
    {
      *(_QWORD *)(v18 + 16 * (v15 & *(_QWORD *)(a1 + 48))) = result;
LABEL_21:
      *(_QWORD *)(v18 + 8 * v17 + 8) = result;
      goto LABEL_29;
    }
    v19 = *(_QWORD **)(v18 + 16 * (v15 & *(_QWORD *)(a1 + 48)) + 8);
    v20 = result[2];
    if ( v20 == v19[2] )
    {
      v21 = (_QWORD *)*v19;
      if ( (_QWORD *)*v19 != result )
      {
        v22 = (_QWORD *)result[1];
        *v22 = v14;
        v23 = (_QWORD *)v14[1];
        *v23 = v21;
        v24 = (_QWORD *)v21[1];
        *v24 = result;
        v21[1] = v23;
        v14[1] = v22;
        result[1] = v24;
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
      v25 = v19 + 1;
      if ( *(_QWORD **)(v18 + 8 * v17) == v19 )
        break;
      v19 = (_QWORD *)*v25;
      if ( v20 == *(_QWORD *)(*v25 + 16LL) )
      {
        v26 = (_QWORD *)*v19;
        v27 = (_QWORD *)result[1];
        *v27 = v14;
        v28 = (_QWORD *)v14[1];
        *v28 = v26;
        v29 = (_QWORD *)v26[1];
        *v29 = result;
        v26[1] = v28;
        v14[1] = v27;
        result[1] = v29;
        goto LABEL_29;
      }
    }
    v30 = (_QWORD *)result[1];
    *v30 = v14;
    v31 = (_QWORD *)v14[1];
    *v31 = v19;
    v32 = (_QWORD *)*v25;
    *v32 = result;
    *v25 = v31;
    v14[1] = v30;
    result[1] = v32;
    *(_QWORD *)(v18 + 8 * v17) = result;
LABEL_29:
    result = v14;
  }
  return result;
}
