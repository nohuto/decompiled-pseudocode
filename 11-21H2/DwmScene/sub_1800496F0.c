/*
 * XREFs of sub_1800496F0 @ 0x1800496F0
 * Callers:
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 * Callees:
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 */

__int64 __fastcall sub_1800496F0(__int64 a1, unsigned int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_180092790();
  return sub_18002B780(a1, a2);
}
