/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002E750
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180029370 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003181C (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TsSessionIdDeleteAppManagerClient(struct CProcess *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // eax
  struct TSSession *v4; // rdi
  _QWORD *v5; // r15
  char *v6; // rbx
  __int64 ***v7; // rcx
  __int64 *v8; // rax
  __int64 **v9; // r8
  char *v10; // r14
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rcx
  char *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct TSSession *v16; // [rsp+88h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+90h] [rbp+50h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v2;
  v3 = TsSessionFromSessionId(*((_DWORD *)a1 + 41), 0, &v16);
  if ( v3 >= 0 )
  {
    v4 = v16;
    v5 = (_QWORD *)((char *)v16 + 40);
    v6 = 0LL;
    v13 = 0LL;
    v14 = (__int64 **)&v13;
    v7 = (__int64 ***)((char *)v16 + 40);
    v8 = (__int64 *)*((_QWORD *)v16 + 5);
    if ( v8 )
    {
      do
      {
        if ( (struct CProcess *)v8[1] == a1 )
        {
          v9 = *v7;
          v8 = **v7;
          *v9 = 0LL;
          *v7 = (__int64 **)v8;
          *v14 = (__int64 *)v9;
          v14 = v9;
        }
        else
        {
          v7 = (__int64 ***)v8;
          v8 = (__int64 *)*v8;
        }
      }
      while ( v8 );
      v6 = v13;
    }
    if ( v6 )
    {
      do
      {
        v10 = *(char **)v6;
        v11 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
        if ( v11 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v11);
        std::_Deallocate<16,0>(v6, 0x10uLL);
        v6 = v10;
      }
      while ( v10 );
    }
    if ( *((_DWORD *)v4 + 8) && *((_DWORD *)v4 + 1) == 0xFFFF && !*((_QWORD *)v4 + 2) && !*v5 )
    {
      EnterCriticalSection(&stru_18005C5D8);
      LODWORD(v16) = *((_DWORD *)a1 + 41);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
        v12,
        &v16);
      LeaveCriticalSection(&stru_18005C5D8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x585,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
