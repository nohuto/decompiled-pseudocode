/*
 * XREFs of PbmRegisterAppClosureNotification @ 0x180028BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021F00 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall PbmRegisterAppClosureNotification(void *a1)
{
  int Process; // ebx
  CApplicationManager *v2; // rcx
  struct CProcess *v4; // [rsp+38h] [rbp+10h] BYREF

  Process = 0;
  v4 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v4);
    if ( Process >= 0 )
    {
      Process = CApplicationManager::RegisterAppClosureNotificationClient(v2, v4);
      if ( Process >= 0 )
        *((_DWORD *)v4 + 114) = 1;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v4);
  }
  return (unsigned int)Process;
}
