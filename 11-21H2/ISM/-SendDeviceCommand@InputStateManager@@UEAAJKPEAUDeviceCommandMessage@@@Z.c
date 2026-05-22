/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x1800B3430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        unsigned int a2,
        struct DeviceCommandMessage *a3)
{
  __int64 ***v6; // rdi
  __int64 **i; // rbx
  __int64 appended; // rax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  if ( a2 )
  {
    appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v12, 4uLL);
    v9 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
           (_QWORD *)this + 12,
           v11,
           &v12,
           appended)[1];
    if ( !v9 )
      v9 = *((_QWORD *)this + 13);
    if ( v9 != *((_QWORD *)this + 13) )
      (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**(_QWORD **)(v9 + 24) + 24LL))(
        *(_QWORD *)(v9 + 24),
        a2,
        a3);
  }
  else
  {
    v6 = (__int64 ***)*((_QWORD *)this + 13);
    for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      (*(void (__fastcall **)(__int64 *, _QWORD, struct DeviceCommandMessage *))(*i[3] + 24))(
        i[3],
        *((unsigned int *)i + 4),
        a3);
  }
  return 0LL;
}
