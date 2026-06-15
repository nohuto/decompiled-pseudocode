/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002B0A0
 * Callers:
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800247F0 (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000AAD0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000AC80 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800253E8 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 **v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 appended; // rax
  __int64 ***v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // r10
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 v26; // [rsp+38h] [rbp+10h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    appended = std::_Fnv1a_append_bytes((__int64)v7, (const unsigned __int8 *const)v8 + 16, 8uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & appended);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & appended)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & appended)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    v15 = *(__int64 **)(v13 + 16 * (a1[6] & appended) + 8);
    v7 = *v11;
    if ( *v11 == (__int64 **)v15[2] )
    {
      v16 = (__int64 *)*v15;
      if ( *v15 != v12 )
      {
        v17 = *(_QWORD **)(v12 + 8);
        *v17 = v9;
        v7 = (__int64 **)v9[1];
        *v7 = v16;
        v18 = (_QWORD *)v16[1];
        *v18 = v12;
        v16[1] = (__int64)v7;
        v9[1] = v17;
        *(_QWORD *)(v12 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v15 + 1);
      if ( *(__int64 **)(v13 + 8 * v14) == v15 )
        break;
      v15 = *v19;
      if ( v7 == (__int64 **)(*v19)[2] )
      {
        v20 = (__int64 *)*v15;
        v21 = *(_QWORD **)(v12 + 8);
        *v21 = v9;
        v7 = (__int64 **)v9[1];
        *v7 = v20;
        v22 = (_QWORD *)v20[1];
        *v22 = v12;
        v20[1] = (__int64)v7;
        v9[1] = v21;
        *(_QWORD *)(v12 + 8) = v22;
        goto LABEL_15;
      }
    }
    v23 = *(_QWORD **)(v12 + 8);
    *v23 = v9;
    v7 = (__int64 **)v9[1];
    *v7 = v15;
    v24 = *v19;
    *v24 = v12;
    *v19 = (__int64 *)v7;
    v9[1] = v23;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v8 = v9;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
