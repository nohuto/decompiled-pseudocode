/*
 * XREFs of StringCbPrintfW @ 0x18000A088
 * Callers:
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x180009F64 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     RtlpGetVolumeHandle @ 0x18004790C (RtlpGetVolumeHandle.c)
 *     CrmStateMonitorSystemDiskUsageIndexGet @ 0x180047CD8 (CrmStateMonitorSystemDiskUsageIndexGet.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180097A38 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  HRESULT v6; // edi
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147024774;
    }
    else if ( v7 != v5 )
    {
      return v6;
    }
    pszDest[v5] = 0;
    return v6;
  }
  v6 = -2147024809;
  if ( v3 )
    *pszDest = 0;
  return v6;
}
