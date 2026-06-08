/*
 * XREFs of RtlStringCchCatW @ 0x1C000DD68
 * Callers:
 *     ReadEnergyEquation @ 0x1C0048A8C (ReadEnergyEquation.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0002FEC (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTRSAFE_PWSTR v3; // rax
  __int64 v4; // r9
  NTSTATUS result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = pszDest;
  v4 = 192LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    return RtlStringCopyWorkerW(
             (NTSTRSAFE_PWSTR)((char *)pszDest + ((2 * (192 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 192) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 192,
             (size_t *)pszSrc,
             pszSrc,
             v6);
  return result;
}
