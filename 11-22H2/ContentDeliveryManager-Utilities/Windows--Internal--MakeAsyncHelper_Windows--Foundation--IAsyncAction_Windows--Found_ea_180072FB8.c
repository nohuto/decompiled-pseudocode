/*
 * XREFs of Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180072FB8
 * Callers:
 *     Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x180072CAC (Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--A.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Internal::ComTaskPoolHandler_unsigned_short_const___const_&_enum_TrustLevel_&_ @ 0x180072ABC (Microsoft--WRL--Details--Make_Windows--Internal--AsyncOperation_Windows--Foundation_ea_180072ABC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, __int64))
{
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  __int64 v8; // rbx
  int v9; // edi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v10 = 1;
  v11 = L"Windows.Foundation.IAsyncAction";
  *a1 = 0LL;
  v6 = a5;
  if ( !a5 )
    return 2147942414LL;
  Microsoft::WRL::Details::Make_Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____Windows::Internal::ComTaskPoolHandler_unsigned_short_const___const___enum_TrustLevel___(
    (__int64)&v12,
    a2,
    &v11,
    &v10);
  v8 = v12;
  if ( !v12 )
  {
    (**v6)(v6, 1LL);
    return 2147942414LL;
  }
  *(_QWORD *)(v12 + 256) = v6;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
  if ( v9 >= 0 )
  {
    *a1 = (v8 + 176) & -(__int64)(v8 != 0);
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  return (unsigned int)v9;
}
