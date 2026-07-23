/*
 * XREFs of sub_1405905CC @ 0x1405905CC
 * Callers:
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405905CC(__int64 a1)
{
  __int64 result; // rax

  result = qword_140C4F4D8;
  if ( *(__int64 *)(a1 + 40) < 0 )
    --*(_QWORD *)(qword_140C4F4D8 + 200);
  --*(_QWORD *)(result + 208);
  return result;
}
