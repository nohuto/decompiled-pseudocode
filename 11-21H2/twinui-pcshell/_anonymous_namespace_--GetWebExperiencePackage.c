/*
 * XREFs of _anonymous_namespace_::GetWebExperiencePackage @ 0x1801C8AC8
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     _anonymous_namespace_::IsWebExperiencePackageInstalled @ 0x1801C9048 (_anonymous_namespace_--IsWebExperiencePackageInstalled.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x1801C1BB4 (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$call@P6A?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUPackageManager@Deployment@Management@Windows@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1801C28A4 (--$call@P6A-AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundat.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA?AUPackage@ApplicationModel@Windows@3@XZ @ 0x1801C6078 (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void (__fastcall ***__fastcall anonymous_namespace_::GetWebExperiencePackage(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  char v2; // di
  char v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // eax
  winrt *v8; // rax
  void (__fastcall **v9)(_QWORD, __int64 *, __int64 *); // rcx
  char v10; // di
  __int64 (__fastcall *v12)(__int64, __int64); // [rsp+38h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall *v16)(__int64, __int64); // [rsp+A8h] [rbp+38h] BYREF
  struct IUnknown v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF

  _InterlockedIncrement64(&qword_1807B47C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>,
      &v17);
    _InterlockedDecrement64(&qword_1807B47C8);
    v2 = 121;
    v3 = 122;
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B47C8);
    v16 = _lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Management::Deployment::PackageManager (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      (__int64)&v17,
      (void (__fastcall **)(__int64, __int64 *))&v16);
    v2 = 105;
    v3 = 106;
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy");
  v16 = 0LL;
  v4 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, _QWORD, __int64 (__fastcall **)(__int64, __int64)))v17.lpVtbl->QueryInterface
        + 20))(
         v17.lpVtbl,
         0LL,
         v15[0],
         &v16);
  winrt::check_hresult(v4);
  v12 = v16;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v18);
  winrt::check_hresult(v5);
  v6 = v18;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v12);
  LOBYTE(v16) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, &v16);
  winrt::check_hresult(v7);
  if ( (_BYTE)v16 )
  {
    v8 = winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
           &v18,
           (winrt *)v14);
    v9 = *(void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v8;
  }
  else
  {
    v8 = (winrt *)v13;
    v2 = v3;
    v9 = 0LL;
  }
  *(_QWORD *)v8 = 0LL;
  *a1 = v9;
  v10 = v2 | 4;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v13);
  }
  if ( (v10 & 1) != 0 )
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v14);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v18);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v17);
  return a1;
}
