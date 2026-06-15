/*
 * XREFs of _lambda_017b023becfb43e32b686f5364653b92_::operator() @ 0x18007424C
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@553AEBU?$_tlgWrapperByVal@$01@@445@Z @ 0x180149A8C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@553AEBU?$_tlgWrapperByVal@$01@@4454@Z @ 0x180149BFC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U3@U3_ea_180149BFC.c)
 */

char __fastcall lambda_017b023becfb43e32b686f5364653b92_::operator()(__int64 *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  __int64 v4; // r10
  unsigned int v5; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // r11
  GUID *v13; // rax
  GUID v14; // xmm0
  int *v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r10
  __int64 v19; // r11
  __int128 *v20; // rax
  __int128 v21; // xmm0
  int *v22; // rax
  _WORD v24[2]; // [rsp+88h] [rbp-19h] BYREF
  int v25; // [rsp+8Ch] [rbp-15h] BYREF
  int v26; // [rsp+90h] [rbp-11h] BYREF
  int v27; // [rsp+94h] [rbp-Dh] BYREF
  int v28; // [rsp+98h] [rbp-9h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-1h] BYREF
  const wchar_t *v30; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+B8h] [rbp+17h] BYREF
  GUID *v33; // [rsp+C0h] [rbp+1Fh] BYREF
  GUID *v34; // [rsp+C8h] [rbp+27h] BYREF
  GUID v35; // [rsp+D0h] [rbp+2Fh] BYREF
  __int128 v36; // [rsp+E0h] [rbp+3Fh] BYREF

  v4 = *a1;
  LOBYTE(v5) = -2;
  if ( *a4 == 0xFFFE )
  {
    if ( **(_DWORD **)(v4 + 1752) > 4u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(_QWORD *)(v4 + 1752), 16LL);
      if ( (_BYTE)v5 )
      {
        v28 = *(_DWORD *)(v12 + 20);
        v29 = v12 + 24;
        v25 = *(_DWORD *)(v12 + 8);
        v26 = *(_DWORD *)(v12 + 4);
        v24[0] = *(_WORD *)(v12 + 2);
        v30 = L"WAVEFORMATEXTENSIBLE";
        v13 = *(GUID **)(v11 + 1272);
        v31 = a3;
        v32 = a2;
        v14 = *v13;
        v33 = &v35;
        v15 = (int *)a1[1];
        v35 = v14;
        v27 = *v15;
        v34 = *(GUID **)(*(_QWORD *)(v11 + 1288) + 48LL);
        LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                       v10,
                       (unsigned int)&unk_180195E87,
                       v9,
                       v10,
                       (__int64)&v34,
                       (__int64)&v27,
                       (__int64)&v33,
                       (__int64)&v32,
                       (__int64)&v31,
                       (__int64)&v30,
                       (__int64)v24,
                       (__int64)&v26,
                       (__int64)&v25,
                       (__int64)&v29,
                       (__int64)&v28);
      }
    }
  }
  else
  {
    v5 = (unsigned __int16)*a4;
    v35 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v35.Data1 = v5;
    if ( **(_DWORD **)(v4 + 1752) > 4u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(_QWORD *)(v4 + 1752), 16LL);
      if ( (_BYTE)v5 )
      {
        v32 = a3;
        v34 = &v35;
        v27 = *(_DWORD *)(v19 + 8);
        v26 = *(_DWORD *)(v19 + 4);
        v24[0] = *(_WORD *)(v19 + 2);
        v33 = (GUID *)L"WAVEFORMATEX";
        v20 = *(__int128 **)(v18 + 1272);
        v31 = a2;
        v21 = *v20;
        v30 = (const wchar_t *)&v36;
        v22 = (int *)a1[1];
        v36 = v21;
        v25 = *v22;
        v29 = *(_QWORD *)(*(_QWORD *)(v18 + 1288) + 48LL);
        LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                       v17,
                       (unsigned int)&unk_180195F4F,
                       v16,
                       v17,
                       (__int64)&v29,
                       (__int64)&v25,
                       (__int64)&v30,
                       (__int64)&v31,
                       (__int64)&v32,
                       (__int64)&v33,
                       (__int64)v24,
                       (__int64)&v26,
                       (__int64)&v27,
                       (__int64)&v34);
      }
    }
  }
  return v5;
}
