/*
 * XREFs of sub_14030F6D0 @ 0x14030F6D0
 * Callers:
 *     sub_1402F8AE0 @ 0x1402F8AE0 (sub_1402F8AE0.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 *     sub_1406A6A34 @ 0x1406A6A34 (sub_1406A6A34.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall sub_14030F6D0(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
