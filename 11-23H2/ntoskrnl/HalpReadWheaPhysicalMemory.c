/*
 * XREFs of HalpReadWheaPhysicalMemory @ 0x140521D70
 * Callers:
 *     <none>
 * Callees:
 *     HalpReadWriteWheaPhysicalMemory @ 0x140521D90 (HalpReadWriteWheaPhysicalMemory.c)
 */

__int64 __fastcall HalpReadWheaPhysicalMemory(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx

  v4 = a2;
  v5 = a1;
  LOBYTE(a1) = 1;
  return HalpReadWriteWheaPhysicalMemory(a1, v5, v4, a3);
}
