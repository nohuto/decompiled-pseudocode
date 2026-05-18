/*
 * XREFs of sub_1800B4C74 @ 0x1800B4C74
 * Callers:
 *     sub_180107983 @ 0x180107983 (sub_180107983.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800B4C74(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 32), v3 + 1);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 15LL;
    *(_BYTE *)(v1 + 32) = 0;
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x58uLL);
  return result;
}
