/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800BB9EC
 * Callers:
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        wchar_t **a5,
        wchar_t **a6)
{
  __int64 v7; // rcx
  int v8; // r9d
  wchar_t *v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  wchar_t *v12; // rdx
  _BYTE v14[32]; // [rsp+30h] [rbp-58h] BYREF
  wchar_t *v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+5Ch] [rbp-2Ch]
  wchar_t *v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  v7 = -1LL;
  v8 = 2;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = word_180118A5C;
    v11 = 2;
  }
  v18 = v9;
  v19 = v11;
  v20 = 0;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v7;
    while ( v12[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v12 = word_180118A5C;
  }
  v15 = v12;
  v16 = v8;
  v17 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801418A0, a2, 0LL, 0LL, 4, (__int64)v14);
}
