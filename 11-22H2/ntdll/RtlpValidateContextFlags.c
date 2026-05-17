/*
 * XREFs of RtlpValidateContextFlags @ 0x180054F94
 * Callers:
 *     RtlCopyContext @ 0x180054670 (RtlCopyContext.c)
 *     RtlInitializeExtendedContext @ 0x1800548E0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x180054950 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x180054CB0 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyExtendedContext @ 0x180101814 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
