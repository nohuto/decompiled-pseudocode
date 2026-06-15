/*
 * XREFs of ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000EDD4 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180011F1C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void (__fastcall ***a5)(_QWORD, GUID *, _QWORD *))
{
  struct CDuckingManager *v6; // rbx
  _WORD *v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  _WORD *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD v16[2]; // [rsp+20h] [rbp-98h] BYREF
  char *v17; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h]
  struct CDuckingManager *v20; // [rsp+58h] [rbp-60h]
  unsigned __int64 v21; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall ***v22)(); // [rsp+80h] [rbp-38h]

  v6 = g_DuckingManager;
  if ( *((_BYTE *)g_DuckingManager + 448) )
    return 0LL;
  if ( a4 == 1 )
  {
    v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    v16[0] = (char *)v6 + 136;
    v20 = 0LL;
    v21 = 7LL;
    LOWORD(v18) = 0;
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    std::wstring::assign((char **)&v18, v8, v9);
    v10 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
            (__int64)v6 + 176,
            (__int64)&v17,
            (char *)&v18);
    ++*(_DWORD *)(*(_QWORD *)v10 + 48LL);
    if ( v21 >= 8 )
      std::_Deallocate<16,0>((char *)v18, 2 * v21 + 2);
    if ( v6 != (struct CDuckingManager *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    if ( *((_DWORD *)v6 + 102) != 3 )
    {
      v16[0] = 0LL;
      (**a5)(a5, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v17 = 0LL;
      v11 = v16[0];
      if ( v16[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 8LL))(v16[0]);
      v18 = off_180047DE0;
      v19 = a2;
      v20 = v6;
      v21 = v11;
      v22 = &v18;
      CSerialWorkQueue::QueueWorkItem((char *)v6 + 240, &v18);
      if ( v16[0] )
        (*(void (**)(void))(*(_QWORD *)v16[0] + 16LL))();
    }
  }
  else if ( !a4 )
  {
    v12 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    v17 = (char *)v6 + 136;
    v20 = 0LL;
    v21 = 7LL;
    LOWORD(v18) = 0;
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    std::wstring::assign((char **)&v18, v12, v13);
    v14 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Try_emplace<std::wstring,>(
            (__int64)v6 + 176,
            (__int64)v16,
            (char *)&v18);
    --*(_DWORD *)(*(_QWORD *)v14 + 48LL);
    if ( v21 >= 8 )
      std::_Deallocate<16,0>((char *)v18, 2 * v21 + 2);
    if ( v6 != (struct CDuckingManager *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 136));
    if ( *((_DWORD *)v6 + 102) != 3 )
    {
      v16[0] = 0LL;
      (**a5)(a5, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v17 = 0LL;
      v15 = v16[0];
      if ( v16[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 8LL))(v16[0]);
      v18 = off_180047DB0;
      v19 = a2;
      v20 = v6;
      v21 = v15;
      v22 = &v18;
      CSerialWorkQueue::QueueWorkItem((char *)v6 + 240, &v18);
      if ( v16[0] )
        (*(void (**)(void))(*(_QWORD *)v16[0] + 16LL))();
    }
  }
  return 0LL;
}
