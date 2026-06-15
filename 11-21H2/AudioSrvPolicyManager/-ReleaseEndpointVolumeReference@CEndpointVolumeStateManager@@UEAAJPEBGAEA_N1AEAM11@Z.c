/*
 * XREFs of ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180039030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1800381E0 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180038E50 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800392B8 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003933C (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::ReleaseEndpointVolumeReference(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        float *a5,
        bool *a6,
        bool *a7)
{
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  _QWORD *v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  char **v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r8
  float **v21; // r14
  bool v23; // dl
  signed __int32 v24; // eax
  const char *v26; // [rsp+28h] [rbp-89h]
  __int64 v28; // [rsp+50h] [rbp-61h] BYREF
  char *v29[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v30; // [rsp+70h] [rbp-41h]
  unsigned __int64 v31; // [rsp+78h] [rbp-39h]
  char *v32[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v33; // [rsp+90h] [rbp-21h]
  unsigned __int64 v34; // [rsp+98h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v11 = (_QWORD *)((char *)this + 56);
  v33 = 0LL;
  v12 = -1LL;
  v34 = 7LL;
  v13 = -1LL;
  LOWORD(v32[0]) = 0;
  do
    ++v13;
  while ( a2[v13] );
  std::wstring::assign(v32, a2, v13);
  v14 = v32;
  v15 = v34;
  v16 = 0xCBF29CE484222325uLL;
  v17 = 0LL;
  if ( v34 >= 8 )
    v14 = (char **)v32[0];
  if ( 2 * v33 )
  {
    do
    {
      v18 = *((unsigned __int8 *)v14 + v17++);
      v16 = 0x100000001B3LL * (v18 ^ v16);
    }
    while ( v17 < 2 * v33 );
  }
  v19 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Find_last<std::wstring>(
          v11,
          &v28,
          (char *)v32,
          v16)[1];
  if ( v15 >= 8 )
    std::_Deallocate<16,0>(v32[0], 2 * v15 + 2);
  if ( v19 )
  {
    v31 = 7LL;
    v30 = 0LL;
    v20 = -1LL;
    LOWORD(v29[0]) = 0;
    do
      ++v20;
    while ( a2[v20] );
    std::wstring::assign(v29, a2, v20);
    v21 = (float **)std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(v11, v29);
    if ( v31 >= 8 )
      std::_Deallocate<16,0>(v29[0], 2 * v31 + 2);
    if ( (*((_DWORD *)*v21 + 9))-- == 1 )
    {
      *a5 = **v21;
      *a7 = *((_BYTE *)*v21 + 8);
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)*v21 + 3, 1234, 1234) == 0;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)*v21 + 4, 1234, 1234);
      v30 = 0LL;
      v31 = 7LL;
      LOWORD(v29[0]) = 0;
      *a4 = v23;
      *a6 = v24 == 0;
      *a3 = 1;
      do
        ++v12;
      while ( a2[v12] );
      std::wstring::assign(v29, a2, v12);
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        v11,
        v29);
      if ( v31 >= 8 )
        std::_Deallocate<16,0>(v29[0], 2 * v31 + 2);
    }
  }
  else
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      238LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)0x8000FFFFLL,
      (__int64)"Unexpected release of reference to EndpointVolumeState.",
      v26);
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  return 0LL;
}
