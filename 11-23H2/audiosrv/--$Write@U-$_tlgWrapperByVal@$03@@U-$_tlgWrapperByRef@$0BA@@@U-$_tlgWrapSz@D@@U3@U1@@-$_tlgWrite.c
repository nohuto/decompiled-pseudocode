/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x1800652E8
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x18015DA34 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        const CHAR **a7,
        const CHAR **a8,
        __int64 a9)
{
  __int64 v10; // rcx
  const CHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  const CHAR *v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  const CHAR *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  const CHAR *v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]

  v29 = a9;
  v10 = -1LL;
  v30 = 4LL;
  v11 = *a8;
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = MultiByteStr;
    v13 = 1;
  }
  v27 = v13;
  v26 = v11;
  v28 = 0;
  v14 = *a7;
  if ( *a7 )
  {
    do
      ++v10;
    while ( v14[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v14 = MultiByteStr;
    v15 = 1;
  }
  v24 = v15;
  v23 = v14;
  v25 = 0;
  v16 = *a6;
  v19 = a5;
  v21 = v16;
  v22 = 16LL;
  v20 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801CD2B8, a2, 0LL, 0LL, 7u, &v18);
}
