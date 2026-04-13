/*
 * XREFs of Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart @ 0x18005FDC8
 * Callers:
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Start @ 0x18005E880 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005E880.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *__fastcall Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *result; // rax
  __int64 (__fastcall *v5)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64); // rdi
  __int64 v6; // rbx
  PVOID Reserved1; // rcx
  GUID v8; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER v9; // [rsp+50h] [rbp-48h] BYREF

  result = Microsoft::WRL::gCausality;
  if ( Microsoft::WRL::gCausality )
  {
    v5 = *(__int64 (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
    v6 = *(unsigned int *)(a1 + 56);
    *(_QWORD *)&v8.Data1 = L"ContentManagement.ContentManagementService.ResolveLayoutBindingsAsync";
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)&v8, a3)[1].Reserved.Reserved1;
    v8 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    return (struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *)v5(
                                                                                      Microsoft::WRL::gCausality,
                                                                                      0LL,
                                                                                      2LL,
                                                                                      &v8,
                                                                                      a1,
                                                                                      Reserved1,
                                                                                      v6);
  }
  return result;
}
