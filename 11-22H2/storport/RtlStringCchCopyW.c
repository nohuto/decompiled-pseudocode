/*
 * XREFs of RtlStringCchCopyW @ 0x1C003D83C
 * Callers:
 *     StorCreateSystemLogEntry @ 0x1C005C024 (StorCreateSystemLogEntry.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C009FD44 (RaidGetStorageAdapterSerialNumberProperty.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C003D8D0 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v4);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
