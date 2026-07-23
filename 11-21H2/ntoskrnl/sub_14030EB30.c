/*
 * XREFs of sub_14030EB30 @ 0x14030EB30
 * Callers:
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
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
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_14030EB30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1384) |= 2u;
  return result;
}
