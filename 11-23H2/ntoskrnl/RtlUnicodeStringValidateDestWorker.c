/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x140208D74
 * Callers:
 *     RtlUnicodeStringCat @ 0x140208C9C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140209B44 (RtlUnicodeStringCatString.c)
 *     PopPowerRequestStatsIdConcat @ 0x1407A8CC0 (PopPowerRequestStatsIdConcat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x14099A7B8 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140208E20 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  __int64 v8; // rcx
  int v9; // r8d
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  v9 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( v9 >= 0 )
  {
    if ( v10 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *pcchDest = (unsigned __int64)v10[1] >> 1;
      if ( v11 )
        *v11 = (unsigned __int64)*v10 >> 1;
    }
  }
  return v9;
}
