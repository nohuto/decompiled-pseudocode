/*
 * XREFs of sub_1402F3424 @ 0x1402F3424
 * Callers:
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_14070F2D8 @ 0x14070F2D8 (sub_14070F2D8.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402F3424(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
