/*
 * XREFs of ExtEnvClearBits @ 0x14051F4C0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A990C8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA00 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
