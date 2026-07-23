/*
 * XREFs of WdHwDestroyHardwareRegister @ 0x14052A8D4
 * Callers:
 *     HalpWdatProcessWdrtInternalData @ 0x14051F6D4 (HalpWdatProcessWdrtInternalData.c)
 *     WdInstrDestroyInstruction @ 0x14052A9FC (WdInstrDestroyInstruction.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x14037E320 (HalpUnmapVirtualAddress.c)
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
