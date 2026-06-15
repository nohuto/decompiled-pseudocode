/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x1800028F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  struct CProcess *v3; // rax
  CApplicationManager *v8; // rcx
  int Process; // eax
  unsigned int v10; // edi
  struct CProcess *v11; // rdx
  signed __int32 i; // eax
  int v13; // eax
  unsigned int v14; // ebx
  volatile signed __int32 *v15; // r8
  signed __int32 j; // edx
  int v17[2]; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+2Ch] [rbp-4Ch]
  __int64 v20[2]; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+44h] [rbp-34h]
  __int64 *v23; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CProcess *v25; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v25 = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_07b734c94d88371036da2903467df5b5_Traceguids,
      (unsigned int)a2);
    v3 = v25;
  }
  if ( a2 >= 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL,
      v17[0]);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
    return 2147942487LL;
  }
  v8 = g_ApplicationManager;
  if ( !g_ApplicationManager )
    goto LABEL_28;
  if ( v3 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v3);
    v8 = g_ApplicationManager;
  }
  Process = CApplicationManager::RpcGetProcess(v8, a1, &v25);
  v10 = Process;
  if ( Process < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)Process,
      v17[0]);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
    return v10;
  }
  v11 = v25;
  *(_QWORD *)v17 = v25;
  if ( v25 )
  {
    for ( i = *((_DWORD *)v25 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v11 + 5) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v11 + 5, i + 1, i) )
        break;
    }
    v11 = *(struct CProcess **)v17;
  }
  v18 = a2;
  v20[0] = (__int64)off_18004B068;
  v19 = a3;
  v23 = v20;
  *(_QWORD *)v17 = 0LL;
  v20[1] = (__int64)v11;
  v21 = a2;
  v22 = a3;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)v17);
  v13 = QueueGenericWorkItem(v20);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)v13,
      v17[0]);
    v15 = (volatile signed __int32 *)v25;
    if ( v25 )
    {
      for ( j = *((_DWORD *)v25 + 5); j != 0x7FFFFFFF; j = *((_DWORD *)v15 + 5) )
      {
        if ( j == _InterlockedCompareExchange(v15 + 5, j - 1, j) )
          break;
      }
      if ( j == 1 )
      {
        if ( v15 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 560LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return v14;
  }
  else
  {
LABEL_28:
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v25);
    return 0LL;
  }
}
