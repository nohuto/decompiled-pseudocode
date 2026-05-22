/*
 * XREFs of ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180197CD0
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18019DC80 (-OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallb.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18004649C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B26E0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_2994a7a20cb592567dc6818203d49b13_@@@Z @ 0x18018EAAC (--$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x1801918D8 (--0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHStri.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180194888 (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 MPCConstantManagerClient::OnConstantChanged(
        __int64 a1,
        struct Windows::Foundation::IPropertyValue *a2,
        int a3,
        ...)
{
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // rdi
  struct Windows::Foundation::IPropertyValue *v9; // rsi
  __int64 v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-40h]
  struct Windows::Foundation::IPropertyValue *v16; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::Foundation::IPropertyValue *v22; // [rsp+88h] [rbp+28h] BYREF
  const WCHAR *v23; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  PROPVARIANT *propvarIn; // [rsp+A0h] [rbp+40h]
  PROPVARIANT *v26; // [rsp+A8h] [rbp+48h]
  va_list va1; // [rsp+B0h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, const WCHAR *);
  propvarIn = va_arg(va1, PROPVARIANT *);
  v26 = va_arg(va1, PROPVARIANT *);
  v22 = a2;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string, (const WCHAR **)va);
  v22 = 0LL;
  v16 = 0LL;
  v5 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(propvarIn, &v16);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v5,
      v15);
  v6 = v22;
  v22 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(v26, &v22);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v7,
      v15);
  v8 = v22;
  v22 = 0LL;
  v9 = v16;
  v16 = 0LL;
  v10 = (__int64)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v10 = Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::ConstantChangedEventArgs(
            v10,
            a3,
            &string,
            (__int64)v9,
            (__int64)v8);
    v12 = v10;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v10 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      234LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      v11);
  v19 = v12;
  v18 = a1;
  *(_QWORD *)&v20 = &v18;
  *((_QWORD *)&v20 + 1) = &v19;
  v13 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_2994a7a20cb592567dc6818203d49b13_>(
          a1 + 120,
          &v20);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v13,
      v15);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v16);
  WindowsDeleteString(string);
  return 0LL;
}
