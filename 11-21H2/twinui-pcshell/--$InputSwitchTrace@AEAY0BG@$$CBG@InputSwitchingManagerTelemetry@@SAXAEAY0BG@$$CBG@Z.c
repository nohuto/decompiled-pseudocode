/*
 * XREFs of ??$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z @ 0x1805DF39C
 * Callers:
 *     ??R_lambda_6b0b16da3cf77b36e3abbc296541c710_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Z @ 0x1805E0A7C (--R_lambda_6b0b16da3cf77b36e3abbc296541c710_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 *     ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8 (--R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x180038B60 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 *__fastcall InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[22]>(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // r9
  _DWORD *v4; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
             a1,
             _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)result[1];
  if ( *v4 > 5u )
  {
    v5 = a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                        (int)v4,
                        (int)&dword_1806CD856,
                        0,
                        v3,
                        (const WCHAR **)&v5);
  }
  return result;
}
