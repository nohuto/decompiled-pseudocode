/*
 * XREFs of HvlGetSharedPageVa @ 0x140364DF4
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140364C20 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140B6BC64 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140C01E10();
  return result;
}
