/*
 * XREFs of PbmRegisterAppManagerNotification @ 0x1800319E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180038B7C (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall PbmRegisterAppManagerNotification(void *a1)
{
  int Process; // ebx
  struct CProcess *v3; // [rsp+38h] [rbp+10h] BYREF

  Process = 0;
  v3 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v3);
    if ( Process >= 0 )
    {
      Process = TsSessionIdAddAppManagerClient(v3);
      if ( Process >= 0 )
        *((_DWORD *)v3 + 113) = 1;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v3);
  }
  return (unsigned int)Process;
}
