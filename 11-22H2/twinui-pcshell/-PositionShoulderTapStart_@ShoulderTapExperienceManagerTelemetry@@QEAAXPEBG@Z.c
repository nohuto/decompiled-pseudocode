/*
 * XREFs of ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1804431E4
 * Callers:
 *     ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180441D1C (--$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x180443A1C (-get@-$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperi.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = (__int64)this;
  v3 = *(_DWORD **)(wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
                      this,
                      _lambda_e47dc56054974f6441f4df3a6c4c9af5_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v6 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v4,
        (int)&dword_18084E9BF,
        0,
        v5,
        (const WCHAR **)&v6);
    }
  }
}
