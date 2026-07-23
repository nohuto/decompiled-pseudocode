/*
 * XREFs of sub_140B1A250 @ 0x140B1A250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 */

__int64 __fastcall sub_140B1A250(__int64 a1, _BYTE *a2, int a3)
{
  if ( a3 < 1 && (*a2 & 1) != 0 )
    sub_14026ED30(a1, (__int64)((_QWORD)a2 << 25) >> 16);
  return 0LL;
}
