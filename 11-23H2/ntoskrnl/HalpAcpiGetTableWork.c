/*
 * XREFs of HalpAcpiGetTableWork @ 0x140337070
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x140335640 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetTable @ 0x140336FF0 (HalpAcpiGetTable.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DC28 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x140396838 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x140335640 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     HalpAcpiGetCachedTable @ 0x140337190 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140337218 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCopyBiosTable @ 0x14037DE48 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiCacheTable @ 0x14037DFA0 (HalpAcpiCacheTable.c)
 *     HalpUnmapVirtualAddress @ 0x14037E180 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiShouldIgnoreSdevTable @ 0x14040F5BC (HalpAcpiShouldIgnoreSdevTable.c)
 */

void *__fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  void *v9; // rbx
  _DWORD *TableFromBios; // rax
  __int64 v11; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, a3, a4);
  v9 = Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, &NumberOfBytes, &v14);
    v9 = TableFromBios;
    if ( TableFromBios )
    {
      if ( a2 == 1447380051 && (unsigned __int8)HalpAcpiShouldIgnoreSdevTable(TableFromBios) )
        return 0LL;
      v11 = HalpAcpiCopyBiosTable(a1, v9, v14);
      if ( a1 )
        HalpUnmapVirtualAddress(
          v9,
          (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
          0LL);
      else
        MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
      if ( !v11 )
      {
        return 0LL;
      }
      else
      {
        HalpAcpiCacheTable(a1, v11);
        return (void *)v11;
      }
    }
  }
  return v9;
}
