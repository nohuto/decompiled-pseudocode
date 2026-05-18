/*
 * XREFs of sub_180031968 @ 0x180031968
 * Callers:
 *     sub_18003AC64 @ 0x18003AC64 (sub_18003AC64.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

__int64 *__fastcall sub_180031968(__int64 *a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax

  v6 = sub_18001D684();
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  *a1 = v6;
  return a1;
}
