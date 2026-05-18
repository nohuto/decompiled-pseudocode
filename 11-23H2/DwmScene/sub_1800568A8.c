/*
 * XREFs of sub_1800568A8 @ 0x1800568A8
 * Callers:
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800568A8(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
