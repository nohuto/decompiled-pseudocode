/*
 * XREFs of sub_140563CAC @ 0x140563CAC
 * Callers:
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_140953B9C @ 0x140953B9C (sub_140953B9C.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140563CAC(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7)
{
  __int64 v7; // rax
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // edx
  const wchar_t *v12; // rcx
  __int64 v13; // rdx
  int v14; // r9d
  const wchar_t *v15; // rcx
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v19; // [rsp+40h] [rbp-11h]
  int v20; // [rsp+48h] [rbp-9h]
  int v21; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v22; // [rsp+50h] [rbp-1h]
  int v23; // [rsp+58h] [rbp+7h]
  int v24; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v25; // [rsp+60h] [rbp+Fh]
  int v26; // [rsp+68h] [rbp+17h]
  int v27; // [rsp+6Ch] [rbp+1Bh]
  char *v28; // [rsp+70h] [rbp+1Fh]
  __int64 v29; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v12 = a5;
  v20 = v11;
  v21 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v19 = a4;
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a5[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v23 = v14;
  v24 = 0;
  if ( !a5 )
    v12 = L"NULL";
  v22 = v12;
  v15 = a6;
  v16 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v16 = a6 == 0LL;
  }
  if ( v16 )
    v15 = L"NULL";
  v26 = v9;
  v25 = v15;
  v28 = &a7;
  v27 = 0;
  v29 = 4LL;
  return sub_1402D1760(qword_140C03910, a2, 0LL, 5u, &v18);
}
