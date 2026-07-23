/*
 * XREFs of SeTokenIsRestricted @ 0x14021F680
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     sub_140695E18 @ 0x140695E18 (sub_140695E18.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 *     sub_1407F4B20 @ 0x1407F4B20 (sub_1407F4B20.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
