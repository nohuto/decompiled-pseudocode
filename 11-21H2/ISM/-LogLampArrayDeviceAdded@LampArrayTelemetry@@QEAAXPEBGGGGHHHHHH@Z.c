/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800D4E9C
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1800D4BB8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayDeviceAdded(
        LampArrayTelemetry *this,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int16 v11; // [rsp+78h] [rbp-11h] BYREF
  __int16 v12; // [rsp+7Ah] [rbp-Fh] BYREF
  int v13; // [rsp+7Ch] [rbp-Dh] BYREF
  int v14; // [rsp+80h] [rbp-9h] BYREF
  int v15; // [rsp+84h] [rbp-5h] BYREF
  int v16; // [rsp+88h] [rbp-1h] BYREF
  int v17; // [rsp+8Ch] [rbp+3h] BYREF
  int v18; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 *v19; // [rsp+98h] [rbp+Fh] BYREF
  LampArrayTelemetry *v20; // [rsp+B8h] [rbp+2Fh] BYREF

  v20 = this;
  if ( (unsigned int)dword_180240410 > 5
    && (qword_180240420 & 0x400000000000LL) != 0
    && (qword_180240428 & 0x400000000000LL) == qword_180240428 )
  {
    v13 = a11;
    v14 = a10;
    v15 = a9;
    v16 = a8;
    v17 = a7;
    v18 = a6;
    LOWORD(v20) = a5;
    v19 = a2;
    v11 = a4;
    v12 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_180202BF7,
      a3,
      a4,
      &v19,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v20,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
