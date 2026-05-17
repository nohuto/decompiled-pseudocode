/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18000DA4C
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18000CCDC (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18000CED0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18000D0F0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x18008A170 (RtlSetEnvironmentStrings.c)
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
