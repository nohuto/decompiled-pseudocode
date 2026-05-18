/*
 * XREFs of sub_180017058 @ 0x180017058
 * Callers:
 *     sub_180016DFC @ 0x180016DFC (sub_180016DFC.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_18006E3F4 @ 0x18006E3F4 (sub_18006E3F4.c)
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 *     sub_1800744CC @ 0x1800744CC (sub_1800744CC.c)
 *     sub_18007E55C @ 0x18007E55C (sub_18007E55C.c)
 *     sub_1800818E4 @ 0x1800818E4 (sub_1800818E4.c)
 *     sub_18008C958 @ 0x18008C958 (sub_18008C958.c)
 *     sub_18008CC54 @ 0x18008CC54 (sub_18008CC54.c)
 *     sub_1800A1940 @ 0x1800A1940 (sub_1800A1940.c)
 *     sub_1800A55F0 @ 0x1800A55F0 (sub_1800A55F0.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_180017058(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return 8 * a1;
}
