/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAX@Z @ 0x1801B285C
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x1801B2BF0 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x1801B3420 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801B409C (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAX@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAX_K@Z @ 0x180105A54 (--$_Find_last@PEAX@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  v7 = std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::_Find_last<void *>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
