/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180029100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  struct CProcess *v5; // rcx
  int Process; // ebx
  __int64 v8; // rdx
  CApplicationManager *v10; // rax
  struct CProcess *v11; // rdx
  signed __int32 v12; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  _QWORD *v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct CProcess *v18; // [rsp+88h] [rbp+28h] BYREF

  v5 = 0LL;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_c3dc198450583a9ce0fc2fef3d4c1f85_Traceguids, a2);
    v5 = v18;
  }
  if ( a2 >= 2 )
  {
    Process = -2147024809;
    v8 = 258LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)Process);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v18);
    return (unsigned int)Process;
  }
  v10 = g_ApplicationManager;
  if ( g_ApplicationManager )
  {
    if ( v5 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v5);
      v10 = g_ApplicationManager;
    }
    Process = CApplicationManager::RpcGetProcess(v10, a1, &v18);
    if ( Process < 0 )
    {
      v8 = 262LL;
      goto LABEL_7;
    }
    v11 = v18;
    if ( v18 )
    {
      do
        v12 = *((_DWORD *)v11 + 5);
      while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange((volatile signed __int32 *)v11 + 5, v12 + 1, v12) );
    }
    v13[1] = v11;
    v13[0] = off_180048828;
    v14 = a2;
    v16 = v13;
    v15 = a3;
    Process = QueueGenericWorkItem(v13);
    if ( Process < 0 )
    {
      v8 = 267LL;
      goto LABEL_7;
    }
    v5 = v18;
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
