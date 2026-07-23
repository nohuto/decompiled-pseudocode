/*
 * XREFs of sub_1405F67D0 @ 0x1405F67D0
 * Callers:
 *     sub_14037F958 @ 0x14037F958 (sub_14037F958.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_1403819D4 @ 0x1403819D4 (sub_1403819D4.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_14038262C @ 0x14038262C (sub_14038262C.c)
 *     sub_140382944 @ 0x140382944 (sub_140382944.c)
 *     sub_140382BC0 @ 0x140382BC0 (sub_140382BC0.c)
 *     sub_1403836FC @ 0x1403836FC (sub_1403836FC.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 *     sub_14039042C @ 0x14039042C (sub_14039042C.c)
 *     sub_1403925F8 @ 0x1403925F8 (sub_1403925F8.c)
 *     sub_1405F627C @ 0x1405F627C (sub_1405F627C.c)
 *     sub_1405F6380 @ 0x1405F6380 (sub_1405F6380.c)
 * Callees:
 *     sub_1405F66DC @ 0x1405F66DC (sub_1405F66DC.c)
 *     sub_1405F6854 @ 0x1405F6854 (sub_1405F6854.c)
 *     sub_1405F6968 @ 0x1405F6968 (sub_1405F6968.c)
 */

unsigned __int64 __fastcall sub_1405F67D0(_QWORD *a1, unsigned int *a2, char a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx

  if ( (*a2 & 1) == 0 )
  {
    if ( (a3 & 1) != 0 )
      return 0LL;
    sub_1405F6968(*a1, a1, a2);
    if ( (*a2 & 1) == 0 )
      return 0LL;
  }
  v6 = sub_1405F66DC((__int64)a1, a2);
  if ( (a3 & 2) == 0 && *(_DWORD *)*a1 != -1 )
    sub_1405F6854(a1, v7);
  return v6;
}
