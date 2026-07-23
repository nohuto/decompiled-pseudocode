/*
 * XREFs of sub_14030EBA0 @ 0x14030EBA0
 * Callers:
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 *     sub_14097EF10 @ 0x14097EF10 (sub_14097EF10.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_14030EBA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1385) |= 0x40u;
  return result;
}
