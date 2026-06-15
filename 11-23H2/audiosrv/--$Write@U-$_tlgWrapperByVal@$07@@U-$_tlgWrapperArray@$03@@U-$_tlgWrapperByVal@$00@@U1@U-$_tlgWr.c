/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@7@Z @ 0x180018C70
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11)
{
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  _BYTE v17[32]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h]
  __int64 v19; // [rsp+58h] [rbp-69h]
  __int64 *v20; // [rsp+60h] [rbp-61h]
  __int64 v21; // [rsp+68h] [rbp-59h]
  __int64 v22; // [rsp+70h] [rbp-51h]
  int v23; // [rsp+78h] [rbp-49h]
  int v24; // [rsp+7Ch] [rbp-45h]
  __int64 v25; // [rsp+80h] [rbp-41h]
  __int64 v26; // [rsp+88h] [rbp-39h]
  __int64 v27; // [rsp+90h] [rbp-31h]
  __int64 v28; // [rsp+98h] [rbp-29h]
  const WCHAR *v29; // [rsp+A0h] [rbp-21h]
  int v30; // [rsp+A8h] [rbp-19h]
  int v31; // [rsp+ACh] [rbp-15h]
  __int64 v32; // [rsp+B0h] [rbp-11h]
  __int64 v33; // [rsp+B8h] [rbp-9h]
  __int64 v34; // [rsp+C0h] [rbp-1h]
  __int64 v35; // [rsp+C8h] [rbp+7h]

  v34 = a11;
  v32 = a10;
  v35 = 4LL;
  v33 = 4LL;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &String2;
    v15 = 2;
  }
  v27 = a8;
  v25 = a7;
  v29 = v13;
  v30 = v15;
  v31 = 0;
  v28 = 8LL;
  v22 = *a6;
  v23 = 4 * *((unsigned __int16 *)a6 + 4);
  v18 = a5;
  v20 = a6 + 1;
  v26 = 1LL;
  v21 = 2LL;
  v24 = 0;
  v19 = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 10, (__int64)v17);
}
