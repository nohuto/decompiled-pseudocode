/*
 * XREFs of ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180731038
 * Callers:
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x1807320D0 (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18071EC1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrap.c)
 */

char __fastcall CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4,
        char *a5,
        int *a6)
{
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // cl
  char v16; // [rsp+68h] [rbp+17h] BYREF
  int v17; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v18; // [rsp+70h] [rbp+1Fh] BYREF
  int v19; // [rsp+74h] [rbp+23h] BYREF
  __int64 v20; // [rsp+78h] [rbp+27h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+88h] [rbp+37h] BYREF

  v10 = wil::details::static_lazy<CloudPCTelemetryCore>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 0x800000000000LL);
    if ( (_BYTE)v10 )
    {
      v20 = 0x1000000LL;
      v17 = *a6;
      v14 = *a5;
      v21 = *a4;
      v22 = *a3;
      v18 = *a2;
      v19 = *a1;
      v16 = v14;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v13,
                      (unsigned __int8 *)dword_18087C2F5,
                      v11,
                      v12,
                      (__int64)&v19,
                      (__int64)&v18,
                      (const WCHAR **)&v22,
                      (const WCHAR **)&v21,
                      (__int64)&v16,
                      (__int64)&v17,
                      (__int64)&v20);
    }
  }
  return (char)v10;
}
