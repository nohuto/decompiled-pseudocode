/*
 * XREFs of ??$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x18042908C
 * Callers:
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042F0A4 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18045EE2C (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x1800BC960 (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 */

__int64 *__fastcall CortanaProactiveTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(int *a1, int *a2)
{
  __int64 *result; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<CortanaProactiveLogging>::get(
             (__int64)a1,
             _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)result[1];
  if ( *v6 > 4u )
  {
    v8 = *a2;
    v9 = *a1;
    v7[0] = 0x1000000LL;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                        (int)v6,
                        (int)&unk_18084BB46,
                        0,
                        v5,
                        (__int64)&v9,
                        (__int64)&v8,
                        (__int64)v7);
  }
  return result;
}
