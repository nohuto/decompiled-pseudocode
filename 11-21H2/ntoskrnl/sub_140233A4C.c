/*
 * XREFs of sub_140233A4C @ 0x140233A4C
 * Callers:
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_1403760B4 @ 0x1403760B4 (sub_1403760B4.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 * Callees:
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 */

__int64 __fastcall sub_140233A4C(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = a1[3];
    a1[4] = result;
  }
  if ( qword_140C52B40 || (result = _InterlockedCompareExchange64(&qword_140C52B40, (signed __int64)a1, 0LL)) != 0 )
  {
    if ( a1 )
    {
      if ( (_QWORD *)a1[4] == a1 + 9 )
        return sub_14035FA80(a1);
      else
        return sub_140233AA0(a1);
    }
  }
  return result;
}
