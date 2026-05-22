/*
 * XREFs of ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800EE9D0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18001CEB0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@555@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U3@U3@U3@@-$_tlgWrit.c)
 */

void __fastcall LampArrayTelemetry::LogPnPDeviceInfo(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // [rsp+50h] [rbp-20h] BYREF
  __int16 v7; // [rsp+52h] [rbp-1Eh] BYREF
  __int16 v8; // [rsp+54h] [rbp-1Ch] BYREF
  const WCHAR *v9; // [rsp+58h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h] BYREF
  LampArrayTelemetry *v11; // [rsp+80h] [rbp+10h] BYREF

  v11 = this;
  if ( (unsigned int)dword_180266498 > 5
    && (qword_1802664A8 & 0x400000000000LL) != 0
    && (qword_1802664B0 & 0x400000000000LL) == qword_1802664B0 )
  {
    LOWORD(v11) = a6;
    v6 = a5;
    v9 = a2;
    v7 = a4;
    v8 = a3;
    v10 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)this,
      (int)&unk_1802245B1,
      a3,
      a4,
      (__int64)&v10,
      &v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v11);
  }
}
