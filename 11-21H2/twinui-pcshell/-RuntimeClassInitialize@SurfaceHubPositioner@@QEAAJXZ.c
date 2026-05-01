/*
 * XREFs of ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x1800AE6F8
 * Callers:
 *     ??$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D002C (--$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1802FFDB0 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::RuntimeClassInitialize(SurfaceHubPositioner *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( IsPPIEdition() && !IsPPIFullFrameUI() )
    *((_BYTE *)this + 576) = 1;
  *(GUID *)v5 = GUID_fcc61b04_e266_4663_ae5d_88381aee8ab2;
  v6 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (SurfaceHubPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1u);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
