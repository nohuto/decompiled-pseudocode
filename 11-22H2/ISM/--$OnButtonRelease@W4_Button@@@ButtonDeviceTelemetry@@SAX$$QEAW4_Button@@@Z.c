/*
 * XREFs of ??$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z @ 0x180061D9C
 * Callers:
 *     ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800EF920 (-OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VButtonDeviceTelemetry@@@details@wil@@QEAAPEAVButtonDeviceTelemetry@@P6AXXZ@Z @ 0x180061E5C (-get@-$static_lazy@VButtonDeviceTelemetry@@@details@wil@@QEAAPEAVButtonDeviceTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800E5518 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall ButtonDeviceTelemetry::OnButtonRelease<enum _Button>(int *a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = wil::details::static_lazy<ButtonDeviceTelemetry>::get(
             a1,
             _lambda_67de347590caf7f814e5d34d220a0327_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0 )
  {
    result = *(_QWORD *)(v5 + 24) & 0x400000000000LL;
    if ( result == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1;
      v7 = 0x2000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v5,
               (unsigned int)&unk_180232B58,
               v3,
               v4,
               (__int64)&v6,
               (__int64)&v7);
    }
  }
  return result;
}
