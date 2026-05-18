/*
 * XREFs of sub_180050C40 @ 0x180050C40
 * Callers:
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180050C40(__int64 a1)
{
  return *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 24);
}
