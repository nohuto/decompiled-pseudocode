/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007537C
 * Callers:
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z @ 0x14007553C (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        __int64 *a6,
        void **a7,
        const unsigned __int16 **a8,
        __int64 a9)
{
  __int64 v11; // rdx
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  const unsigned __int16 *v18; // rcx
  int v19; // edx
  _BYTE v21[32]; // [rsp+30h] [rbp-51h] BYREF
  const unsigned __int16 *v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+5Ch] [rbp-25h]
  __int64 v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h]
  _WORD *v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  int v29; // [rsp+7Ch] [rbp-5h]
  const unsigned __int16 *v30; // [rsp+80h] [rbp-1h]
  int v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+8Ch] [rbp+Bh]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v33 = a9;
  v11 = -1LL;
  v34 = 4LL;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)v12 + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_1400B048F;
    v14 = 1;
  }
  v31 = v14;
  v30 = v12;
  v32 = 0;
  v15 = *a7;
  if ( *a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &unk_1400AF8C4;
    v17 = 2;
  }
  v27 = v15;
  v28 = v17;
  v29 = 0;
  v25 = *a6;
  v26 = 16LL;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v18 + v11) );
    v19 = v11 + 1;
  }
  else
  {
    v18 = &unk_1400B048F;
    v19 = 1;
  }
  v22 = v18;
  v23 = v19;
  v24 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 7, (__int64)v21);
}
