/*
 * XREFs of sub_1404595D0 @ 0x1404595D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14045945E @ 0x14045945E (sub_14045945E.c)
 */

__int64 __fastcall sub_1404595D0(char a1, void *a2, void *a3, unsigned int a4, unsigned int *a5)
{
  __int16 v8; // bp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v8 = (__int16)a2;
  *a5 = 0;
  PhysicalAddress = MmGetPhysicalAddress(a2);
  return sub_14045945E(a1, v8, PhysicalAddress.QuadPart, a3, a4, a5) == 0 ? 0xC0000141 : 0;
}
