/*
 * XREFs of ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x1800B0754
 * Callers:
 *     ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18014AE3C (--$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18015948C (-CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801690F4 (-SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AUImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@0@XZ @ 0x180170568 (--$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::RuntimeClassInitialize(CShellSnapComponent *this)
{
  void **v2; // rbx
  const struct _GUID *v3; // rcx
  int Instance; // eax
  unsigned int v5; // esi
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-B0h]
  __int64 v19; // [rsp+40h] [rbp-A8h]
  _OWORD v20[5]; // [rsp+50h] [rbp-98h] BYREF
  void *v21; // [rsp+A0h] [rbp-48h]
  __int64 v22; // [rsp+A8h] [rbp-40h]
  GUID v23; // [rsp+B0h] [rbp-38h]
  __int64 v24; // [rsp+C0h] [rbp-28h]
  __int64 v25; // [rsp+C8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = (void **)((char *)this + 256);
  v3 = (const struct _GUID *)*((_QWORD *)this + 32);
  *v2 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v3->Data1 + 16LL))(v3);
  Instance = CSnapAssistController_CreateInstance(v3, v2);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 39);
    v7 = SnapServiceProvider_CreateInstance(v6, (void **)this + 39);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    else
    {
      v20[0] = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
      v20[1] = 0LL;
      v20[2] = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
      v20[3] = 0LL;
      v20[4] = GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33;
      v21 = *v2;
      v22 = 0LL;
      v23 = GUID_fff59320_db70_4865_8fed_8b502d692f12;
      v24 = *((_QWORD *)this + 39);
      v25 = 0LL;
      v9 = CImmersiveShellComponent::RegisterServiceInformation(
             (CShellSnapComponent *)((char *)this + 48),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)v20,
             4u);
      v11 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10C,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v9);
        return v11;
      }
      else
      {
        LOBYTE(v10) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
          v10);
        v12 = winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>(&v16);
        winrt::Windows::Foundation::IUnknown::operator=((char *)this + 392, v12);
        if ( v16 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
        v17 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>;
        v18 = *((_QWORD *)this + 49);
        v19 = 0LL;
        v13 = CImmersiveShellComponent::RegisterServiceInformation(
                (CShellSnapComponent *)((char *)this + 48),
                (const struct CImmersiveShellComponent::ISC_SERVICE *)&v17,
                1u);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x112,
            (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v13);
          return v14;
        }
        else
        {
          return 0LL;
        }
      }
    }
  }
}
