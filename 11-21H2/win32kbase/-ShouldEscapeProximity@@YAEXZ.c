/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C014737C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1C01469A0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  __int64 v9; // [rsp+58h] [rbp-8h] BYREF
  char v10; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, -1LL);
    if ( v3 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v2 = 1;
    }
  }
  if ( (unsigned int)dword_1C0288378 > 5 && tlgKeywordOn((__int64)&dword_1C0288378, 0x400000000000LL) )
  {
    v11 = gProximityEscapeCount;
    v12 = gProximityScenarioCount;
    v13 = gProximityPowerPressCount;
    v8 = v3;
    v9 = v5;
    v10 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v4,
      byte_1C025B11E,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v8);
  }
  gProximityLastPowerPressTime = v3;
  return v2;
}
