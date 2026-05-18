/*
 * XREFs of sub_180032EC0 @ 0x180032EC0
 * Callers:
 *     sub_180100B43 @ 0x180100B43 (sub_180100B43.c)
 *     sub_180100E5B @ 0x180100E5B (sub_180100E5B.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032EC0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 >= 8 )
    sub_180010884(*(char **)(a1 + 24), 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  return result;
}
