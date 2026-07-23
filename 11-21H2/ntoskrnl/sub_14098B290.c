/*
 * XREFs of sub_14098B290 @ 0x14098B290
 * Callers:
 *     sub_140829930 @ 0x140829930 (sub_140829930.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_14098B290(unsigned int a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(sub_140348800(a1) + 33600);
  result = 0LL;
  if ( !v3 )
    return 3221225659LL;
  if ( !*(_QWORD *)(v3 + 680) )
    return 3221225865LL;
  *(_DWORD *)(v3 + 36) = 4;
  *(_QWORD *)(v3 + 680) = *(_QWORD *)(a2 + 8);
  return result;
}
