/*
 * XREFs of sub_1403B91D4 @ 0x1403B91D4
 * Callers:
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1409098C0 @ 0x1409098C0 (sub_1409098C0.c)
 *     sub_140AF8610 @ 0x140AF8610 (sub_140AF8610.c)
 */

__int64 sub_1403B91D4()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 && (int)sub_1409098C0() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  sub_140AF8610();
  result = (unsigned int)sub_14036FA84() - 1;
  if ( (unsigned int)result <= 2 )
    return sub_1403B9214();
  return result;
}
