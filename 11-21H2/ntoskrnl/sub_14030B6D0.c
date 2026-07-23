/*
 * XREFs of sub_14030B6D0 @ 0x14030B6D0
 * Callers:
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_14079EF3C @ 0x14079EF3C (sub_14079EF3C.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14030B6D0(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1232, 0LL);
}
