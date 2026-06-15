/*
 * XREFs of PbmSetScreenReaderState @ 0x180029000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int Process; // ebx
  __int64 v6; // rdx
  struct CProcess *v8; // rdx
  signed __int32 v9; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  _QWORD *v13; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct CProcess *v15; // [rsp+88h] [rbp+28h] BYREF

  if ( !g_ApplicationManager )
    return 0LL;
  v15 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v15);
  if ( Process >= 0 )
  {
    v8 = v15;
    if ( v15 )
    {
      do
        v9 = *((_DWORD *)v8 + 5);
      while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 5, v9 + 1, v9) );
    }
    v10[1] = v8;
    v10[0] = off_180048798;
    v11 = a2;
    v13 = v10;
    v12 = a3;
    Process = QueueGenericWorkItem(v10);
    if ( Process < 0 )
    {
      v6 = 561LL;
      goto LABEL_4;
    }
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v15);
    return 0LL;
  }
  v6 = 556LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)Process);
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v15);
  return (unsigned int)Process;
}
