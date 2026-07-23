/*
 * XREFs of sub_140761128 @ 0x140761128
 * Callers:
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     sub_140B085F8 @ 0x140B085F8 (sub_140B085F8.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 */

_QWORD *__fastcall sub_140761128(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140D051B4 & 1) != 0 || (unsigned int)sub_1402FDD20(a2) )
    return 0LL;
  if ( !a1 )
    a1 = sub_1402FDA80(a2, 1);
  if ( (unsigned int)sub_14027B080(a2) == 1 )
    return 0LL;
  else
    return a1;
}
