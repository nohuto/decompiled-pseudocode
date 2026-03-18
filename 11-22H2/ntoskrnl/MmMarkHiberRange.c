/*
 * XREFs of MmMarkHiberRange @ 0x140A30AE0
 * Callers:
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x1409888D4 (PopHiberInitializeResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     PoSetHiberRange @ 0x14058E930 (PoSetHiberRange.c)
 */

void __fastcall MmMarkHiberRange(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 PteAddress; // rax
  PVOID v5; // r10
  PVOID v6; // r11

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v2 + v3);
  PoSetHiberRange(v6, 2u, v5, PteAddress - (_QWORD)v5, 0x20657450u);
}
