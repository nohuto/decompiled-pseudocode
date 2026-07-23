/*
 * XREFs of sub_1403B51A0 @ 0x1403B51A0
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_140A8F2A0 @ 0x140A8F2A0 (sub_140A8F2A0.c)
 * Callees:
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 */

__int64 __fastcall sub_1403B51A0(void *a1)
{
  if ( !dword_140D06B10 )
    return sub_1403B51C4();
  if ( dword_140D06B10 == 3 )
    return sub_14055969C(a1);
  return sub_140A802F0(a1);
}
