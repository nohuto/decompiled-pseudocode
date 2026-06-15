/*
 * XREFs of ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800249E0
 * Callers:
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180025A94 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AC20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000ACD0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18002310C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18002353C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returnco.c)
 *     ??$_Find_last@PEAX@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAX_K@Z @ 0x180024820 (--$_Find_last@PEAX@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_pol.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180024EB0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002B290 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::emplace<IAudioSessionInfo * &,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy> &>(
        float *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v8; // r15
  unsigned __int8 *v9; // r14
  __int64 v10; // rcx
  __int64 appended; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v20; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-30h]
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v20 = a1 + 2;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v21 = v8;
  v9 = (unsigned __int8 *)(v8 + 2);
  v8[2] = *a3;
  v10 = *a4;
  v8[3] = *a4;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  appended = std::_Fnv1a_append_bytes(v10, v9, 8uLL);
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Find_last<void *>(
    a1,
    v22,
    v9,
    appended);
  if ( v22[1] )
  {
    *(_QWORD *)a2 = v22[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v13 = v12 + 1;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *((_QWORD *)a1 + 7);
    if ( v15 < 0 )
    {
      v17 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v17 + (float)(int)v17;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *a1 )
    {
      v18 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v13);
      std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        a1,
        v18);
      *(_OWORD *)v22 = *(_OWORD *)std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Find_last<void *>(
                                    a1,
                                    v22,
                                    v9,
                                    appended);
    }
    v21 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v22[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>(&v20);
  return a2;
}
