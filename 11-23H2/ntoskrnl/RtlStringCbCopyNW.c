/*
 * XREFs of RtlStringCbCopyNW @ 0x140396D60
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051B5D0 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PopDiagGetDriverName @ 0x1405918C4 (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x140835E44 (LocalConvertSidToStringSidW.c)
 *     AslPathWildcardFindFirst @ 0x140A55554 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A55AAC (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140A59E18 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A5A04C (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // rdx
  size_t v5; // r9
  size_t v6; // r9
  signed __int64 v7; // r10
  wchar_t v8; // ax
  NTSTRSAFE_PWSTR v9; // rax

  v4 = cbDest >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = cbToCopy >> 1;
  if ( v5 > 0x7FFFFFFE )
  {
    *pszDest = 0;
    return -1073741811;
  }
  v6 = v5 - v4;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = pszDest - 1;
  if ( v4 )
    v9 = pszDest;
  *v9 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
