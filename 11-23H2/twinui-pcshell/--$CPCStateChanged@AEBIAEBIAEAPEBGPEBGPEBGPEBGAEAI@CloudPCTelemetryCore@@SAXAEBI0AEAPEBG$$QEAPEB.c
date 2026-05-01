/*
 * XREFs of ??$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEBG22AEAI@Z @ 0x180734FC0
 * Callers:
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x180735E98 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1807350DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@@@-$_t.c)
 */

char __fastcall CloudPCTelemetryCore::CPCStateChanged<unsigned int const &,unsigned int const &,unsigned short const * &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
        _DWORD *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        int *a7)
{
  __int64 *v11; // rax
  int v12; // r10d
  __int64 v13; // rcx
  int v15; // [rsp+68h] [rbp-1h] BYREF
  int v16; // [rsp+6Ch] [rbp+3h] BYREF
  __int64 v17; // [rsp+70h] [rbp+7h] BYREF
  __int64 v18; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h] BYREF
  __int64 v20; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+27h] BYREF
  __int64 v22; // [rsp+98h] [rbp+2Fh] BYREF

  v11 = wil::details::static_lazy<CloudPCTelemetryCore>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn(v11[1], 0x800000000000LL);
    if ( (_BYTE)v11 )
    {
      v18 = 0x1000000LL;
      v15 = *a7;
      v19 = *a6;
      v13 = *a5;
      v21 = *a4;
      v22 = *a3;
      v16 = *a2;
      LODWORD(v17) = *a1;
      v20 = v13;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v12,
                      (int)&dword_18087C698,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v15,
                      (__int64)&v18);
    }
  }
  return (char)v11;
}
