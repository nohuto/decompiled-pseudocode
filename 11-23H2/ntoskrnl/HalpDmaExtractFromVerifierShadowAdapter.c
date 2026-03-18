/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1403AF000
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AEEB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14045B300 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x140501140 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x140501240 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x140933640 (HalpAllocateMapRegisters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaExtractFromVerifierShadowAdapter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == 1634550870 )
    return *(_QWORD *)(a1 + 24);
  else
    return a1;
}
