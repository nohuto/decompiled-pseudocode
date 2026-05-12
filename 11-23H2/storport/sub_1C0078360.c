/*
 * XREFs of sub_1C0078360 @ 0x1C0078360
 * Callers:
 *     StorPortAllocateRegistryBuffer @ 0x1C0045D90 (StorPortAllocateRegistryBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0078360(__int64 a1)
{
  unsigned int v2; // edi
  void *Pool2; // rax

  if ( *(_DWORD *)a1 == 64 && (*(_DWORD *)(a1 + 56) & 1) != 0 && !*(_QWORD *)(a1 + 32) )
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( v2 > 0x10000 )
      v2 = 0x10000;
    Pool2 = (void *)ExAllocatePool2(64LL, v2, 1112697936LL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), (signed __int64)Pool2, 0LL) )
    {
      *(_DWORD *)(a1 + 40) = v2;
      return 0LL;
    }
    ExFreePoolWithTag(Pool2, 0x42526C50u);
  }
  return 3221225485LL;
}
