/*
 * XREFs of RtlStringCbCopyW @ 0x1C0016718
 * Callers:
 *     RaidAdapterCreateDriverInfo @ 0x1C00852F0 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000F92C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(pszDest, v3, (size_t *)pszSrc, pszSrc, v5);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
