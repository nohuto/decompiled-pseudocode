/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403AA320
 * Callers:
 *     DisplayBootBitmap @ 0x1403AA228 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403AA2B0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AB58 && (v0 = *(__int64 (**)(void))(qword_140C6AB58 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
