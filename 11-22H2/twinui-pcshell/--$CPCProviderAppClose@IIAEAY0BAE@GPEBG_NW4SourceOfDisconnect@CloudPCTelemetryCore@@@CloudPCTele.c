/*
 * XREFs of ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18027AC14
 * Callers:
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x18027BE20 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?Provider@CloudPCTelemetryCore@@SAQEBU_tlgProvider_t@@XZ @ 0x180707194 (-Provider@CloudPCTelemetryCore@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18071EC1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrap.c)
 */

char __fastcall CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
        int *a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        char *a5,
        int *a6)
{
  const struct _tlgProvider_t *v10; // rax
  int v11; // r10d
  int v12; // edx
  char v13; // cl
  char v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v17; // [rsp+70h] [rbp+1Fh] BYREF
  int v18; // [rsp+74h] [rbp+23h] BYREF
  __int64 v19; // [rsp+78h] [rbp+27h] BYREF
  __int64 v20; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+88h] [rbp+37h] BYREF

  v10 = CloudPCTelemetryCore::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 0x800000000000LL);
    if ( (_BYTE)v10 )
    {
      v19 = 0x1000000LL;
      v21 = a3;
      v12 = *a6;
      v13 = *a5;
      v20 = *a4;
      v17 = *a2;
      v18 = *a1;
      v16 = v12;
      v15 = v13;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v11,
                      (int)&dword_18087C2F5,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v15,
                      (__int64)&v16,
                      (__int64)&v19);
    }
  }
  return (char)v10;
}
