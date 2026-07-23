/*
 * XREFs of sub_14030EA00 @ 0x14030EA00
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     sub_1405C5930 @ 0x1405C5930 (sub_1405C5930.c)
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_140755920 @ 0x140755920 (sub_140755920.c)
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 *     sub_140977FF8 @ 0x140977FF8 (sub_140977FF8.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 *     sub_140983198 @ 0x140983198 (sub_140983198.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

char __fastcall sub_14030EA00(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  *(_BYTE *)(a1 + 1384) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 1224);
  result = sub_1402AFC00(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
