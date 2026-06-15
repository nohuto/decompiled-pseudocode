/*
 * XREFs of ?InitializeCustomEndpointResourceManagerProvider@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x18005ADE0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x18005AEBC (--$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvide.c)
 */

__int64 __fastcall InitializeCustomEndpointResourceManagerProvider(struct IEndpointResourceManagerProvider **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Microsoft::WRL::Details::MakeAndInitialize<CCustomAudioEndpointResourceManagerCache,IEndpointResourceManagerProvider,>(a1);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
