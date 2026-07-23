/*
 * XREFs of RtlpIsContinuationContextMachineFrameEntry @ 0x1800A0304
 * Callers:
 *     RtlpUnwindPrologue @ 0x1800214D0 (RtlpUnwindPrologue.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsContinuationContextMachineFrameEntry(__int64 a1)
{
  char result; // al
  ULONG64 *v2; // rdx
  int v3; // r8d

  result = 0;
  v2 = &RtlpContinuationContextMachineFrameEntries;
  v3 = 0;
  while ( a1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 )
      return result;
  }
  return 1;
}
