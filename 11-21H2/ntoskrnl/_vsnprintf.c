/*
 * XREFs of _vsnprintf @ 0x1403E0560
 * Callers:
 *     sub_140368DAC @ 0x140368DAC (sub_140368DAC.c)
 *     sub_1403BF834 @ 0x1403BF834 (sub_1403BF834.c)
 *     sub_1403C5514 @ 0x1403C5514 (sub_1403C5514.c)
 * Callees:
 *     sub_1403E0580 @ 0x1403E0580 (sub_1403E0580.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return sub_1403E0580((_DWORD)Dest, Count, (_DWORD)Format, 0, (__int64)Args);
}
