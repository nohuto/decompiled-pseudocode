/*
 * XREFs of ?WidgetsOSState_@DashboardManagerTelemetry@@QEAAXK_N00000@Z @ 0x1801CE374
 * Callers:
 *     ??$WidgetsOSState@AEAK_NAEAK_N_N_N_N@DashboardManagerTelemetry@@SAXAEAK$$QEA_N01111@Z @ 0x1801C1F5C (--$WidgetsOSState@AEAK_NAEAK_N_N_N_N@DashboardManagerTelemetry@@SAXAEAK$$QEA_N01111@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800020B0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall DashboardManagerTelemetry::WidgetsOSState_(
        DashboardManagerTelemetry *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  bool v15; // [rsp+60h] [rbp-20h] BYREF
  bool v16; // [rsp+61h] [rbp-1Fh] BYREF
  bool v17; // [rsp+62h] [rbp-1Eh] BYREF
  char v18; // [rsp+63h] [rbp-1Dh] BYREF
  _BYTE v19[4]; // [rsp+64h] [rbp-1Ch] BYREF
  int v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  DashboardManagerTelemetry *v22; // [rsp+90h] [rbp+10h] BYREF

  v22 = this;
  v11 = DashboardManagerTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v11 > 5u )
  {
    if ( tlgKeywordOn((__int64)v11, 0x800000000000LL) )
    {
      v15 = a7;
      v16 = a6;
      v17 = a5;
      LOBYTE(v22) = a8;
      v21 = 0x1000000LL;
      v18 = a4;
      v19[0] = a3;
      v20 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v14,
        (int)&unk_1806CC178,
        v12,
        v13,
        (__int64)&v20,
        (__int64)v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v22,
        (__int64)&v21);
    }
  }
}
