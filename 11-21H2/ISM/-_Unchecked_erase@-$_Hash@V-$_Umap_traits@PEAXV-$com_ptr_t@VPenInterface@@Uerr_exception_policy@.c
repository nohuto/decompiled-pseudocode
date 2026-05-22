/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1801881EC
 * Callers:
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180187B44 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::_Unchecked_erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx

  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)a2 + 16, 8uLL);
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
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2 + 3);
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v8;
}
