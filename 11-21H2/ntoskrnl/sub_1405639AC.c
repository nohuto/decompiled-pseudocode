/*
 * XREFs of sub_1405639AC @ 0x1405639AC
 * Callers:
 *     sub_140762F18 @ 0x140762F18 (sub_140762F18.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405639AC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+58h] [rbp+7h]
  int v20; // [rsp+5Ch] [rbp+Bh]
  char *v21; // [rsp+60h] [rbp+Fh]
  __int64 v22; // [rsp+68h] [rbp+17h]
  char *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
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
  v16 = v10;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v19 = v8;
  v18 = v11;
  v21 = &a6;
  v20 = 0;
  v23 = &a7;
  v22 = 4LL;
  v24 = 4LL;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B6A0, 0LL, 5u, &v14);
}
