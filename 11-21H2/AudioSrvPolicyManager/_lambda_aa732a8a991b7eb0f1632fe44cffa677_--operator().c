/*
 * XREFs of _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Do_call @ 0x180013000 (std--_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000EDD4 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x1800106B0 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800110C8 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18001153C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800121A8 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator()(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v3; // r12
  unsigned __int16 *v4; // rsi
  CDuckingManager *v5; // r15
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned int v11; // ebx
  const unsigned __int16 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  const unsigned __int16 *v15; // rax
  int v16; // eax
  _BYTE v17[16]; // [rsp+28h] [rbp-38h] BYREF
  char *v18[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  unsigned __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = *a1;
  v4 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  v5 = (CDuckingManager *)a1[1];
  v6 = CDuckingManager::ApplyDuckingGainStages(v5, (struct IDuckingController *)a1[2], v4);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 108LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = CDuckingManager::RecalculateSessionVolumes(v5, v4, 0LL);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 111LL;
    goto LABEL_5;
  }
LABEL_6:
  v19 = 0LL;
  v20 = 7LL;
  LOWORD(v18[0]) = 0;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  std::wstring::assign(v18, v4, v10);
  v11 = *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
                                 (__int64)v5 + 176,
                                 (__int64)v17,
                                 (char *)v18)
                  + 48LL);
  v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  v13 = CDuckingManager::NotifyFilteredClientsAutoDuck(v5, v12, v4, v11);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v13);
  if ( v20 >= 8 )
    std::_Deallocate<16,0>(v18[0], 2 * v20 + 2);
  v19 = 0LL;
  v20 = 7LL;
  LOWORD(v18[0]) = 0;
  do
    ++v9;
  while ( v4[v9] );
  std::wstring::assign(v18, v4, v9);
  v14 = *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
                                 (__int64)v5 + 176,
                                 (__int64)v17,
                                 (char *)v18)
                  + 48LL);
  v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  v16 = CDuckingManager::NotifyUnfilteredClientsAutoDuck(v5, v15, v14);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v16);
  if ( v20 >= 8 )
    std::_Deallocate<16,0>(v18[0], 2 * v20 + 2);
  if ( v2 )
    LeaveCriticalSection(v2);
}
