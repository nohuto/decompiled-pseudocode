/*
 * XREFs of ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N000PEBG1100@Z @ 0x180247C9C
 * Callers:
 *     ??$WidgetsOSState@AEAKAEA_NAEAK_N_NPEBGPEBGAEAPEBG_N_N@DashboardManagerTelemetry@@SAXAEAKAEA_N0$$QEA_N2$$QEAPEBG3AEAPEBG22@Z @ 0x18022F0C4 (--$WidgetsOSState@AEAKAEA_NAEAK_N_NPEBGPEBGAEAPEBG_N_N@DashboardManagerTelemetry@@SAXAEAKAEA_N0$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapSz@G@@U3@U3@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapSz@G@@5544AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000279C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapSz@G@@U3@U3@U2@U2.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B2564 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState_(
        DashboardManagerTelemetry *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        const unsigned __int16 *a7,
        const unsigned __int16 *a8,
        const unsigned __int16 *a9,
        bool a10,
        bool a11)
{
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r10d
  bool v18; // [rsp+88h] [rbp-11h] BYREF
  bool v19; // [rsp+89h] [rbp-10h] BYREF
  bool v20; // [rsp+8Ah] [rbp-Fh] BYREF
  char v21; // [rsp+8Bh] [rbp-Eh] BYREF
  char v22; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v23; // [rsp+90h] [rbp-9h] BYREF
  __int64 v24; // [rsp+98h] [rbp-1h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+2Fh] BYREF

  v28 = (__int64)this;
  v14 = DashboardManagerTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v14 > 5u )
  {
    if ( tlgKeywordOn((__int64)v14, 0x800000000000LL) )
    {
      v18 = a10;
      v25 = (__int64)a9;
      v26 = (__int64)a8;
      v27 = (__int64)a7;
      v19 = a6;
      v20 = a5;
      LOBYTE(v28) = a11;
      v24 = 0x1000000LL;
      v21 = a4;
      v22 = a3;
      LODWORD(v23) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v17,
        (int)&dword_180876363,
        v15,
        v16,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (const WCHAR **)&v27,
        (const WCHAR **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v24);
    }
  }
}
