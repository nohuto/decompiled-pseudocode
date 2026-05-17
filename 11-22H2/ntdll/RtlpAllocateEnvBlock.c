/*
 * XREFs of RtlpAllocateEnvBlock @ 0x1800144E4
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlCreateEnvironmentEx @ 0x180058580 (RtlCreateEnvironmentEx.c)
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentStrings @ 0x1800D9390 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
