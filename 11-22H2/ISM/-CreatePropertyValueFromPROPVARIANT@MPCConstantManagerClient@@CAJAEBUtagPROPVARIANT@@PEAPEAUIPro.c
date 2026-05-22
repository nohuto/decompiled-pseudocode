/*
 * XREFs of ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180194888
 * Callers:
 *     _lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::operator() @ 0x180192B44 (_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_--operator().c)
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180197CD0 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800D0FBC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$copy_to@UIPropertyValue@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180190490 (--$copy_to@UIPropertyValue@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(
        PROPVARIANT *propvarIn,
        struct Windows::Foundation::IPropertyValue **a2)
{
  int ActivationFactory; // eax
  HRESULT v5; // eax
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, HSTRING, _QWORD); // rdi
  int v8; // eax
  HRESULT v10; // eax
  __int64 (__fastcall *v11)(__int64, ULONGLONG, _QWORD); // rdi
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rdi
  int v16; // eax
  HRESULT v17; // eax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD); // rdi
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  BOOL pfRet; // [rsp+30h] [rbp-50h] BYREF
  PWSTR ppszOut; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h] BYREF
  ULONGLONG pullRet; // [rsp+48h] [rbp-38h] BYREF
  DOUBLE pdblRet; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v29, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v22);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x15E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)ActivationFactory,
      (int)v21);
  switch ( *(_WORD *)propvarIn )
  {
    case 4:
    case 5:
      v17 = PropVariantToDouble(propvarIn, &pdblRet);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x16F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v17,
          (int)v21);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 112LL);
      v21 = 0LL;
      v20 = v19(v22, v18, &v21);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x170,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v20,
          (int)v21);
      goto LABEL_27;
    case 0xB:
      v13 = PropVariantToBoolean(propvarIn, &pfRet);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v13,
          (int)v21);
      v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 136LL);
      v21 = 0LL;
      LOBYTE(v14) = pfRet;
      v16 = v15(v22, v14, &v21);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x165,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v16,
          (int)v21);
      goto LABEL_27;
    case 0x15:
      v10 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x169,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v10,
          (int)v21);
      v11 = *(__int64 (__fastcall **)(__int64, ULONGLONG, _QWORD))(*(_QWORD *)v22 + 104LL);
      v21 = 0LL;
      v12 = v11(v22, pullRet, &v21);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x16A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v12,
          (int)v21);
LABEL_27:
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::copy_to<Windows::Foundation::IPropertyValue>(&v21, a2);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v21);
      return 0LL;
    case 0x1F:
      v5 = PropVariantToStringAlloc(propvarIn, &ppszOut);
      if ( v5 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x175,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v5,
          (int)v21);
      v6 = -1LL;
      do
        ++v6;
      while ( ppszOut[v6] );
      WindowsCreateString(ppszOut, v6, &string);
      v7 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v22 + 144LL);
      v21 = 0LL;
      v8 = v7(v22, string, &v21);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x177,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v8,
          (int)v21);
      break;
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v21);
  return 2147942487LL;
}
