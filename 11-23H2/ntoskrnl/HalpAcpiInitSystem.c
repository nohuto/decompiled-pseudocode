/*
 * XREFs of HalpAcpiInitSystem @ 0x140A90A80
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaSwapP0NodeToFront @ 0x1403A5598 (HalpNumaSwapP0NodeToFront.c)
 *     HalpAcpiInitDiscard @ 0x140B653A4 (HalpAcpiInitDiscard.c)
 *     HalpAcpiDetectPiix4 @ 0x140B653D8 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B6544C (HalpAcpiPopulateTableCache.c)
 *     HalpAcpiPrmCacheInit @ 0x140B654C0 (HalpAcpiPrmCacheInit.c)
 *     HalpAuditAcpiTables @ 0x140B65A08 (HalpAuditAcpiTables.c)
 */

__int64 __fastcall HalpAcpiInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax

  v3 = 0;
  v4 = a1 - 7;
  if ( !v4 )
  {
    HalpAcpiLoaderBlock = a3;
    HalpAcpiInitDiscard(a3);
    return v3;
  }
  v5 = v4 - 5;
  if ( !v5 )
  {
    HalpNumaSwapP0NodeToFront();
    return v3;
  }
  v6 = v5 - 5;
  if ( !v6 )
  {
    HalpAuditAcpiTables(a3);
    return v3;
  }
  v7 = v6 - 6;
  if ( !v7 )
  {
    result = HalpAcpiPrmCacheInit();
    if ( (int)result < 0 )
      return result;
    return (unsigned int)HalpAcpiPopulateTableCache();
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 4 )
      return (unsigned int)HalpAcpiDetectPiix4();
  }
  else
  {
    HalpAcpiLoaderBlock = 0LL;
  }
  return v3;
}
