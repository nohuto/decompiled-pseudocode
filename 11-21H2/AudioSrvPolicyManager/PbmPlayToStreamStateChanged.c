/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x180028AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(void *a1, int a2)
{
  int Process; // ebx
  __int64 v5; // rdx
  struct CProcess *v6; // rdx
  signed __int32 v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-30h]
  _QWORD *v10; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  struct CProcess *v12; // [rsp+80h] [rbp+20h] BYREF

  if ( a2 > 1 )
  {
    Process = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)Process;
  }
  if ( g_ApplicationManager )
  {
    v12 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v12);
    if ( Process < 0 )
    {
      v5 = 486LL;
      goto LABEL_7;
    }
    v6 = v12;
    if ( v12 )
    {
      do
        v7 = *((_DWORD *)v6 + 5);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 5, v7 + 1, v7) );
    }
    v8[1] = v6;
    v8[0] = off_1800487F8;
    v9 = a2;
    v10 = v8;
    Process = QueueGenericWorkItem(v8);
    if ( Process < 0 )
    {
      v5 = 491LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)Process);
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v12);
      return (unsigned int)Process;
    }
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v12);
  }
  return 0LL;
}
