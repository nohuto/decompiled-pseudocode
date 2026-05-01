/*
 * XREFs of ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180744600
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x180742630 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180742AF4 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForLightTheme(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // rbx
  unsigned int ContrastForParams; // eax
  unsigned int v13; // eax
  __int64 (__fastcall *v14)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const WCHAR *, struct IResourceContext *))(*(_QWORD *)a2 + 136LL))(
         a2,
         L"lightunplated",
         a3);
  if ( v5 < 0 )
  {
    v6 = 152LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
         a2,
         *((unsigned __int16 *)this + 4));
  if ( v5 < 0 )
  {
    v6 = 153LL;
    goto LABEL_3;
  }
  v11 = *(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL);
  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, v8, v9, v10);
  v5 = v11(a2, ContrastForParams);
  if ( v5 < 0 )
  {
    v6 = 155LL;
    goto LABEL_3;
  }
  v13 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v5 = v14(a2, v13);
  if ( v5 < 0 )
  {
    v6 = 156LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const WCHAR *))(*(_QWORD *)a2 + 144LL))(
    a2,
    L"Theme",
    L"light");
  return 0LL;
}
