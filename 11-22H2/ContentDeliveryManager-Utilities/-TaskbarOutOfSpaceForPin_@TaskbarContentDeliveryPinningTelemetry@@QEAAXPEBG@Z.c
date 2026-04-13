/*
 * XREFs of ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x180041078
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002CEE0 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001084 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x180001D28 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x180043DF0 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 */

void __fastcall TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin_(
        TaskbarContentDeliveryPinningTelemetry *this,
        const unsigned __int16 *a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = (__int64)this;
  v3 = *(_DWORD **)(wil::details::static_lazy<TaskbarLogging>::get(
                      this,
                      _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v7 = 0x1000000LL;
      v8 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v4,
        (int)&dword_18017A34B,
        v5,
        v6,
        (const wchar_t **)&v8,
        (__int64)&v7);
    }
  }
}
