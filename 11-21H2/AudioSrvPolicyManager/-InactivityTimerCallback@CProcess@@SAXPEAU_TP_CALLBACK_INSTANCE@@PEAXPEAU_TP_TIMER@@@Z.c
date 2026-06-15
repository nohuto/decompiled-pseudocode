/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180018120
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

void __fastcall CProcess::InactivityTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_TIMER *a3)
{
  signed __int32 i; // eax
  signed __int32 v5; // eax
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-40h]
  int *v9; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
  {
    for ( i = *((_DWORD *)a2 + 5);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a2 + 5, i + 1, i);
          i = *((_DWORD *)a2 + 5) )
    {
      ;
    }
    do
      v5 = *((_DWORD *)a2 + 5);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange(a2 + 5, v5 + 1, v5) );
  }
  v8 = a2;
  *(_QWORD *)v7 = &off_180048008;
  v9 = v7;
  v6 = QueueGenericWorkItem(v7);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD10,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6);
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(a2);
}
