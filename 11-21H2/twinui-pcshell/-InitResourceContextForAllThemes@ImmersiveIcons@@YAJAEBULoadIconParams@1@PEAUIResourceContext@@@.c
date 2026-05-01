/*
 * XREFs of ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x1805EDA50
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1805EC294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180162C90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x1805EB6B4 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1805EBD60 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForAllThemes(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3,
        __int64 a4)
{
  unsigned int ContrastForParams; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  const WCHAR *v13; // r8
  unsigned int v14; // eax
  __int64 (__fastcall *v15)(const struct ImmersiveIcons::LoadIconParams *, _QWORD); // r11
  int v16; // eax
  unsigned int v17; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, (__int64)a2, (__int64)a3, a4);
  if ( ContrastForParams )
  {
    v10 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
            a2,
            *((unsigned __int16 *)this + 8));
    if ( v10 < 0 )
    {
      v11 = 210LL;
      goto LABEL_5;
    }
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    v9 = *(_QWORD *)a2;
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v10 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(v9 + 112))(
              a2,
              *((unsigned __int16 *)this + 8));
      if ( v10 < 0 )
      {
        v11 = 181LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *))(v9 + 136))(
              a2,
              L"unplated");
      if ( v10 < 0 )
      {
        v11 = 185LL;
        goto LABEL_5;
      }
      v10 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
              a2,
              *((unsigned __int16 *)this + 4));
      if ( v10 < 0 )
      {
        v11 = 186LL;
        goto LABEL_5;
      }
    }
    if ( *((_DWORD *)this + 11) )
    {
      v13 = L"light";
      if ( *((_DWORD *)this + 11) != 1 )
        v13 = L"dark";
      (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const WCHAR *))(*(_QWORD *)a2 + 144LL))(
        a2,
        L"Theme",
        v13);
    }
  }
  v10 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ContrastForParams);
  if ( v10 < 0 )
  {
    v11 = 213LL;
    goto LABEL_5;
  }
  v14 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v16 = v15(a2, v14);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
