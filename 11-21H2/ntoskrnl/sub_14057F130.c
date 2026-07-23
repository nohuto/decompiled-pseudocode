/*
 * XREFs of sub_14057F130 @ 0x14057F130
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14057F130(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = __readcr3();
  if ( ((a1 ^ v2) & 0xFFFFFFFFFFFFF000uLL) == 0 && (a1 & 3) != 0 )
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  return sub_14042A5E0(a1, a2);
}
