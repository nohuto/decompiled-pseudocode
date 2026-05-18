/*
 * XREFs of sub_1800568C0 @ 0x1800568C0
 * Callers:
 *     sub_18002C3C8 @ 0x18002C3C8 (sub_18002C3C8.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800568C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
