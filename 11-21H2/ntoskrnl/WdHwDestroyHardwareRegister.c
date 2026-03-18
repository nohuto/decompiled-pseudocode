/*
 * XREFs of WdHwDestroyHardwareRegister @ 0x14052CB50
 * Callers:
 *     HalpWdatProcessWdrtInternalData @ 0x140522324 (HalpWdatProcessWdrtInternalData.c)
 *     WdInstrDestroyInstruction @ 0x14052CC78 (WdInstrDestroyInstruction.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 */

__int64 __fastcall WdHwDestroyHardwareRegister(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 8) )
    HalpUnmapVirtualAddress(*(_QWORD *)(a1 + 16), ((unsigned int)*(unsigned __int8 *)(a1 + 9) + 4095) >> 12, 0LL);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
