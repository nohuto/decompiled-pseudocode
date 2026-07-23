/*
 * XREFs of sub_140659D50 @ 0x140659D50
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_1406623D0 @ 0x1406623D0 (sub_1406623D0.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 * Callees:
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 */

__int64 __fastcall sub_140659D50(_QWORD *a1)
{
  __int64 result; // rax

  result = sub_140724550(a1, 8LL, SidToCheck);
  if ( (int)result >= 0 )
    return sub_14041A13C(a1);
  return result;
}
