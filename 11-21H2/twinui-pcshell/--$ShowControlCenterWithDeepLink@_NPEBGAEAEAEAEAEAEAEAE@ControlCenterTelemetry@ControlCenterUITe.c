/*
 * XREFs of ??$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAE@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_N$$QEAPEBGAEAE222@Z @ 0x180352724
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@3333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803529C4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x18035537C (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 */

char __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::ShowControlCenterWithDeepLink<bool,unsigned short const *,unsigned char &,unsigned char &,unsigned char &,unsigned char &>(
        char *a1,
        __int64 *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v12; // ecx
  bool v13; // zf
  bool v15; // [rsp+60h] [rbp-20h] BYREF
  bool v16; // [rsp+61h] [rbp-1Fh] BYREF
  bool v17; // [rsp+62h] [rbp-1Eh] BYREF
  bool v18; // [rsp+63h] [rbp-1Dh] BYREF
  char v19; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF

  v10 = wil::details::static_lazy<ControlCenterLogging>::get(
          a1,
          _lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v11 = *(_DWORD **)(v10 + 8);
  if ( *v11 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v11, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v20 = 0x1000000LL;
      v15 = *a6 != 0;
      v13 = *a5 == 0;
      v21 = *a2;
      v16 = !v13;
      v13 = *a4 == 0;
      v19 = *a1;
      v17 = !v13;
      v18 = *a3 != 0;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v12,
                      (int)&dword_1806A3D19,
                      (__int64)&v19,
                      (__int64)&v21,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v15,
                      (__int64)&v20);
    }
  }
  return v10;
}
