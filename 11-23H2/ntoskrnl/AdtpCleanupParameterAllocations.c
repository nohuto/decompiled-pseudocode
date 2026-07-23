/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x140399D2C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140670090 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14083D050 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, PVOID *a2, unsigned int a3)
{
  __int64 v4; // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        ExFreePoolWithTag(*a2, 0);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
}
