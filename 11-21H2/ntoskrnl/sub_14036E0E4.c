/*
 * XREFs of sub_14036E0E4 @ 0x14036E0E4
 * Callers:
 *     sub_14036DC90 @ 0x14036DC90 (sub_14036DC90.c)
 * Callees:
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 */

char __fastcall sub_14036E0E4(__int64 a1, int a2, _QWORD *a3)
{
  char result; // al
  int v7; // esi
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = 0;
  v9 = 0LL;
  v10 = 0LL;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
    result = sub_14036E550(a1, *(unsigned int *)(a1 + 8), &v9);
  while ( a3 )
  {
    v8 = (_DWORD)a3 - 16;
    a3 = (_QWORD *)*a3;
    result = sub_14036E174(a1, a2, v8, a2, (__int64)&v9);
  }
  if ( !v7 )
    return sub_14034F7F0(*(_DWORD *)(a1 + 8), (__int64)&v9);
  return result;
}
