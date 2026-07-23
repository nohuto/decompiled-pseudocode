/*
 * XREFs of sub_140B092F0 @ 0x140B092F0
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140B09340 @ 0x140B09340 (sub_140B09340.c)
 *     sub_140B09610 @ 0x140B09610 (sub_140B09610.c)
 */

__int64 sub_140B092F0()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = sub_140B09610();
  if ( !v0 )
    v0 = 2048LL;
  qword_140C507D0 = -1LL;
  result = sub_140B09340(v0);
  if ( qword_140C507D0 == v0 && v0 != 2048 )
  {
    qword_140C507D0 = -1LL;
    return sub_140B09340(2048LL);
  }
  return result;
}
