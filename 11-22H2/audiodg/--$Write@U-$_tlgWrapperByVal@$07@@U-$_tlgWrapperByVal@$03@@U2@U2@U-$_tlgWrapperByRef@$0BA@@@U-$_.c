/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14007656C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000D0E0 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        void **a10)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  _BYTE v17[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  __int64 v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  _WORD *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]

  v12 = *a10;
  if ( *a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_1400AF8C4;
    v14 = 2;
  }
  v28 = v12;
  v29 = v14;
  v30 = 0;
  v15 = *a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v26 = v15;
  v18 = a5;
  v19 = 8LL;
  v27 = 16LL;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 4LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 8, (__int64)v17);
}
