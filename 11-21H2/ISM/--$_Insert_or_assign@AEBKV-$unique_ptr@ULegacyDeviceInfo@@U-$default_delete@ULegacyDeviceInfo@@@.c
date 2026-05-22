/*
 * XREFs of ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18003FF7C
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003FF48 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULeg.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C03C (--$-4U-$default_delete@ULegacyDeviceInfo@@@std@@$0A@@-$unique_ptr@ULegacyDeviceInfo@@U-$default_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
        float *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm1_4
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // r8
  __int64 v25; // rax
  __int64 **v26; // rax
  __int64 v27; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 4 );
  v10 = *((_QWORD *)a1 + 3);
  v11 = *(__int64 **)(v10 + 16 * (v9 & *((_QWORD *)a1 + 6)) + 8);
  v12 = (__int64 *)*((_QWORD *)a1 + 1);
  if ( v11 != v12 )
  {
    while ( *a3 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == *(__int64 **)(v10 + 16 * (v9 & *((_QWORD *)a1 + 6))) )
      {
        v12 = v11;
        v11 = 0LL;
        goto LABEL_23;
      }
      v11 = (__int64 *)v11[1];
    }
    v12 = (__int64 *)*v11;
LABEL_23:
    if ( v11 )
    {
      std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(v11 + 3, a4);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v13 = operator new(0x20uLL);
  v13[4] = *a3;
  v14 = *a4;
  *a4 = 0LL;
  *((_QWORD *)v13 + 3) = v14;
  v15 = *((_QWORD *)a1 + 2);
  v16 = v15 + 1;
  if ( v15 + 1 < 0 )
    v17 = (float)(int)(v16 & 1 | (v16 >> 1)) + (float)(int)(v16 & 1 | (v16 >> 1));
  else
    v17 = (float)(int)v16;
  v18 = *((_QWORD *)a1 + 7);
  if ( v18 < 0 )
  {
    v25 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v18 >> 1);
    v19 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v19 = (float)(int)v18;
  }
  if ( (float)(v17 / v19) > *a1 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1);
    v26 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::_Find_last<unsigned long>(
                        a1,
                        &v27,
                        v13 + 4,
                        v9);
    v15 = *((_QWORD *)a1 + 2);
    v12 = *v26;
  }
  v20 = (_QWORD *)v12[1];
  *((_QWORD *)a1 + 2) = v15 + 1;
  *(_QWORD *)v13 = v12;
  *((_QWORD *)v13 + 1) = v20;
  *v20 = v13;
  v12[1] = (__int64)v13;
  v21 = *((_QWORD *)a1 + 3);
  v22 = 2 * (v9 & *((_QWORD *)a1 + 6));
  v23 = *(__int64 **)(v21 + 16 * (v9 & *((_QWORD *)a1 + 6)));
  if ( v23 == *((__int64 **)a1 + 1) )
  {
    *(_QWORD *)(v21 + 16 * (v9 & *((_QWORD *)a1 + 6))) = v13;
  }
  else
  {
    if ( v23 == v12 )
    {
      *(_QWORD *)(v21 + 16 * (v9 & *((_QWORD *)a1 + 6))) = v13;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v21 + 16 * (v9 & *((_QWORD *)a1 + 6)) + 8) != v20 )
      goto LABEL_14;
  }
  *(_QWORD *)(v21 + 8 * v22 + 8) = v13;
LABEL_14:
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
