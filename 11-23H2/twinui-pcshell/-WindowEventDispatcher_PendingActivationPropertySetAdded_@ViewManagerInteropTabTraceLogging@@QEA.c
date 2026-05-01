/*
 * XREFs of ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804CCAE0
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BA348 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x1800DDC18 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x1803AB0D4 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1803BA5E0 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1804BA450 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(
        ViewManagerInteropTabTraceLogging *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  unsigned int v4; // r8d
  HSTRING_HEADER *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // ecx
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // ecx
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // ecx
  HSTRING_HEADER *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // r8d
  int v24; // ecx
  HSTRING_HEADER *v25; // rax
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // r8d
  __int128 v29; // xmm6
  HSTRING_HEADER *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  HSTRING_HEADER v43; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING_HEADER v44; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER v45; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER v46; // [rsp+100h] [rbp+0h] BYREF
  HSTRING_HEADER v47; // [rsp+120h] [rbp+20h] BYREF
  HSTRING_HEADER v48; // [rsp+140h] [rbp+40h] BYREF

  LODWORD(v36[0]) = -1;
  *(__int64 *)((char *)v36 + 4) = -1LL;
  HIDWORD(v36[1]) = -1;
  v35 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
  v3 = (_DWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                   v2,
                   (void (__cdecl *)())_lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u )
  {
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)off_1807F4708, v4);
    v7 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
           (HSTRING)v5[1].Reserved.Reserved1,
           v6,
           &v34);
    v9 = v34;
    if ( v7 < 0 )
      v9 = 0;
    v37 = v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)off_1807F4710, v8);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
            (HSTRING)v10[1].Reserved.Reserved1,
            v11,
            &v34);
    v14 = v34;
    if ( v12 < 0 )
      v14 = 0;
    v38 = v14;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, (const WCHAR **)off_1807F46F8, v13);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
            (HSTRING)v15[1].Reserved.Reserved1,
            v16,
            &v34);
    v19 = v34;
    if ( v17 < 0 )
      v19 = 0;
    v39 = v19;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, (const WCHAR **)off_1807F4700, v18);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
            (HSTRING)v20[1].Reserved.Reserved1,
            v21,
            &v34);
    v24 = v34;
    if ( v22 < 0 )
      v24 = 0;
    v40 = v24;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)off_1807F46F0, v23);
    v27 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
            (HSTRING)v25[1].Reserved.Reserved1,
            v26,
            &v41);
    v29 = *(_OWORD *)v36;
    if ( v27 < 0 )
      v41 = *(_OWORD *)v36;
    v34 = (__int64)&v41;
    v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, (const WCHAR **)off_1807F46E8, v28);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
                (HSTRING)v30[1].Reserved.Reserved1,
                v31,
                &v42) < 0 )
      v42 = v29;
    v36[0] = (__int64)&v42;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_180858C7B,
      v32,
      v33,
      v36,
      &v34,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
}
