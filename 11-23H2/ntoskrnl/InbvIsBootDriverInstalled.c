/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403AA140
 * Callers:
 *     DisplayBootBitmap @ 0x1403AA048 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403AA0D0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AB58 && (v0 = *(__int64 (**)(void))(qword_140C6AB58 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
