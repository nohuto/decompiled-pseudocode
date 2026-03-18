/*
 * XREFs of RtlpValidateContextFlags @ 0x14030DA40
 * Callers:
 *     RtlInitializeExtendedContext @ 0x14030D3B0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D430 (RtlGetExtendedContextLength.c)
 *     RtlpCopyExtendedContext @ 0x14030D4A0 (RtlpCopyExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14030D73C (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D790 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D880 (RtlInitializeExtendedContext2.c)
 *     RtlpReadExtendedContext @ 0x14076FEE0 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1407704D0 (RtlCopyContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1407A07E8 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x1407A0C94 (RtlpWriteExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r8d

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
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v2 |= 4u;
      goto LABEL_6;
    }
    return 3221225659LL;
  }
LABEL_6:
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
