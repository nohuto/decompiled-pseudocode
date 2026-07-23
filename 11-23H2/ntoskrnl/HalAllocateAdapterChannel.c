/*
 * XREFs of HalAllocateAdapterChannel @ 0x14045B700
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1403AF1E0 (HalpDmaExtractFromVerifierShadowAdapter.c)
 *     HalpDmaGetAdapterVersion @ 0x1403B9A14 (HalpDmaGetAdapterVersion.c)
 *     HalAllocateAdapterChannelV2 @ 0x14045D4E8 (HalAllocateAdapterChannelV2.c)
 *     HalpAllocateAdapterChannel @ 0x140515210 (HalpAllocateAdapterChannel.c)
 */

__int64 __fastcall HalAllocateAdapterChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11

  v5 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  if ( (unsigned int)HalpDmaGetAdapterVersion(v5) == 2 )
    return HalAllocateAdapterChannelV2(v9, v8, v6, v7);
  *(_DWORD *)(v8 + 20) &= ~2u;
  return HalpAllocateAdapterChannel(v9, v8, v6, *(_DWORD *)(v9 + 252) >> 12, 0, a4);
}
