/*
 * XREFs of sub_1800713F0 @ 0x1800713F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800713F0(__int64 a1, __int64 a2)
{
  int v4; // eax

  sub_180074808();
  if ( *(_BYTE *)sub_1800441D8(a1 + 1464) )
  {
    sub_180075490(a1, a2);
    sub_180078514(a1, a2);
  }
  v4 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v4 )
    std::_Throw_C_error(v4);
  sub_1800729F8(a1, a2, a1 + 1488);
  Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( *(_BYTE *)sub_1800441D8(a1 + 1465) )
    sub_180075D60(a1, a2, 0LL);
  return sub_1800751B0(a1, a2, a1 + 200);
}
