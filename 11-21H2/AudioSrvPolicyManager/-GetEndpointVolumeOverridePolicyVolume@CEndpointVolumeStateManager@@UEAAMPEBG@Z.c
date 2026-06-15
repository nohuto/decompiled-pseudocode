/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180038C90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1800381E0 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800392B8 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  char **v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  float v14; // xmm6_4
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  char *v17[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  unsigned __int64 v19; // [rsp+48h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = (_QWORD *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = 7LL;
  v5 = -1LL;
  v18 = 0LL;
  v6 = -1LL;
  LOWORD(v17[0]) = 0;
  do
    ++v6;
  while ( a2[v6] );
  std::wstring::assign(v17, a2, v6);
  v7 = v17;
  v8 = v19;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0LL;
  if ( v19 >= 8 )
    v7 = (char **)v17[0];
  if ( 2 * v18 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v7 + v10++);
      v9 = 0x100000001B3LL * (v11 ^ v9);
    }
    while ( v10 < 2 * v18 );
  }
  v12 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Find_last<std::wstring>(
          v4,
          &v16,
          (char *)v17,
          v9)[1];
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(v17[0], 2 * v8 + 2);
  if ( v12 )
  {
    v18 = 0LL;
    v19 = 7LL;
    LOWORD(v17[0]) = 0;
    do
      ++v5;
    while ( a2[v5] );
    std::wstring::assign(v17, a2, v5);
    v13 = std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v4, v17);
    if ( v19 >= 8 )
      std::_Deallocate<16,0>(v17[0], 2 * v19 + 2);
    if ( *(_BYTE *)(*(_QWORD *)v13 + 8LL) )
      v14 = 0.0;
    else
      v14 = *(float *)(*(_QWORD *)v13 + 4LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v14;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return FLOAT_1_0;
  }
}
