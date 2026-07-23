/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14054A274
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1403CC178 (HvlFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403CC230 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpPrepareFlushHeader @ 0x1403CC428 (HvlpPrepareFlushHeader.c)
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  PHYSICAL_ADDRESS *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)&v11, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallInitiateHypercall(2);
  return HvlpReleaseHypercallPage((__int64)&v8);
}
