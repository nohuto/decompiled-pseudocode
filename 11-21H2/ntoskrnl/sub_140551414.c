/*
 * XREFs of sub_140551414 @ 0x140551414
 * Callers:
 *     sub_140551360 @ 0x140551360 (sub_140551360.c)
 *     sub_1409F8B30 @ 0x1409F8B30 (sub_1409F8B30.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405515F8 @ 0x1405515F8 (sub_1405515F8.c)
 *     sub_140AAB76C @ 0x140AAB76C (sub_140AAB76C.c)
 */

char __fastcall sub_140551414(_WORD *a1)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)sub_1405515F8() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140C54905 || byte_140C54904 )
  {
    byte_140C54905 = 0;
    byte_140C54904 = 0;
    sub_140AAB76C();
  }
  v5 = (int)sub_14042A5E0(a1, v4) >= 0;
  sub_1402AD030(&RunRef);
  return v5;
}
