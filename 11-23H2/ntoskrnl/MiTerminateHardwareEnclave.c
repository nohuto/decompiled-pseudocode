/*
 * XREFs of MiTerminateHardwareEnclave @ 0x140AAD578
 * Callers:
 *     MiTerminateEnclave @ 0x140A3EBA0 (MiTerminateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140AAD2D8 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 */

char __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR PteAddress; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // r9
  __int64 v7; // r10
  char result; // al

  MiGetPteAddress(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  PteAddress = MiGetPteAddress((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12);
  result = MiDecommitHardwareEnclavePages(v7, v5, PteAddress, v6, 1);
  *(_DWORD *)(a2 + 64) |= 8u;
  return result;
}
