/*
 * XREFs of ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18006F580
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x1800DFF5C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800E04B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x1800E0CEC (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800AE21C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

LPVOID __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        union _RTL_RUN_ONCE **a1,
        int *a2)
{
  int v4; // r8d
  int v5; // r9d
  LPVOID result; // rax
  _DWORD *v7; // rcx
  LPVOID Context; // [rsp+30h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp-10h]
  WINBOOL fPending; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v9 = &`ApplicationViewManagementLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DDC8;
    qword_18098DDC8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DDE0 = (__int64)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    v10 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v9);
  }
  result = Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 5u )
  {
    v12 = *a2;
    v9 = *a1;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                     (_DWORD)v7,
                     (unsigned int)&unk_180846FA2,
                     v4,
                     v5,
                     (__int64)&v9,
                     (__int64)&v12);
  }
  return result;
}
