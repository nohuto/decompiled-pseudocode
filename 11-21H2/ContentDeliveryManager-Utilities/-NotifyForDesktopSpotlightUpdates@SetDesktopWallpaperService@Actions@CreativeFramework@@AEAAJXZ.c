/*
 * XREFs of ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D15B0
 * Callers:
 *     ?Commit@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800D0BC0 (-Commit@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800D0BFC (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 *     ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800D1018 (-GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CreativeFramework::Actions::SetDesktopWallpaperService::NotifyForDesktopSpotlightUpdates(
        CreativeFramework::Actions::SetDesktopWallpaperService *this,
        __int64 a2,
        __int64 a3,
        wchar_t **a4)
{
  int DesktopSpotlightCreative; // eax
  unsigned int v6; // ebx
  wchar_t *v7; // rcx
  HRESULT v9; // eax
  LPVOID v10; // rcx
  wchar_t *v11; // rdi
  void *v12; // rsi
  wchar_t *v13; // rbx
  int v14; // eax
  bool *v15; // r8
  const WCHAR *v16; // rcx
  int v17; // eax
  LPVOID v18; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  LPVOID v21; // rcx
  wchar_t *v22; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  LPVOID ppv; // [rsp+78h] [rbp+38h] BYREF
  wchar_t *v25; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  pv = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  DesktopSpotlightCreative = CreativeFramework::DesktopSpotlightHelpers::GetDesktopSpotlightCreative(
                               &v22,
                               &v25,
                               (wchar_t **)&pv,
                               a4);
  v6 = DesktopSpotlightCreative;
  if ( DesktopSpotlightCreative < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)(unsigned int)DesktopSpotlightCreative);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v25 )
      CoTaskMemFree(v25);
    v7 = v22;
    if ( !v22 )
      return v6;
    goto LABEL_7;
  }
  ppv = 0LL;
  v9 = CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_6a9b5a30_57ac_492f_8dcd_1fff8ad658ce, &ppv);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)(unsigned int)v9);
    v10 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( v25 )
      CoTaskMemFree(v25);
    v7 = v22;
    if ( !v22 )
      return v6;
LABEL_7:
    CoTaskMemFree(v7);
    return v6;
  }
  v11 = v25;
  v12 = pv;
  v13 = v22;
  if ( v22 && v25 && pv )
  {
    v14 = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, LPVOID, wchar_t *))(*(_QWORD *)ppv + 200LL))(ppv, v25, pv, v22);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)(unsigned int)v14);
      v16 = (const WCHAR *)((char *)this + 8);
      if ( *((_QWORD *)this + 4) >= 8uLL )
        v16 = *(const WCHAR **)v16;
      v17 = CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative(v16, 0LL, v15);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x55,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
          (const char *)(unsigned int)v17);
    }
    goto LABEL_26;
  }
  v19 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, const wchar_t *))(*(_QWORD *)ppv + 200LL))(
          ppv,
          0LL,
          0LL,
          L"1");
  v20 = v19;
  if ( v19 >= 0 )
  {
LABEL_26:
    v18 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v12 )
      CoTaskMemFree(v12);
    if ( v11 )
      CoTaskMemFree(v11);
    if ( v13 )
      CoTaskMemFree(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
    (const char *)(unsigned int)v19);
  v21 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v12 )
    CoTaskMemFree(v12);
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v13 )
    CoTaskMemFree(v13);
  return v20;
}
