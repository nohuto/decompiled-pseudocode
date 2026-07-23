/*
 * XREFs of sub_14059A410 @ 0x14059A410
 * Callers:
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1406F4E78 @ 0x1406F4E78 (sub_1406F4E78.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 */

LONG __fastcall sub_14059A410(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_14059A568(a1, a2 + 272, *(_QWORD *)(a2 + 96) >> 12, 1LL);
  v3 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 88) = v3;
  return KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
}
