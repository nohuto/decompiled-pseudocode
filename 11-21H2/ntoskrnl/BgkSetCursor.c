/*
 * XREFs of BgkSetCursor @ 0x140AB0820
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405515F8 @ 0x1405515F8 (sub_1405515F8.c)
 *     sub_140551644 @ 0x140551644 (sub_140551644.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2)
{
  unsigned int v5; // ebx

  if ( !sub_1405515F8() )
    return 3221225473LL;
  v5 = sub_14042A5E0(a1, a2);
  sub_140551644();
  return v5;
}
