/*
 * XREFs of sub_1402033F0 @ 0x1402033F0
 * Callers:
 *     sub_14066CC94 @ 0x14066CC94 (sub_14066CC94.c)
 *     sub_14066CE40 @ 0x14066CE40 (sub_14066CE40.c)
 *     sub_14066CF00 @ 0x14066CF00 (sub_14066CF00.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402033F0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 1344) == *(_QWORD *)(a1 + 1088) )
    return *(_QWORD *)(a2 + 2296) > *(_QWORD *)(a1 + 2296);
  return result;
}
