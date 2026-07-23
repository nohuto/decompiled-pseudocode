/*
 * XREFs of HalpAcpiGetTableWork @ 0x140337300
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x1403358D0 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DDC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x140396A18 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x1403358D0 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     HalpAcpiGetCachedTable @ 0x140337420 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1403374A8 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCopyBiosTable @ 0x14037DFE8 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiCacheTable @ 0x14037E140 (HalpAcpiCacheTable.c)
 *     HalpUnmapVirtualAddress @ 0x14037E320 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiShouldIgnoreSdevTable @ 0x14040F79C (HalpAcpiShouldIgnoreSdevTable.c)
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
