/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803CC018
 * Callers:
 *     ??$EnterFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CAAB0 (--$EnterFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$ExitFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CAB40 (--$ExitFullScreenForView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewAdded@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CACD0 (--$HolographicViewAdded@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewRemoved@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CADE0 (--$HolographicViewRemoved@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$HolographicViewRequestNavigateToView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CAE70 (--$HolographicViewRequestNavigateToView@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEA.c)
 *     ??$TransitionViewFromHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CBB10 (--$TransitionViewFromHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$TransitionViewToHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1803CBBA0 (--$TransitionViewToHolographic@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 *     ??$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x1803CBC2C (--$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180568374 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?TerminateApp@@YAXIPEBG@Z @ 0x180569B64 (-TerminateApp@@YAXIPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7)
{
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]

  v19 = a7;
  v17 = a6;
  v20 = 8LL;
  v18 = 4LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &LocaleName;
    v11 = 2;
  }
  v14 = v9;
  v15 = v11;
  v16 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v13);
}
