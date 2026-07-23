/*
 * XREFs of RtlpAllocateEnvBlock @ 0x1800142D4
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180014C10 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x180058420 (RtlCreateEnvironmentEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18005860C (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentStrings @ 0x1800D8D40 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
