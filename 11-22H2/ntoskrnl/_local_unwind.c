/*
 * XREFs of _local_unwind @ 0x1403D8EB0
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140351C80 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140357C50 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140369870 (ExpTimerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C63E0 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1403CC560 (PopThermalZoneDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CC640 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x140555D40 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x140605DE0 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406062A0 (ExpTimeZoneDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1409FA3D8 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140B5F4D0 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5F620 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt5 @ 0x140B5F6D0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5F720 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5F770 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5F7C0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt14 @ 0x140B5F860 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5F8C0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5F920 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5F980 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5F9E0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5FA40 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5FAD0 (KiVerifyXcpt10.c)
 *     KiVerifyXcptFinally @ 0x140B5FC14 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1403C4090 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
