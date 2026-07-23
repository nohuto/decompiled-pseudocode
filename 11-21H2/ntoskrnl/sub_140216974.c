/*
 * XREFs of sub_140216974 @ 0x140216974
 * Callers:
 *     sub_1402166FC @ 0x1402166FC (sub_1402166FC.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 * Callees:
 *     sub_14056DBFC @ 0x14056DBFC (sub_14056DBFC.c)
 *     sub_14063D44C @ 0x14063D44C (sub_14063D44C.c)
 *     sub_14063E4D0 @ 0x14063E4D0 (sub_14063E4D0.c)
 *     sub_14063F394 @ 0x14063F394 (sub_14063F394.c)
 *     sub_140A9D69C @ 0x140A9D69C (sub_140A9D69C.c)
 */

__int64 __fastcall sub_140216974(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( (dword_140D069E8 & 0x207) != 0 )
  {
    if ( (dword_140D069E8 & 0x200) != 0 && !a4 )
      sub_14063E4D0(BugCheckParameter3, a3);
    if ( (dword_140D069E8 & 1) != 0 )
      sub_14056DBFC(BugCheckParameter3);
    if ( (dword_140D069E8 & 4) != 0 )
      sub_14063D44C(BugCheckParameter3, a3);
    if ( (dword_140D069E8 & 2) != 0 )
      sub_14063F394(BugCheckParameter3);
  }
  result = (unsigned int)dword_140D069E8;
  if ( (dword_140D069E8 & 0x10) != 0 )
    return sub_140A9D69C(BugCheckParameter3, a2, a3, a5);
  return result;
}
