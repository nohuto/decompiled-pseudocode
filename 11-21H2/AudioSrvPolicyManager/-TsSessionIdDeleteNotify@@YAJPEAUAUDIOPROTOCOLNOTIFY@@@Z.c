/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E8B8
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180031930 (TS_AudioProtocolNotifyRundown.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x180031B50 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003181C (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionIdDeleteNotify(struct AUDIOPROTOCOLNOTIFY *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // r12
  int v4; // eax
  unsigned int v5; // edi
  char v7; // bp
  struct TSSession *v8; // rsi
  _QWORD *v9; // r15
  char *v10; // rdi
  __int64 **v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // r8
  char *v14; // r14
  void *v15; // rcx
  __int64 v16; // rcx
  char *v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 **v18; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct TSSession *v20; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = v2;
  v3 = (char *)a1 + 4;
  v4 = TsSessionFromSessionId(*((_DWORD *)a1 + 1), 0, &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CF,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v5;
  }
  v7 = 0;
  v8 = v20;
  v9 = (_QWORD *)((char *)v20 + 16);
  v10 = 0LL;
  v17 = 0LL;
  v18 = (__int64 **)&v17;
  v11 = (__int64 **)((char *)v20 + 16);
  v12 = (__int64 **)*((_QWORD *)v20 + 2);
  if ( v12 )
  {
    do
    {
      if ( v7 || v12[1] != (__int64 *)a1 )
      {
        v11 = v12;
        v12 = (__int64 **)*v12;
      }
      else
      {
        v7 = 1;
        v13 = *v11;
        v12 = (__int64 **)**v11;
        *v13 = 0LL;
        *v11 = (__int64 *)v12;
        *v18 = v13;
        v18 = (__int64 **)v13;
      }
    }
    while ( v12 );
    v10 = v17;
  }
  if ( v10 )
  {
    do
    {
      v14 = *(char **)v10;
      v15 = (void *)*((_QWORD *)v10 + 1);
      if ( v15 )
        operator delete(v15);
      std::_Deallocate<16,0>(v10, 0x10uLL);
      v10 = v14;
    }
    while ( v14 );
  }
  if ( !v7 )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x407,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D2,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v5;
  }
  if ( *((_DWORD *)v8 + 8) && *((_DWORD *)v8 + 1) == 0xFFFF && !*v9 && !*((_QWORD *)v8 + 5) )
  {
    EnterCriticalSection(&stru_18005C5D8);
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
      v16,
      v3);
    LeaveCriticalSection(&stru_18005C5D8);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
