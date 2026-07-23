/*
 * XREFs of sub_140563B98 @ 0x140563B98
 * Callers:
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_140953B9C @ 0x140953B9C (sub_140953B9C.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140563B98(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  __int64 v6; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  const wchar_t *v11; // rcx
  __int64 v12; // rdx
  int v13; // r9d
  const wchar_t *v14; // rcx
  bool v15; // zf
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]
  const wchar_t *v24; // [rsp+60h] [rbp-28h]
  int v25; // [rsp+68h] [rbp-20h]
  int v26; // [rsp+6Ch] [rbp-1Ch]

  v6 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v11 = a5;
  v19 = v10;
  v20 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v18 = a4;
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a5 )
    v11 = L"NULL";
  v21 = v11;
  v14 = a6;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v8 = 2 * v6 + 2;
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v14 = L"NULL";
  v25 = v8;
  v24 = v14;
  v26 = 0;
  return sub_1402D1760(qword_140C03910, a2, 0LL, 4u, &v17);
}
