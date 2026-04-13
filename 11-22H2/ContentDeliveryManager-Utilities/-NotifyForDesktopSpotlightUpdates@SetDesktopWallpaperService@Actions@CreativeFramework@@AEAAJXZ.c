/*
 * XREFs of ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BC7DC
 * Callers:
 *     ?Commit@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BBFB0 (-Commit@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F60 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800BBFEC (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 *     ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800BC3C0 (-GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEB_W1KPEAH@Z @ 0x1800BCBB4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEB_W1KPEAH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::SetDesktopWallpaperService::NotifyForDesktopSpotlightUpdates(
        CreativeFramework::Actions::SetDesktopWallpaperService *this,
        const wchar_t *a2,
        __int64 a3,
        unsigned int a4)
{
  const wchar_t *v5; // rdx
  HKEY v6; // rcx
  unsigned int v7; // r9d
  wchar_t **v8; // r9
  int DesktopSpotlightCreative; // eax
  unsigned int v10; // ebx
  HRESULT v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  bool *v14; // r8
  const WCHAR *v15; // rcx
  int v16; // eax
  void *v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID ppv; // [rsp+68h] [rbp+28h] BYREF
  wchar_t *v21; // [rsp+70h] [rbp+30h] BYREF
  wchar_t *v22; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(ppv) = 0;
  if ( (int)SHRegGetBOOLWithREGSAM((HKEY)this, a2, L"SubscribedContent-88000326Enabled", a4, (int *)&ppv) < 0
    && (int)SHRegGetBOOLWithREGSAM(v6, v5, L"SubscribedContent-88000325Enabled", v7, (int *)&ppv) < 0
    || !(_DWORD)ppv )
  {
    return 0LL;
  }
  v18[0] = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v21,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v22,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v18,
    0LL);
  DesktopSpotlightCreative = CreativeFramework::DesktopSpotlightHelpers::GetDesktopSpotlightCreative(
                               v18,
                               &v22,
                               &v21,
                               v8);
  v10 = DesktopSpotlightCreative;
  if ( DesktopSpotlightCreative >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    v11 = CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_f7949936_6736_4411_8af8_00b292658bc0, &ppv);
    v10 = v11;
    if ( v11 < 0 )
    {
      v12 = 98LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
      goto LABEL_21;
    }
    if ( v18[0] && v22 && v21 )
    {
      v13 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 200LL))(ppv);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x65,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
          (const char *)(unsigned int)v13);
        v15 = (const WCHAR *)((char *)this + 8);
        if ( *((_QWORD *)this + 4) >= 8uLL )
          v15 = *(const WCHAR **)v15;
        v16 = CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative(v15, 0LL, v14);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
            (const char *)(unsigned int)v16);
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, const wchar_t *))(*(_QWORD *)ppv + 200LL))(
              ppv,
              0LL,
              0LL,
              L"1");
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = 110LL;
        goto LABEL_20;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v21);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v18);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
    (const char *)(unsigned int)DesktopSpotlightCreative);
LABEL_21:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v21);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v22);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v18);
  return v10;
}
