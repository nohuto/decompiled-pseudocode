/*
 * XREFs of ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806FE760
 * Callers:
 *     ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806FFAFC (-HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807003EC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x1802EB490 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 */

__int64 *__fastcall InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // r9
  _DWORD *v4; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
             a1,
             (void (__cdecl *)())_lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)result[1];
  if ( *v4 > 5u )
  {
    v5 = a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                        (int)v4,
                        (int)&dword_18087BE46,
                        0,
                        v3,
                        (const WCHAR **)&v5);
  }
  return result;
}
