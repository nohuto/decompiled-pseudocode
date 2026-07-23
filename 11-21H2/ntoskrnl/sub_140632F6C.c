/*
 * XREFs of sub_140632F6C @ 0x140632F6C
 * Callers:
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F1F80 @ 0x1406F1F80 (sub_1406F1F80.c)
 */

__int64 __fastcall sub_140632F6C(__int64 a1, __int64 a2, int a3)
{
  int v6; // esi
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // eax
  char v10; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1304) )
    return 3221225659LL;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v7 = sub_1402E1C80(a1);
  v8 = (unsigned int *)sub_1406F1F80(a2, 82LL, a2 + 88, *(_QWORD *)(a1 + 1304), 8 * v7 + 8, v6, &v10);
  if ( !v8 )
    return 3221225990LL;
  v9 = sub_1402E1C80(a1);
  *v8 = v9;
  memmove(v8 + 2, *(const void **)(a1 + 1304), 8LL * v9);
  return 0LL;
}
