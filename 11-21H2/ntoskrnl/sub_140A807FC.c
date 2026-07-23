/*
 * XREFs of sub_140A807FC @ 0x140A807FC
 * Callers:
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 * Callees:
 *     sub_140A919A8 @ 0x140A919A8 (sub_140A919A8.c)
 */

__int64 sub_140A807FC()
{
  __int64 result; // rax

  result = (unsigned int)dword_140D4E000;
  if ( !dword_140D4E000 )
    return sub_140A919A8();
  return result;
}
