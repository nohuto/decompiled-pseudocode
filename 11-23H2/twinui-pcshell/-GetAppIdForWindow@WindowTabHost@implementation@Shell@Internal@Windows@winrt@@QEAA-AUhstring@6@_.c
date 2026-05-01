/*
 * XREFs of ?GetAppIdForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@_K@Z @ 0x18006C120
 * Callers:
 *     ?GetAppIdForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x18006C0D0 (-GetAppIdForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindo.c)
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x180634EC8 (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800860F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix@@@details@wil@@QEAA_NXZ @ 0x18021AB58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WindowTabHostInitialize.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18038BDFC (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??I?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIApplicationView@@XZ @ 0x18038BE08 (--I-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIApplicationView@@.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAppIdForWindow(
        __int64 a1,
        winrt::hstring *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64, __int64); // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64); // rdi
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, __int64, __int64); // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64); // rdi
  __int64 v18; // rax
  int v19; // eax
  const unsigned __int16 *v21; // [rsp+28h] [rbp-8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WindowTabHostInitializedFix>::GetImpl'::`2'::impl) )
  {
    if ( *(_BYTE *)(a1 + 873) )
    {
      v6 = *(_QWORD *)(a1 + 168);
      v7 = *(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 48LL);
      v8 = wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator&(&v22);
      if ( v7(v6, a3, v8) >= 0 )
      {
        if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v22) )
        {
          v9 = v22;
          v10 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 136LL);
          v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&v21);
          if ( v10(v9, v11) >= 0 )
          {
            v12 = v21;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_10:
    v12 = &LocaleName;
    goto LABEL_11;
  }
  v13 = *(_QWORD *)(a1 + 168);
  v14 = *(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 48LL);
  v15 = wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator&(&v22);
  if ( v14(v13, a3, v15) < 0 )
    goto LABEL_10;
  if ( !(unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v22) )
    goto LABEL_10;
  v16 = v22;
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 136LL);
  v18 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&v21);
  v19 = v17(v16, v18);
  v12 = v21;
  if ( v19 < 0 )
    goto LABEL_10;
LABEL_11:
  winrt::hstring::hstring(a2, v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  return a2;
}
