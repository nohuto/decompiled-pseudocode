/*
 * XREFs of RtlpValidateContextFlags @ 0x140297F80
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140294DD8 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     RtlGetExtendedContextLength2 @ 0x1402956D0 (RtlGetExtendedContextLength2.c)
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140704980 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x140704E2C (RtlpWriteExtendedContext.c)
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
