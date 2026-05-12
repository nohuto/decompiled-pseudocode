/*
 * XREFs of _wcsnicmp_0 @ 0x1C002219A
 * Callers:
 *     PortGetBusyPauseTimeValue @ 0x1C00AF2FC (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C00AF414 (PortGetBusyRetryCountValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C00AF5BC (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C00AF6D4 (PortGetIoTimeoutValue.c)
 *     PortpReadDriverParameterEntry @ 0x1C00AFC28 (PortpReadDriverParameterEntry.c)
 *     PortpReadLinkTimeoutValue @ 0x1C00AFDF0 (PortpReadLinkTimeoutValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
