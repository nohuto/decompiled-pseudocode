/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14021F6A0
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     sub_140695E18 @ 0x140695E18 (sub_140695E18.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
