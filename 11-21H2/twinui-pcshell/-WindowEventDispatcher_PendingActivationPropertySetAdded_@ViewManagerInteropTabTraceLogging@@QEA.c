/*
 * XREFs of ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005ABD8
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005AB38 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18003864C (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005AF00 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18005AFA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(
        ViewManagerInteropTabTraceLogging *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int128 v23; // xmm6
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+74h] [rbp-8Ch] BYREF
  int v31; // [rsp+78h] [rbp-88h] BYREF
  int v32; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v37[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v38[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v39[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v40[32]; // [rsp+140h] [rbp+40h] BYREF

  LODWORD(v28[0]) = -1;
  *(__int64 *)((char *)v28 + 4) = -1LL;
  HIDWORD(v28[1]) = -1;
  v27 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  v3 = *(_DWORD **)(wil::details::static_lazy<TabShellTelemetryProvider>::get(
                      v2,
                      _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 4u )
  {
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_18061FA38);
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
           &v27,
           *(_QWORD *)(v4 + 24),
           v5,
           &v26);
    v7 = v26;
    if ( v6 < 0 )
      v7 = 0;
    v29 = v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v36, &off_18063A200);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            *(_QWORD *)(v8 + 24),
            v9,
            &v26);
    v11 = v26;
    if ( v10 < 0 )
      v11 = 0;
    v30 = v11;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v37, off_18063A1F8);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            *(_QWORD *)(v12 + 24),
            v13,
            &v26);
    v15 = v26;
    if ( v14 < 0 )
      v15 = 0;
    v31 = v15;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v38, off_18063A1F0);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            *(_QWORD *)(v16 + 24),
            v17,
            &v26);
    v19 = v26;
    if ( v18 < 0 )
      v19 = 0;
    v32 = v19;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, off_18063A1E8);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
            *(HSTRING *)(v20 + 24),
            v21,
            &v33);
    v23 = *(_OWORD *)v28;
    if ( v22 < 0 )
      v33 = *(_OWORD *)v28;
    v26 = (__int64)&v33;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v40, off_18063A1E0);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                *(HSTRING *)(v24 + 24),
                v25,
                &v34) < 0 )
      v34 = v23;
    v28[0] = (__int64)&v34;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v3,
      (__int64)v28,
      (__int64)&v26,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
}
