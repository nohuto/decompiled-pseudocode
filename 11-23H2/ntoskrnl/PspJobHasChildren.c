/*
 * XREFs of PspJobHasChildren @ 0x1407E6554
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077CA5C (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x1407E6408 (PspCreateSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACBE4 (PspConvertSiloToServerSilo.c)
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
