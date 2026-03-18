/*
 * XREFs of ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x1801CAC80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801CABB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall CDwmRenderThreadWatchdog::OnWatchdogTimeout(CDwmRenderThreadWatchdog *this)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)this + 11) )
    v1 = *((_DWORD *)this + 9);
  else
    v1 = *((_DWORD *)this + 8);
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 11, v1);
  if ( (unsigned int)dword_1803D1270 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D1270, 0x400000000000LL) )
    {
      v5 = *(_DWORD *)(v4 + 44);
      v6 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v2,
        byte_18036B814,
        v3,
        v4,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
