/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x140217888
 * Callers:
 *     MiReferenceCloneProto @ 0x140217788 (MiReferenceCloneProto.c)
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x140665CA8 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockCloneBlockAtDpc(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 16);
    }
    while ( result < 0 );
  }
  return result;
}
