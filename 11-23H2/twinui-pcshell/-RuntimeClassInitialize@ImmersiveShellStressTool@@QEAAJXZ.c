/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x18019EA5C
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019E92C (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall ImmersiveShellStressTool::RuntimeClassInitialize(ImmersiveShellStressTool *this)
{
  volatile int *v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v7 = GUID_fc97f3a6_096f_4649_84e5_df22a101258c;
  v8 = 0LL;
  v3 = CImmersiveShellComponent::RegisterServiceInformation(
         (ImmersiveShellStressTool *)((char *)this + 24),
         (__int64)v7,
         1uLL);
  if ( v3 < 0 )
  {
    v6 = 23LL;
  }
  else
  {
    v4 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
        v4,
        v2);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 13);
    if ( v3 >= 0 )
      return 0LL;
    v6 = 24LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
