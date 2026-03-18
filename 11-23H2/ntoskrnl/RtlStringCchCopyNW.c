/*
 * XREFs of RtlStringCchCopyNW @ 0x1402F7ECC
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14056211C (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x140758BC0 (AslPathSplit.c)
 *     WmipBuildInstanceSet @ 0x14086A3D4 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140872530 (IopErrorLogThread.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     EtwpCoverageSamplerQuery @ 0x1408A9F98 (EtwpCoverageSamplerQuery.c)
 *     IopLogBlockedDriverEvent @ 0x14094524C (IopLogBlockedDriverEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1409985A8 (PoQueryProcessEnergyTrackingState.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     SdbQueryDataExTagID @ 0x140A4EF88 (SdbQueryDataExTagID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v4; // r10
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax
  NTSTATUS result; // eax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
LABEL_13:
    *pszDest = 0;
    return result;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
    goto LABEL_13;
  }
  v5 = cchToCopy - cchDest;
  v6 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = pszDest - 1;
  if ( v4 )
    v8 = pszDest;
  *v8 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
