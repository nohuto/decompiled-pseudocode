/*
 * XREFs of BgkGetConsoleState @ 0x140AB0740
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405515F8 @ 0x1405515F8 (sub_1405515F8.c)
 *     sub_140551644 @ 0x140551644 (sub_140551644.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v4; // ebx

  if ( !sub_1405515F8() )
    return 3221225473LL;
  v4 = sub_14042A5E0(a1, v2);
  sub_140551644();
  return v4;
}
