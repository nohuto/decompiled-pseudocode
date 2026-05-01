/*
 * XREFs of ?RemovePackageAsync@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@3@AEBUhstring@param@3@AEBW4RemovalOptions@Deployment@Management@63@@Z @ 0x1801CA050
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::RemovePackageAsync(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  void (__fastcall ***v7)(_QWORD, void *, _QWORD **); // r11
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = a2;
  v7 = *a1;
  v8 = 0LL;
  v13 = 0LL;
  if ( v7 )
  {
    v12 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager2>, &v12);
    v8 = v12;
  }
  v11 = v8;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64 *))(*v8 + 48LL))(v8, *a3, *a4, &v13);
  winrt::check_hresult(v9);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
  *a2 = v13;
  return a2;
}
