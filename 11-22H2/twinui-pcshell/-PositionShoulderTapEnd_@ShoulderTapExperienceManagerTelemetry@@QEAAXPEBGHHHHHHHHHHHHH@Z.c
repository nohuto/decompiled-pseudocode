/*
 * XREFs of ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x18044308C
 * Callers:
 *     ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x180441B9C (--$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExper.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444444444444@Z @ 0x18044213C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWr.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x180443A1C (-get@-$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperi.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+98h] [rbp-39h] BYREF
  int v23; // [rsp+9Ch] [rbp-35h] BYREF
  int v24; // [rsp+A0h] [rbp-31h] BYREF
  int v25; // [rsp+A4h] [rbp-2Dh] BYREF
  int v26; // [rsp+A8h] [rbp-29h] BYREF
  int v27; // [rsp+ACh] [rbp-25h] BYREF
  int v28; // [rsp+B0h] [rbp-21h] BYREF
  int v29; // [rsp+B4h] [rbp-1Dh] BYREF
  int v30; // [rsp+B8h] [rbp-19h] BYREF
  int v31; // [rsp+BCh] [rbp-15h] BYREF
  int v32; // [rsp+C0h] [rbp-11h] BYREF
  int v33; // [rsp+C4h] [rbp-Dh] BYREF
  const WCHAR *v34; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+17h] BYREF

  v35 = (__int64)this;
  v18 = *(_DWORD **)(wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
                       this,
                       _lambda_e47dc56054974f6441f4df3a6c4c9af5_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v18 > 5u )
  {
    if ( tlgKeywordOn((__int64)v18, 0x400000000000LL) )
    {
      LODWORD(v35) = a15;
      v22 = a14;
      v23 = a13;
      v24 = a12;
      v25 = a11;
      v26 = a10;
      v27 = a9;
      v28 = a8;
      v29 = a7;
      v30 = a6;
      v31 = a5;
      v32 = a4;
      v33 = a3;
      v34 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned __int8 *)dword_18084E81B,
        v20,
        v21,
        &v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v35);
    }
  }
}
