/*
 * XREFs of sub_140603294 @ 0x140603294
 * Callers:
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 *     sub_140602AEC @ 0x140602AEC (sub_140602AEC.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140603294(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        const wchar_t *a6,
        char a7)
{
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  int *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  const char *v17; // [rsp+50h] [rbp-1h]
  int v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+6Ch] [rbp+1Bh]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v7 = a5;
  v15 = &v25;
  v8 = -1LL;
  v16 = 4LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v18 = v10;
  v11 = a6;
  if ( !a5 )
    v7 = "NULL";
  v19 = 0;
  v17 = v7;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v12 = 2 * v8 + 2;
  }
  else
  {
    v12 = 10;
  }
  v21 = v12;
  v22 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v24 = 1LL;
  v20 = v11;
  v23 = &a7;
  return sub_1402D1760(
           qword_140C09100,
           (const EVENT_DESCRIPTOR *)qword_140041D08,
           (const GUID *)qword_140041D18,
           5u,
           &v14);
}
