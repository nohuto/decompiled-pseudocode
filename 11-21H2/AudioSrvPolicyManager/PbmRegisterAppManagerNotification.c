/*
 * XREFs of PbmRegisterAppManagerNotification @ 0x180028C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18002E1F8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
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
