/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003933C
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180039030 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1800381E0 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x1800387E0 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        char *a2)
{
  char *v3; // r8
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v3 = *(char **)a2;
  v4 = 0xCBF29CE484222325uLL;
  v5 = 0LL;
  v6 = 2LL * *((_QWORD *)a2 + 2);
  if ( v6 )
  {
    do
    {
      v7 = (unsigned __int8)v3[v5++];
      v4 = 0x100000001B3LL * (v7 ^ v4);
    }
    while ( v5 < v6 );
  }
  v8 = (__int64 *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Find_last<std::wstring>(
                    a1,
                    v15,
                    a2,
                    v4)[1];
  if ( !v8 )
    return 0LL;
  v9 = a1[3];
  v10 = 2 * (v4 & a1[6]);
  if ( *(__int64 **)(v9 + 16 * (v4 & a1[6]) + 8) == v8 )
  {
    if ( *(__int64 **)(v9 + 16 * (v4 & a1[6])) == v8 )
    {
      v11 = a1[1];
      *(_QWORD *)(v9 + 16 * (v4 & a1[6])) = v11;
    }
    else
    {
      v11 = v8[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(__int64 **)(v9 + 16 * (v4 & a1[6])) == v8 )
  {
    *(_QWORD *)(v9 + 16 * (v4 & a1[6])) = *v8;
  }
  v12 = *v8;
  --a1[2];
  *(_QWORD *)v8[1] = v12;
  *(_QWORD *)(v12 + 8) = v8[1];
  std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(v8 + 6);
  v13 = v8[5];
  if ( v13 >= 8 )
    std::_Deallocate<16,0>((char *)v8[2], 2 * v13 + 2);
  v8[4] = 0LL;
  v8[5] = 7LL;
  *((_WORD *)v8 + 8) = 0;
  std::_Deallocate<16,0>((char *)v8, 0x38uLL);
  return 1LL;
}
