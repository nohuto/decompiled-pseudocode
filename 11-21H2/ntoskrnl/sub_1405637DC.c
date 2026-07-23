/*
 * XREFs of sub_1405637DC @ 0x1405637DC
 * Callers:
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_140762F18 @ 0x140762F18 (sub_140762F18.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405637DC(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  __int64 v6; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  char *v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]

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
  v16 = v10;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v8 = 2 * v6 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v19 = v8;
  v18 = v11;
  v21 = &a6;
  v20 = 0;
  v22 = 4LL;
  return sub_1402D1760(qword_140C03910, a2, 0LL, 4u, &v14);
}
