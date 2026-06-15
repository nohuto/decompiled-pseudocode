/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x1800292B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PbmUnregisterAppClosureNotification(void *a1)
{
  int Process; // esi
  CApplicationManager *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  struct CProcess *v5; // [rsp+38h] [rbp+10h] BYREF

  Process = 0;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v5);
    if ( Process >= 0 )
    {
      v2 = g_ApplicationManager;
      v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      MEMORY[0x1C8] = 0;
      CApplicationManager::Unregister(v2, 0LL);
      if ( v3 )
        LeaveCriticalSection(v3);
      MEMORY[0x1C8] = 0;
    }
  }
  return (unsigned int)Process;
}
