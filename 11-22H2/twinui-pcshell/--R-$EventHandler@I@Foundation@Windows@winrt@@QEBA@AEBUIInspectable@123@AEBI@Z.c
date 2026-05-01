/*
 * XREFs of ??R?$EventHandler@I@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBI@Z @ 0x18027E100
 * Callers:
 *     ??$invoke@U?$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Internal@34@I@impl@winrt@@YA_NAEBU?$EventHandler@I@Foundation@Windows@1@AEBUProcessTracker@implementation@Shell@Internal@41@AEBI@Z @ 0x18027D960 (--$invoke@U-$EventHandler@I@Foundation@Windows@winrt@@UProcessTracker@implementation@Shell@Inter.c)
 *     ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18027E4F0 (-Invoke@-$delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::EventHandler<unsigned int>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
