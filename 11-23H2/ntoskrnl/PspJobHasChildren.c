/*
 * XREFs of PspJobHasChildren @ 0x1407E6824
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077CC4C (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x1407E66D8 (PspCreateSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACDE4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1272) != a1 + 1272 )
    return 1;
  return v1;
}
