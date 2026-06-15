/*
 * XREFs of ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180009B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x180024DEC (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetMixedRealitySpatialAudioFormatPolicyForProcess(
        CWindowsPolicyManager *this,
        unsigned int a2,
        enum Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy *a3)
{
  int ProcessFromProcessId; // eax
  unsigned int v5; // ebx
  struct CProcess *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v9; // [rsp+40h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  v9 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(g_ApplicationManager, a2, &v9);
  v5 = ProcessFromProcessId;
  if ( ProcessFromProcessId >= 0 )
  {
    v7 = v9;
    if ( v9 )
    {
      *(_DWORD *)a3 = *((_DWORD *)v9 + 188);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v9);
    return v5;
  }
}
