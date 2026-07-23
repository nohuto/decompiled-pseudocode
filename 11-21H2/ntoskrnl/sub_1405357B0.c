/*
 * XREFs of sub_1405357B0 @ 0x1405357B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2AC0 @ 0x1403A2AC0 (sub_1403A2AC0.c)
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_1405357B0(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 104);
  sub_1403A2AC0(a1, 0);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 96);
  return sub_1403A2E60(a1, v1);
}
