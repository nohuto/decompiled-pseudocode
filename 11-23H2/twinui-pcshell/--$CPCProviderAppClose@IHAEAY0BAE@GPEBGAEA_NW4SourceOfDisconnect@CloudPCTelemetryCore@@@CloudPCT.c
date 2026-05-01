/*
 * XREFs of ??$CPCProviderAppClose@IHAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAHAEAY0BAE@G$$QEAPEBGAEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18071E6DC
 * Callers:
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18071EC1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrap.c)
 */

char __fastcall CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short (&)[260],unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect>(
        int *a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        char *a5,
        int *a6)
{
  __int64 *v10; // rax
  int v11; // r10d
  char v12; // cl
  char v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  int v17; // [rsp+74h] [rbp+23h] BYREF
  __int64 v18; // [rsp+78h] [rbp+27h] BYREF
  __int64 v19; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+88h] [rbp+37h] BYREF

  v10 = wil::details::static_lazy<CloudPCTelemetryCore>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 0x800000000000LL);
    if ( (_BYTE)v10 )
    {
      v18 = 0x1000000LL;
      v20 = a3;
      v15 = *a6;
      v12 = *a5;
      v19 = *a4;
      v16 = *a2;
      v17 = *a1;
      v14 = v12;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v11,
                      (int)&dword_18087C2F5,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v14,
                      (__int64)&v15,
                      (__int64)&v18);
    }
  }
  return (char)v10;
}
