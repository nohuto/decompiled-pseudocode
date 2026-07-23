/*
 * XREFs of sub_140826E04 @ 0x140826E04
 * Callers:
 *     sub_1403C09F8 @ 0x1403C09F8 (sub_1403C09F8.c)
 * Callees:
 *     sub_140826E28 @ 0x140826E28 (sub_140826E28.c)
 *     sub_140949330 @ 0x140949330 (sub_140949330.c)
 *     sub_140956BBC @ 0x140956BBC (sub_140956BBC.c)
 */

__int64 sub_140826E04()
{
  int v1; // eax

  if ( dword_140C44634 )
  {
    v1 = sub_140949330();
    if ( !v1 )
      v1 = 2;
    dword_140C44634 = v1;
    sub_140956BBC();
  }
  sub_140826E28();
  return 0LL;
}
