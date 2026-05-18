/*
 * XREFs of sub_1800F860C @ 0x1800F860C
 * Callers:
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

__int64 __fastcall sub_1800F860C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = sub_1800FA818(v1 + 64);
    v4 = *(_QWORD *)(v1 + 56);
    if ( v4 >= 8 )
      result = sub_180010884(*(char **)(v1 + 32), 2 * v4 + 2);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 7LL;
    *(_WORD *)(v1 + 32) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      return sub_180010884(*(char **)(a1 + 8), 0xC0uLL);
  }
  return result;
}
