/*
 * XREFs of sub_18005C750 @ 0x18005C750
 * Callers:
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     sub_1800E3250 @ 0x1800E3250 (sub_1800E3250.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

__int64 *__fastcall sub_18005C750(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}
