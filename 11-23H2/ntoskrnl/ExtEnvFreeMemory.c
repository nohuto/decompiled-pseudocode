/*
 * XREFs of ExtEnvFreeMemory @ 0x14051FAFC
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037EA54 (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x14037FAA0 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x14037FCA0 (HalpIvtCreateReservedDevice.c)
 *     IvtFreeScalableModePasidTables @ 0x14052CD28 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052F200 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052F9E0 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x14052FB00 (HsaDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x140530360 (HsaFreeRemappingTableEntry.c)
 *     IvtDeleteDevice @ 0x140535080 (IvtDeleteDevice.c)
 *     DmrFreeRmrrTree @ 0x1405355CC (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140505BD4 (HalpMmIsInsideHalVa.c)
 */

__int64 __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  LOBYTE(v5) = 0;
  result = HalpMmIsInsideHalVa(a2, (bool *)&v5);
  if ( (int)result >= 0 && !(_BYTE)v5 )
    return HalpMmAllocCtxFree(v3, v4);
  return result;
}
