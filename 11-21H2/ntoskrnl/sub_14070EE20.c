/*
 * XREFs of sub_14070EE20 @ 0x14070EE20
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1406ED260 @ 0x1406ED260 (sub_1406ED260.c)
 */

__int64 __fastcall sub_14070EE20(LUID a1, char a2)
{
  if ( (dword_140D321C0 & 0xC) == 0 || *(_WORD *)(*(_QWORD *)&a1 + 1838LL) )
    return 3221225659LL;
  if ( (a2 & 3) != 0 )
    return sub_1406ED260((ULONG_PTR)&qword_140D321C8, (__int64)&unk_140D31A00, a1);
  return 3221266944LL;
}
