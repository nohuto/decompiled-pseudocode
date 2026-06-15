/*
 * XREFs of _lambda_498e2e7efda85f2c61be28d23ba8beb3_::operator() @ 0x180068688
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53AEBU?$_tlgWrapperByVal@$01@@445@Z @ 0x18014369C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53AEBU?$_tlgWrapperByVal@$01@@4454@Z @ 0x1801437F4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U1_ea_1801437F4.c)
 */

__int64 __fastcall lambda_498e2e7efda85f2c61be28d23ba8beb3_::operator()(
        __int64 *a1,
        const wchar_t *a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v7; // r8
  int *v8; // rax
  __int64 v9; // r8
  int *v10; // rax
  _WORD v11[2]; // [rsp+70h] [rbp-9h] BYREF
  int v12; // [rsp+74h] [rbp-5h] BYREF
  int v13; // [rsp+78h] [rbp-1h] BYREF
  int v14; // [rsp+7Ch] [rbp+3h] BYREF
  int v15; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 *v16; // [rsp+88h] [rbp+Fh] BYREF
  const wchar_t *v17; // [rsp+90h] [rbp+17h] BYREF
  __int64 v18; // [rsp+98h] [rbp+1Fh] BYREF
  const wchar_t *v19; // [rsp+A0h] [rbp+27h] BYREF
  GUID *v20; // [rsp+A8h] [rbp+2Fh] BYREF
  GUID v21; // [rsp+B0h] [rbp+37h] BYREF

  v4 = *a1;
  result = 65534LL;
  if ( *a4 == 0xFFFE )
  {
    v7 = *(_QWORD *)(v4 + 9784);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    {
      result = *(_QWORD *)(v7 + 24) & 0x10LL;
      if ( result == *(_QWORD *)(v7 + 24) )
      {
        v15 = *((_DWORD *)a4 + 5);
        v16 = a4 + 12;
        v12 = *((_DWORD *)a4 + 2);
        v13 = *((_DWORD *)a4 + 1);
        v11[0] = a4[1];
        v17 = L"WAVEFORMATEXTENSIBLE";
        v8 = (int *)a1[1];
        v19 = a2;
        v18 = a3;
        v14 = *v8;
        v20 = *(GUID **)(v4 + 24);
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                 v7,
                 (unsigned int)&unk_18018EF5C,
                 v7,
                 (_DWORD)a4,
                 (__int64)&v20,
                 (__int64)&v14,
                 (__int64)&v19,
                 (__int64)&v18,
                 (__int64)&v17,
                 (__int64)v11,
                 (__int64)&v13,
                 (__int64)&v12,
                 (__int64)&v16,
                 (__int64)&v15);
      }
    }
  }
  else
  {
    result = *a4;
    v21 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v21.Data1 = result;
    v9 = *(_QWORD *)(v4 + 9784);
    if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 0x10) != 0 )
    {
      result = *(_QWORD *)(v9 + 24) & 0x10LL;
      if ( result == *(_QWORD *)(v9 + 24) )
      {
        v17 = a2;
        v20 = &v21;
        v14 = *((_DWORD *)a4 + 2);
        v13 = *((_DWORD *)a4 + 1);
        v11[0] = a4[1];
        v19 = L"WAVEFORMATEX";
        v10 = (int *)a1[1];
        v18 = a3;
        v12 = *v10;
        v16 = *(unsigned __int16 **)(v4 + 24);
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                 v9,
                 (unsigned int)&unk_18018EEAF,
                 v9,
                 (_DWORD)a4,
                 (__int64)&v16,
                 (__int64)&v12,
                 (__int64)&v17,
                 (__int64)&v18,
                 (__int64)&v19,
                 (__int64)v11,
                 (__int64)&v13,
                 (__int64)&v14,
                 (__int64)&v20);
      }
    }
  }
  return result;
}
