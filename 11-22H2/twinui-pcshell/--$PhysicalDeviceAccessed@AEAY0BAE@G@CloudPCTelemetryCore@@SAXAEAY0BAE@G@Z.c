/*
 * XREFs of ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180276A8C
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@CloudPCTelemetryCore@@SAQEBU_tlgProvider_t@@XZ @ 0x180707194 (-Provider@CloudPCTelemetryCore@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CloudPCTelemetryCore::PhysicalDeviceAccessed<unsigned short (&)[260]>(__int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = CloudPCTelemetryCore::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x800000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = 0x1000000LL;
      v7 = a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v3,
                     (unsigned __int8 *)dword_18087BF46,
                     0LL,
                     v4,
                     (const WCHAR **)&v7,
                     (__int64)&v6);
    }
  }
  return (char)v2;
}
