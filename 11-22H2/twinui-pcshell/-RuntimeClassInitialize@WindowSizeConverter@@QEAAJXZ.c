/*
 * XREFs of ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x18010CC6C
 * Callers:
 *     ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010CA8C (--$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowSizeConverter::RuntimeClassInitialize(WindowSizeConverter *this)
{
  LPVOID *v1; // rdi
  int Instance; // ebx
  __int64 v5; // rdx
  int ppv; // [rsp+20h] [rbp-48h]
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (LPVOID *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Instance = CoCreateInstance(
               &GUID_ddc05a5a_351a_4e06_8eaf_54ec1bc2dcea,
               0LL,
               1u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               v1);
  if ( Instance < 0 )
  {
    v5 = 233LL;
  }
  else
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)*v1 + 64LL))(*v1);
    if ( Instance < 0 )
    {
      v5 = 234LL;
    }
    else
    {
      v7[0] = GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a;
      v7[1] = 0LL;
      Instance = CImmersiveShellComponent::RegisterServiceInformation(
                   (WindowSizeConverter *)((char *)this + 24),
                   (__int64)v7,
                   1uLL);
      if ( Instance >= 0 )
        return 0LL;
      v5 = 235LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)Instance,
    ppv);
  return (unsigned int)Instance;
}
