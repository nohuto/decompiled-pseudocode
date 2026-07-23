/*
 * XREFs of sub_14079CF18 @ 0x14079CF18
 * Callers:
 *     sub_14053F520 @ 0x14053F520 (sub_14053F520.c)
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068B0E0 @ 0x14068B0E0 (sub_14068B0E0.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     sub_14079CEF0 @ 0x14079CEF0 (sub_14079CEF0.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_140924648 @ 0x140924648 (sub_140924648.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14079CF18(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)qword_140D3CC78 )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&qword_140D3CC78, -a1);
  return result;
}
