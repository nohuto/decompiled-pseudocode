/*
 * XREFs of ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18008E7D0
 * Callers:
 *     RmpTracingControlCallback @ 0x180047450 (RmpTracingControlCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapperByVal@$01@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapperByVal@$01@@33@Z @ 0x18008E204 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByV.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRundownEvent(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // [rsp+70h] [rbp+27h] BYREF
  __int64 v5; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v6; // [rsp+80h] [rbp+37h] BYREF
  __int64 v7; // [rsp+88h] [rbp+3Fh] BYREF
  const unsigned __int16 *v8; // [rsp+90h] [rbp+47h] BYREF
  __int64 v9; // [rsp+98h] [rbp+4Fh] BYREF
  char v10; // [rsp+B8h] [rbp+6Fh] BYREF
  __int16 v11; // [rsp+C0h] [rbp+77h] BYREF
  int v12; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1800DC1E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
    {
      v3 = *(_QWORD *)(v2 + 1320);
      v5 = *(_QWORD *)(v2 + 128);
      v6 = *(_QWORD *)(v2 + 104);
      v11 = *(_WORD *)(v2 + 1376);
      v12 = *(_DWORD *)(v2 + 1336);
      v4 = *(_DWORD *)(v2 + 1288);
      v7 = *(_QWORD *)(v3 + 32);
      v8 = (const unsigned __int16 *)(v3 + 88);
      v10 = *(_BYTE *)(v2 + 1280);
      v9 = *(_QWORD *)(v2 + 1752);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v3,
        byte_1800C4C91,
        v1,
        v2,
        (__int64)&v9,
        (__int64)&v10,
        &v8,
        (__int64)&v7,
        (__int64)&v4,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
