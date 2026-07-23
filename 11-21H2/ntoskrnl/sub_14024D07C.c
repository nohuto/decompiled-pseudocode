/*
 * XREFs of sub_14024D07C @ 0x14024D07C
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14024D07C(int *a1)
{
  if ( (a1[1] & 0x76) == 0 )
    KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
  return 1LL;
}
