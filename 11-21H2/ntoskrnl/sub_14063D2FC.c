/*
 * XREFs of sub_14063D2FC @ 0x14063D2FC
 * Callers:
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14063D600 @ 0x14063D600 (sub_14063D600.c)
 */

__int64 sub_14063D2FC()
{
  if ( (*((_BYTE *)&stru_140D31980 + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&stru_140D31980, 0LL, 0LL);
  return sub_14063D600();
}
