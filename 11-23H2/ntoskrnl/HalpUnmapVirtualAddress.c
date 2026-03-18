/*
 * XREFs of HalpUnmapVirtualAddress @ 0x14037E180
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x1403357EC (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140336DC8 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140337070 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337218 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpHpetDiscover @ 0x1403777E0 (HalpHpetDiscover.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037E8B4 (HalpIvtProcessDrhdEntry.c)
 *     HalUnmapIoSpace @ 0x14051F900 (HalUnmapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140521070 (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x14052A384 (WdHwDestroyHardwareRegister.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140A96C0C (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96D48 (HalpCheckLowMemoryPreSleep.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x14037E49C (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( (_BYTE)a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !(_BYTE)a3 )
      result = (char *)HalpFlushTLB(v8, a2, a3, v6);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
