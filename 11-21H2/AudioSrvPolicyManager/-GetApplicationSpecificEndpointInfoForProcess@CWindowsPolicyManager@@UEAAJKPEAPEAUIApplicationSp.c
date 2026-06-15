/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180017400 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x180024DEC (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  int ProcessFromProcessId; // eax
  unsigned int v5; // ebx
  struct CProcess *v7; // rbx
  int ApplicationSpecificEndpointInfo; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(g_ApplicationManager, a2, &v11);
  v5 = ProcessFromProcessId;
  if ( ProcessFromProcessId >= 0 )
  {
    v7 = v11;
    if ( v11 )
    {
      ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(v11, a3);
      v9 = ApplicationSpecificEndpointInfo;
      if ( ApplicationSpecificEndpointInfo < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17B,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)(unsigned int)ApplicationSpecificEndpointInfo);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v7);
        return v9;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v11);
    return v5;
  }
}
