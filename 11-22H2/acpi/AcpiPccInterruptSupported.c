/*
 * XREFs of AcpiPccInterruptSupported @ 0x1C0089CAC
 * Callers:
 *     ACPIPccInitialize @ 0x1C00894E8 (ACPIPccInitialize.c)
 *     AcpiPccInitializeSubspace @ 0x1C0089AA4 (AcpiPccInitializeSubspace.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiPccInterruptSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( ((*(_BYTE *)a1 + 1) & 0xFE) != 0 || (*(_DWORD *)(a1 + 4) & 1) == 0 )
    return 0;
  return v1;
}
