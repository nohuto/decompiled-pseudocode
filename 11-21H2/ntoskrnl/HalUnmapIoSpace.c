/*
 * XREFs of HalUnmapIoSpace @ 0x140522980
 * Callers:
 *     <none>
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 */

void __stdcall HalUnmapIoSpace(PVOID VirtualAddress, SIZE_T NumberOfBytes)
{
  HalpUnmapVirtualAddress((unsigned __int64)VirtualAddress, (NumberOfBytes + 4095) >> 12, 0LL);
}
