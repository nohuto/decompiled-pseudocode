/*
 * XREFs of sub_14052A52C @ 0x14052A52C
 * Callers:
 *     sub_1403CE2B4 @ 0x1403CE2B4 (sub_1403CE2B4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 */

int __fastcall sub_14052A52C(unsigned __int64 a1, __int128 *a2)
{
  int result; // eax
  PKINTERRUPT v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  result = sub_140507ED8(
             a2,
             *(_DWORD *)(a1 + 180),
             0xCFu,
             0xCu,
             *(_DWORD *)(a1 + 184),
             *(KINTERRUPT_MODE *)(a1 + 188),
             (unsigned __int64)sub_14052A640,
             a1,
             (KSPIN_LOCK *)(a1 + 168),
             0xCu,
             3,
             &v3);
  if ( result < 0 )
    KeBugCheckEx(0x5Cu, 0x400uLL, result, 0LL, 0LL);
  return result;
}
