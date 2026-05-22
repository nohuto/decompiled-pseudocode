/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800FD9D8
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByVal@$03@@66666@Z @ 0x180001390 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U3@U3@U-$_tlgWrapper.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayDeviceAdded(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
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
  __int16 v11; // [rsp+88h] [rbp-11h] BYREF
  __int16 v12; // [rsp+8Ah] [rbp-Fh] BYREF
  int v13; // [rsp+8Ch] [rbp-Dh] BYREF
  int v14; // [rsp+90h] [rbp-9h] BYREF
  int v15; // [rsp+94h] [rbp-5h] BYREF
  int v16; // [rsp+98h] [rbp-1h] BYREF
  int v17; // [rsp+9Ch] [rbp+3h] BYREF
  int v18; // [rsp+A0h] [rbp+7h] BYREF
  const WCHAR *v19; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+B0h] [rbp+17h] BYREF
  LampArrayTelemetry *v21; // [rsp+C8h] [rbp+2Fh] BYREF

  v21 = this;
  if ( (unsigned int)dword_180275498 > 5
    && (qword_1802754A8 & 0x400000000000LL) != 0
    && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
  {
    v13 = a11;
    v14 = a10;
    v15 = a9;
    v16 = a8;
    v17 = a7;
    v18 = a6;
    LOWORD(v21) = a5;
    v19 = a2;
    v11 = a4;
    v12 = a3;
    v20 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      (int)&unk_18023331F,
      a3,
      a4,
      (__int64)&v20,
      &v19,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
