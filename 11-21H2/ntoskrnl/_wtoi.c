/*
 * XREFs of _wtoi @ 0x1403E17F0
 * Callers:
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 * Callees:
 *     _wtol @ 0x1403E1810 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
