/*
 * XREFs of RtlULongLongMult @ 0x1C000E7DC
 * Callers:
 *     PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6 (PmIoctlPassThroughQuerySectorWriteAta.c)
 *     PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976 (PmIoctlPassThroughQuerySectorWriteScsi.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return v3;
}
