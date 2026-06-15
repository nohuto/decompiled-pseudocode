/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x18002B7C0
 * Callers:
 *     ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18002F660 (-UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000AC80 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAX@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAX_K@Z @ 0x180024630 (--$_Find_last@PEAX@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_pol.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800246F0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncod.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::erase(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rdi
  _QWORD *v4; // rdx
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a2, 8uLL);
  v5 = (__int64 *)std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Find_last<void *>(
                    a1,
                    v11,
                    v4,
                    appended)[1];
  if ( !v5 )
    return 0LL;
  v6 = a1[3];
  v7 = 2 * (appended & a1[6]);
  if ( *(__int64 **)(v6 + 16 * (appended & a1[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v6 + 16 * (appended & a1[6])) == v5 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 16 * (appended & a1[6])) = v8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(__int64 **)(v6 + 16 * (appended & a1[6])) == v5 )
  {
    *(_QWORD *)(v6 + 16 * (appended & a1[6])) = *v5;
  }
  v9 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>(
    v9,
    v5);
  return 1LL;
}
