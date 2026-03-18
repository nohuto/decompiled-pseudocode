/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140A8B33C
 * Callers:
 *     HalpMceInitProcessor @ 0x140A8B2A8 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x140380984 (HalpGetMcaPcrContext.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140A8B3A8 (HalpMceInitializeErrorPacketContents.c)
 */

volatile __int64 *__fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  volatile __int64 *result; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // rbx
  __int64 v9; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 372LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x6CFuLL);
  HalpMceInitializeErrorPacketContents(v4);
  result = (volatile __int64 *)HalpGetMcaPcrContext(a2);
  v8 = result;
  v9 = _InterlockedExchange64(result, v5);
  if ( v9 )
    result = (volatile __int64 *)HalpMmAllocCtxFree(v7, v9);
  _InterlockedExchange64(v8 + 1, a1);
  return result;
}
