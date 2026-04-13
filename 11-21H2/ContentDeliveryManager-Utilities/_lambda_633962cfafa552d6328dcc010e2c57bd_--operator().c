/*
 * XREFs of _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800EB520
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800EC4C4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800EB2E0 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800EB7F8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_633962cfafa552d6328dcc010e2c57bd_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // ecx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // eax
  const WCHAR *v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  HSTRING *v16; // r14
  __int64 v17; // rdi
  int v19; // [rsp+20h] [rbp-89h]
  const WCHAR *v20; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-41h] BYREF
  __int128 v23; // [rsp+70h] [rbp-39h] BYREF
  __int128 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-19h]
  __int128 v26; // [rsp+A0h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp+17h] BYREF
  HSTRING string; // [rsp+D8h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v21 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.CustomSystemTrigger",
         0x37u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v4,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v19);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v21);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_16;
  v5 = **(_DWORD **)(a1 + 24);
  v24 = 0LL;
  LODWORD(v24) = 2;
  v25 = 295000LL;
  BYTE4(v24) = (v5 & 8) != 0;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v21 + 48LL);
  v7 = **(unsigned int **)(a1 + 8);
  v8 = **(_QWORD **)(a1 + 16);
  v9 = *(_QWORD **)a1;
  v26 = v24;
  v27 = 295000LL;
  v10 = v6(v21, *v9, v7, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      228LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10,
      0);
  StringRawBuffer = 0LL;
  v20 = 0LL;
  v11 = ((__int64 (__fastcall *)(_QWORD, GUID *, const WCHAR **))*MEMORY[0])(
          0LL,
          &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7,
          &v20);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v11,
      0);
  v12 = v20;
  StringRawBuffer = v20;
  v13 = *(__int64 **)(a1 + 64);
  v23 = 0LL;
  v14 = v13[1];
  v15 = *v13;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v12 = v20;
  }
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v23, v15, v14);
  v16 = *(HSTRING **)(a1 + 32);
  if ( (unsigned __int8)CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
                          (unsigned int)*v16,
                          **(_QWORD **)(a1 + 40),
                          (_DWORD)v12,
                          **(_DWORD **)(a1 + 48),
                          **(_BYTE **)(a1 + 56) != 0,
                          (__int64)&v23) )
  {
    v17 = *v13;
    StringRawBuffer = WindowsGetStringRawBuffer(*v16, 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      &StringRawBuffer,
      (const unsigned __int16 *)(v17 + 8));
  }
  if ( v12 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return 0LL;
}
