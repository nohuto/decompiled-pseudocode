/*
 * XREFs of ExtEnvClearBits @ 0x14051F580
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA20 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
