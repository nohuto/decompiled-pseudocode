/*
 * XREFs of sub_18002E2EC @ 0x18002E2EC
 * Callers:
 *     sub_180030038 @ 0x180030038 (sub_180030038.c)
 *     sub_180037F9C @ 0x180037F9C (sub_180037F9C.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 *     sub_1800570D8 @ 0x1800570D8 (sub_1800570D8.c)
 *     sub_1800616CC @ 0x1800616CC (sub_1800616CC.c)
 * Callees:
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 */

__int64 __fastcall sub_18002E2EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180032650(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
