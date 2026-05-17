/*
 * XREFs of _ultow_s @ 0x1800992F0
 * Callers:
 *     <none>
 * Callees:
 *     xtow_s @ 0x18009945C (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
