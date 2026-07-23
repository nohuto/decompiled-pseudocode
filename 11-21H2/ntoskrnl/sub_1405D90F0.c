/*
 * XREFs of sub_1405D90F0 @ 0x1405D90F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

__int64 sub_1405D90F0()
{
  __int64 v0; // rcx

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  LOBYTE(v0) = 1;
  dword_140D06D18 = 0;
  return sub_140848BE8(v0);
}
