/*
 * XREFs of _wcsnicmp_0 @ 0x1C0022CEA
 * Callers:
 *     PortGetBusyPauseTimeValue @ 0x1C00929D0 (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C0092AE8 (PortGetBusyRetryCountValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C0092C90 (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C0092DA8 (PortGetIoTimeoutValue.c)
 *     PortpReadDriverParameterEntry @ 0x1C00932FC (PortpReadDriverParameterEntry.c)
 *     PortpReadLinkTimeoutValue @ 0x1C00934C4 (PortpReadLinkTimeoutValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
