/*
 * XREFs of sub_14096EBDC @ 0x14096EBDC
 * Callers:
 *     sub_14059A6AC @ 0x14059A6AC (sub_14059A6AC.c)
 *     sub_1405A36D0 @ 0x1405A36D0 (sub_1405A36D0.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_14096EC0C @ 0x14096EC0C (sub_14096EC0C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14096EBDC(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) && (*(_DWORD *)(a1 + 2516) & 0x2000000) != 0;
}
