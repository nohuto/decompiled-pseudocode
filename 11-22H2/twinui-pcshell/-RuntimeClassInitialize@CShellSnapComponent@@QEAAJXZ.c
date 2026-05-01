/*
 * XREFs of ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18010AC10
 * Callers:
 *     ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801087EC (--$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18010AF24 (--$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AFD0 (-CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18010B054 (-SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall CShellSnapComponent::RuntimeClassInitialize(CShellSnapComponent *this)
{
  void **v2; // r15
  const struct _GUID *v3; // rcx
  int Instance; // eax
  unsigned int v5; // esi
  __int64 result; // rax
  const struct _GUID *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // esi
  const char *v13; // r9
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, int *); // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18[2]; // [rsp+20h] [rbp-E8h] BYREF
  int v19[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-C0h]
  _OWORD v23[5]; // [rsp+50h] [rbp-B8h] BYREF
  void *v24; // [rsp+A0h] [rbp-68h]
  __int64 v25; // [rsp+A8h] [rbp-60h]
  GUID v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  __int64 v31; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = (void **)((char *)this + 248);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 31);
  Instance = CSnapAssistController_CreateInstance(v3, v2);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 38);
    v8 = SnapServiceProvider_CreateInstance(v7, (void **)this + 38);
    v9 = v8;
    if ( v8 >= 0 )
    {
      try
      {
        v10 = winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>();
        winrt::Windows::Foundation::IUnknown::operator=((char *)this + 384, v10);
        if ( *(_QWORD *)v18 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v18);
        v23[0] = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
        v23[1] = 0LL;
        v23[2] = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
        v23[3] = 0LL;
        v23[4] = GUID_91adc416_4c36_457e_9bab_7e545e723826;
        v24 = *v2;
        v25 = 0LL;
        v26 = GUID_fff59320_db70_4865_8fed_8b502d692f12;
        v27 = *((_QWORD *)this + 38);
        v28 = 0LL;
        v29 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>;
        v30 = *((_QWORD *)this + 48);
        v31 = 0LL;
        v11 = CImmersiveShellComponent::RegisterServiceInformation(
                (CShellSnapComponent *)((char *)this + 48),
                (const struct CImmersiveShellComponent::ISC_SERVICE *)v23,
                5u);
        v12 = v11;
        if ( v11 >= 0 )
        {
          winrt::param::hstring::create_string_reference(
            (winrt::param::hstring *)&v20,
            L"Windows.Internal.Shell.SnapComponent.DesktopSnapLayoutManager",
            61);
          *(_QWORD *)v19 = 0LL;
          winrt::impl::get_runtime_activation_factory_impl<0>(
            v18,
            &v20,
            (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>,
            (__int64)v19);
          if ( v18[0] < 0 )
            winrt::throw_hresult((unsigned int)v18[0]);
          *(_QWORD *)v18 = *(_QWORD *)v19;
          winrt::Windows::Foundation::IUnknown::operator=((char *)this + 1744, v18);
          if ( *(_QWORD *)v18 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v18);
          v20 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>;
          v14 = (__int64 (__fastcall ***)(_QWORD, __int64 *, int *))*((_QWORD *)this + 218);
          if ( v14 )
          {
            *(_QWORD *)v19 = 0LL;
            v15 = (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v19);
            if ( v15 < 0 )
              winrt::throw_hresult((unsigned int)v15);
            v21 = *(_QWORD *)v19;
            if ( *(_QWORD *)v19 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v19);
          }
          else
          {
            v21 = 0LL;
          }
          v22 = 0LL;
          v16 = CImmersiveShellComponent::RegisterServiceInformation(
                  (CShellSnapComponent *)((char *)this + 48),
                  (const struct CImmersiveShellComponent::ISC_SERVICE *)&v20,
                  1u);
          v17 = v16;
          if ( v16 >= 0 )
          {
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x138,
              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v16,
              v18[0]);
            result = v17;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12D,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v11,
            v18[0]);
          result = v12;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x13C,
                               (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                               v13);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v8,
        v18[0]);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance,
      v18[0]);
    return v5;
  }
  return result;
}
