/*
 * XREFs of _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_::_Do_call @ 0x180012E10 (std--_Func_impl_no_alloc__lambda_1e03ffd0b3816784b19a9acf2aab20e8__void_--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000EDD4 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18001099C (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18001131C (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180011700 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800121A8 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned __int16 *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // r15
  CDuckingManager *v5; // rdi
  char **v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // ebx
  const unsigned __int16 *v9; // rax
  int v10; // eax
  const unsigned __int16 *v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-49h] BYREF
  __int64 v14; // [rsp+28h] [rbp-41h] BYREF
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-29h]
  char *v17; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+58h] [rbp-11h]
  unsigned __int64 v19; // [rsp+68h] [rbp-1h]
  char **v20; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  Sleep(0x1F4u);
  v2 = *a1;
  v3 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v16 = v4;
  v5 = (CDuckingManager *)a1[1];
  v13 = a1[2];
  *(_QWORD *)&v15 = &v13;
  *((_QWORD *)&v15 + 1) = &v14;
  v17 = (char *)off_180047CF0;
  v18 = v15;
  v20 = &v17;
  CDuckingManager::ForEachDuckableSession(v5, v3, &v17);
  if ( v20 )
  {
    v6 = &v17;
    LOBYTE(v6) = v20 != &v17;
    (*((void (__fastcall **)(char **, char **))*v20 + 4))(v20, v6);
  }
  CDuckingManager::RecalculateSessionVolumes(v5, v3, &v14);
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = 7LL;
  LOWORD(v17) = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( v3[v7] );
  std::wstring::assign(&v17, v3, v7);
  v8 = *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
                                (__int64)v5 + 176,
                                (__int64)&v15,
                                (char *)&v17)
                 + 48LL);
  if ( v19 >= 8 )
    std::_Deallocate<16,0>(v17, 2 * v19 + 2);
  if ( !v8 )
  {
    v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    v10 = CDuckingManager::NotifyFilteredClientsAutoUnduck(v5, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v10);
  }
  v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v12 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(v5, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v12);
  if ( v4 )
    LeaveCriticalSection(v4);
}
