/*
 * XREFs of _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800D2808
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D351C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ACAFC (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800D25F8 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@?$com_ptr_t@UIAlarmTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D27A8 (--$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@-$com_ptr_t@UIAlarmTrigger@Ba.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D2CD8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_633962cfafa552d6328dcc010e2c57bd_::operator()(__int64 a1)
{
  int ActivationFactory; // eax
  int v3; // ecx
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  HSTRING *v12; // rsi
  __int64 v13; // rbx
  int v15; // [rsp+28h] [rbp-39h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-9h] BYREF
  __int128 v17; // [rsp+60h] [rbp-1h] BYREF
  __int64 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  __int64 v20; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Background.CustomSystemTrigger",
    0x38u,
    0x37u);
  ActivationFactory = RoGetActivationFactory(v22, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v20);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v15);
  v16 = 0LL;
  v3 = **(_DWORD **)(a1 + 24);
  v17 = 0LL;
  LODWORD(v17) = 2;
  v18 = 295000LL;
  BYTE4(v17) = (v3 & 8) != 0;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v20 + 48LL);
  v16 = 0LL;
  v5 = **(unsigned int **)(a1 + 8);
  v6 = **(_QWORD **)(a1 + 16);
  v7 = *(_QWORD **)a1;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v17;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 295000LL;
  v8 = v4(v20, *v7, v5, v6);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v8,
      0);
  v19 = 0LL;
  v9 = wil::com_ptr_t<Windows::ApplicationModel::Background::IAlarmTrigger,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundTrigger>(
         &v16,
         &v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
    &v19,
    v9);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v17);
  v10 = *(__int64 **)(a1 + 64);
  v11 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
          &v17,
          v10);
  v12 = *(HSTRING **)(a1 + 32);
  if ( (unsigned __int8)CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
                          (unsigned int)*v12,
                          **(_QWORD **)(a1 + 40),
                          v19,
                          **(_DWORD **)(a1 + 48),
                          **(_BYTE **)(a1 + 56) != 0,
                          (__int64)v11) )
  {
    v13 = *v10;
    *(_QWORD *)&v17 = WindowsGetStringRawBuffer(*v12, 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      (__int64 *)&v17,
      v13 + 8);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  return 0LL;
}
