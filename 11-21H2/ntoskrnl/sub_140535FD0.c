/*
 * XREFs of sub_140535FD0 @ 0x140535FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140535FD0(__int64 a1)
{
  int v1; // edx

  *(_DWORD *)(a1 + 120) = 0;
  v1 = *(unsigned __int8 *)(a1 + 16);
  *(_QWORD *)(a1 + 88) = a1 + 25;
  return sub_1403A2E60(a1, v1);
}
