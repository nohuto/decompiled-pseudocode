/*
 * XREFs of HalpDmaIsThinDmaCapable @ 0x1403CD468
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmaCapable(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 440);
  if ( v2 < 0x40 )
    v3 = (1LL << v2) - 1;
  else
    v3 = -1LL;
  return (*(_DWORD *)(a1 + 512) & 0xFFFFFFFD) == 0
      && *(_BYTE *)(a1 + 437)
      && *(_BYTE *)(a1 + 433)
      && *(_BYTE *)(a1 + 434)
      && v3 >= HalpMaximumPhysicalMemoryAddress;
}
