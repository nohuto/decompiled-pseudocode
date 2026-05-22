/*
 * XREFs of ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180167420
 * Callers:
 *     _lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::operator() @ 0x1801656F0 (_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_--operator().c)
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18016A810 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A8CAC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$copy_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180163070 (--$copy_to@UIPropertyValue@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(
        PROPVARIANT *propvarIn,
        struct Windows::Foundation::IPropertyValue **a2)
{
  unsigned int v4; // edi
  int ActivationFactory; // eax
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, HSTRING, _QWORD); // rsi
  int v9; // eax
  HRESULT v10; // eax
  __int64 (__fastcall *v11)(__int64, ULONGLONG, _QWORD); // rsi
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rsi
  int v16; // eax
  HRESULT v17; // eax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD); // rsi
  int v20; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  BOOL pfRet; // [rsp+30h] [rbp-50h] BYREF
  PWSTR ppszOut; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h] BYREF
  ULONGLONG pullRet; // [rsp+48h] [rbp-38h] BYREF
  DOUBLE pdblRet; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v30, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v23);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x15E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)ActivationFactory,
      (int)v22);
  if ( *(_WORD *)propvarIn < 4u )
    goto LABEL_27;
  if ( *(_WORD *)propvarIn <= 5u )
  {
    v17 = PropVariantToDouble(propvarIn, &pdblRet);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v17,
        (int)v22);
    v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 112LL);
    v22 = 0LL;
    v20 = v19(v23, v18, &v22);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x170,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v20,
        (int)v22);
  }
  else if ( *(_WORD *)propvarIn == 11 )
  {
    v13 = PropVariantToBoolean(propvarIn, &pfRet);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x164,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v13,
        (int)v22);
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 136LL);
    v22 = 0LL;
    LOBYTE(v14) = pfRet;
    v16 = v15(v23, v14, &v22);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x165,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v16,
        (int)v22);
  }
  else
  {
    if ( *(_WORD *)propvarIn != 21 )
    {
      if ( *(_WORD *)propvarIn == 31 )
      {
        v6 = PropVariantToStringAlloc(propvarIn, &ppszOut);
        if ( v6 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x175,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
            (const char *)(unsigned int)v6,
            (int)v22);
        v7 = -1LL;
        do
          ++v7;
        while ( ppszOut[v7] );
        WindowsCreateString(ppszOut, v7, &string);
        v8 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v23 + 144LL);
        v22 = 0LL;
        v9 = v8(v23, string, &v22);
        if ( v9 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x177,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
            (const char *)(unsigned int)v9,
            (int)v22);
      }
LABEL_27:
      v4 = -2147024809;
      goto LABEL_28;
    }
    v10 = PropVariantToUInt64(propvarIn, &pullRet);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x169,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v10,
        (int)v22);
    v11 = *(__int64 (__fastcall **)(__int64, ULONGLONG, _QWORD))(*(_QWORD *)v23 + 104LL);
    v22 = 0LL;
    v12 = v11(v23, pullRet, &v22);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v12,
        (int)v22);
  }
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::copy_to<Windows::Foundation::IPropertyValue>(&v22, a2);
LABEL_28:
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v22);
  return v4;
}
