/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14038C840
 * Callers:
 *     MiFlushTbList @ 0x140279880 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1403343B0 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x140AAC06C (MiConvertHiberPhasePages.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140B57D74 (MiZeroBootMappings.c)
 * Callees:
 *     KiFlushCurrentTbOnly @ 0x1403BE320 (KiFlushCurrentTbOnly.c)
 *     HvlFlushAddressSpaceTb @ 0x1403CBF98 (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1403CEA4C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KiIsFlushEntire @ 0x14046059C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140572114 (KiPrepareFlushCurrentAffinity.c)
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
