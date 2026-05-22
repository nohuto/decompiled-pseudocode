/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x1801B5210
 * Callers:
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x1801B5130 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800D6FF4 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18015C240 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x1801B4DBC (--$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@In.c)
 *     ??$_Insert_or_assign@KAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAUPointerState@InputInfoValidator@@@Z @ 0x1801B4EEC (--$_Insert_or_assign@KAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@Input.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801B5588 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputInfoValidator::ValidatePointerInput(
        InputInfoValidator *this,
        struct PointerInputInfo *a2,
        char a3)
{
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // r13d
  int v8; // edi
  int v9; // ebx
  char v10; // di
  __int64 v11; // rcx
  _QWORD *v13; // rsi
  const unsigned __int8 **v14; // rdi
  const unsigned __int8 *i; // rbx
  unsigned __int64 appended; // rax
  _DWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned int v19; // ebx
  _QWORD **v20; // rdi
  _QWORD *j; // rbx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  int v24; // [rsp+28h] [rbp-58h]
  _QWORD v25[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v27; // [rsp+48h] [rbp-38h]
  void *v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  int v31; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD **v32; // [rsp+D8h] [rbp+58h] BYREF

  LOBYTE(v31) = a3;
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)&v26);
  v6 = 0LL;
  if ( *((_DWORD *)a2 + 79) )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)a2 + 36 * v6 + 81);
      LODWORD(v30) = v7;
      v8 = *((_DWORD *)a2 + 36 * v6 + 83);
      HIDWORD(v30) = v8;
      v31 = v7;
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        &v26,
        &v32,
        (const unsigned __int8 *)&v31);
      if ( v32 != v27 )
        break;
      v9 = v8 & 2;
      if ( (v8 & 4) != 0 )
      {
        v10 = 1;
        if ( !v9 )
          break;
      }
      else
      {
        v10 = 0;
      }
      v13 = (_QWORD *)((char *)this + 16);
      v31 = v7;
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        (_QWORD *)this + 2,
        &v23,
        (const unsigned __int8 *)&v31);
      if ( (v23 == *((_QWORD *)this + 3)
         || (*(_QWORD *)(v23 + 20) & 0x200000000LL) == 0 && (*(_QWORD *)(v23 + 20) & 0x400000000LL) == 0)
        && !v9
        && !v10 )
      {
        break;
      }
      v31 = v7;
      std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long,InputInfoValidator::PointerState &>(
        &v26,
        (__int64)v25,
        (unsigned __int8 *)&v31,
        &v30);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a2 + 79) )
        goto LABEL_15;
    }
    std::_Deallocate<16,0>(v28, (v29 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL);
    v28 = 0LL;
    v29 = 0LL;
    std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
      v11,
      v27);
    std::_Deallocate<16,0>(v27, 0x20uLL);
    return 2147500037LL;
  }
  else
  {
    v13 = (_QWORD *)((char *)this + 16);
LABEL_15:
    v14 = (const unsigned __int8 **)*((_QWORD *)this + 3);
    for ( i = *v14; i != (const unsigned __int8 *)v14; i = *(const unsigned __int8 **)i )
    {
      appended = std::_Fnv1a_append_bytes(v5, i + 20, 4uLL);
      v18 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
              &v26,
              v25,
              v17,
              appended);
      if ( (i[24] & 2) != 0 && !v18[1] )
      {
        v19 = -2147467259;
        goto LABEL_25;
      }
    }
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::clear(v13);
    v20 = v27;
    for ( j = *v27; j != v20; j = (_QWORD *)*j )
    {
      v23 = j[2];
      v24 = *((_DWORD *)j + 6);
      std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
        v13,
        (__int64)v25,
        (unsigned __int8 *)&v23 + 4,
        (__int64 *)((char *)&v23 + 4));
    }
    v19 = 0;
LABEL_25:
    std::_Deallocate<16,0>(v28, (v29 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL);
    v28 = 0LL;
    v29 = 0LL;
    std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
      v22,
      v27);
    std::_Deallocate<16,0>(v27, 0x20uLL);
    return v19;
  }
}
