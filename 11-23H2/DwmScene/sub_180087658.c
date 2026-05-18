/*
 * XREFs of sub_180087658 @ 0x180087658
 * Callers:
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_180087658(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = sub_1800124F8((__int64 *)(a1 + 48), a2);
  *(_BYTE *)(a1 + 124) = 0;
  v5 = a2[1];
  if ( v5 )
    return (__int64 *)sub_180010530(v5);
  return result;
}
