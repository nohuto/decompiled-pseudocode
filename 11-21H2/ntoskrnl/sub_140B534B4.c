/*
 * XREFs of sub_140B534B4 @ 0x140B534B4
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_140B534B4()
{
  return (dword_140C5AFD0 & 4) != 0 || !byte_140C097FC && (dword_140C5AFD0 & 2) != 0;
}
