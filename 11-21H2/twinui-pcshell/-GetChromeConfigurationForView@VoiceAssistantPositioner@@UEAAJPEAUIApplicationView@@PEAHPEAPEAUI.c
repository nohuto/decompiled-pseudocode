/*
 * XREFs of ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804F4800
 * Callers:
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18020A450 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800F2244 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetChromeConfigurationForView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  volatile signed __int32 **v5; // rax
  struct IApplicationViewTitlebarConfiguration *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v15);
  v6 = (struct IApplicationViewTitlebarConfiguration *)*v5;
  *(_QWORD *)v13 = *v5;
  *v5 = 0LL;
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v6 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, __int64, __int64))(*(_QWORD *)v6 + 40LL))(
            v6,
            1LL,
            1LL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, _QWORD))(*(_QWORD *)v6 + 24LL))(
              v6,
              0LL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v13);
        *a4 = v6;
        v8 = 0;
        goto LABEL_12;
      }
      v10 = 308LL;
    }
    else
    {
      v10 = 307LL;
    }
    v9 = (unsigned int)v11;
  }
  else
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 306LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v9);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v13);
  return v8;
}
