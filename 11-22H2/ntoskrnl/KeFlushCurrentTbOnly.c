/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14038A330
 * Callers:
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x140334210 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x140AAC12C (MiConvertHiberPhasePages.c)
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140B5AD24 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x1403BDCC0 (KiFlushCurrentTbOnly.c)
 *     HvlFlushAddressSpaceTb @ 0x1403CB938 (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1403CE3EC (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiIsFlushEntire @ 0x14045FF3C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1405721B4 (KiPrepareFlushCurrentAffinity.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v3; // r8
  _BYTE v4[8]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v5; // [rsp+28h] [rbp-130h] BYREF
  _BYTE v6[272]; // [rsp+30h] [rbp-128h] BYREF

  v5 = 0LL;
  memset(v6, 0, 0x108uLL);
  v4[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  KiPrepareFlushParameters(a1, &v5, v4);
  KiPrepareFlushCurrentAffinity(v6);
  LOBYTE(v3) = v4[0];
  return HvlFlushAddressSpaceTb(v5, v6, v3);
}
