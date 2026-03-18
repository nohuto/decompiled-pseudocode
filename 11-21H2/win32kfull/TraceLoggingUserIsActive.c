/*
 * XREFs of TraceLoggingUserIsActive @ 0x1C00CCAC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C021D71C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void TraceLoggingUserIsActive()
{
  int v0; // ecx
  int v1; // r8d
  __int64 v2; // r9
  int v3; // r10d
  int v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
    {
      v7 = gSessionId;
      v8 = 12;
      v4 = v3;
      v5 = v2;
      v6[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v0,
        (unsigned int)&unk_1C02F071D,
        v1,
        v2,
        (__int64)v6,
        (__int64)&v5,
        (__int64)&v4,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
