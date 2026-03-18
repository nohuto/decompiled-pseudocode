/*
 * XREFs of _local_unwind @ 0x1403D9510
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140352280 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140358250 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140369EC0 (ExpTimerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C6A40 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1403CCBC0 (PopThermalZoneDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403CCCA0 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x140555CA0 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x140605D70 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140606230 (ExpTimeZoneDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1409FA328 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140B5C490 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5C5E0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt5 @ 0x140B5C690 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5C6E0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5C730 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5C780 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt14 @ 0x140B5C820 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5C880 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5C8E0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5C940 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5C9A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5CA00 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5CA90 (KiVerifyXcpt10.c)
 *     KiVerifyXcptFinally @ 0x140B5CBD4 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1403C46F0 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(ULONG_PTR a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
