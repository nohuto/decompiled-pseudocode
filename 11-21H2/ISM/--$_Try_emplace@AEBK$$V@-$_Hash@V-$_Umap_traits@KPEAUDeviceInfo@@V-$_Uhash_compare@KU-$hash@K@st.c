/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800419DC
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180041D30 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18019AFD0 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rbp
  _DWORD *v11; // rbx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 4 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(__int64 **)(a1 + 8);
  if ( v9 != v10 )
  {
    while ( *a3 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      {
        v10 = v9;
        v9 = 0LL;
        goto LABEL_23;
      }
      v9 = (__int64 *)v9[1];
    }
    v10 = (__int64 *)*v9;
LABEL_23:
    if ( v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v23 = a1 + 8;
  v11 = operator new(0x20uLL);
  *((_QWORD *)&v23 + 1) = v11;
  v11[4] = *a3;
  *((_QWORD *)v11 + 3) = 0LL;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v12 + 1;
  if ( v12 + 1 < 0 )
    v14 = (float)(int)(v13 & 1 | (v13 >> 1)) + (float)(int)(v13 & 1 | (v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 < 0 )
  {
    v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
    v16 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  if ( (float)(v14 / v16) > *(float *)a1 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1);
    v23 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _DWORD *, __int64))std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>)(
                       a1,
                       &v23,
                       v11 + 4,
                       v7);
    v12 = *(_QWORD *)(a1 + 16);
    v10 = (__int64 *)v23;
  }
  v17 = (_QWORD *)v10[1];
  *(_QWORD *)(a1 + 16) = v12 + 1;
  *(_QWORD *)v11 = v10;
  *((_QWORD *)v11 + 1) = v17;
  *v17 = v11;
  v10[1] = (__int64)v11;
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v20 = *(__int64 **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v20 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v11;
  }
  else
  {
    if ( v20 == v10 )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v11;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
      goto LABEL_14;
  }
  *(_QWORD *)(v18 + 8 * v19 + 8) = v11;
LABEL_14:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
