/*
 * XREFs of EtwpCpuStarvationProvEnableCallback @ 0x1403ADEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeEtwInitializeCpuStarvationProvider @ 0x1403ADECC (KeEtwInitializeCpuStarvationProvider.c)
 */

void __fastcall EtwpCpuStarvationProvEnableCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 1 )
    KeEtwInitializeCpuStarvationProvider(SourceId, ControlCode, Level, MatchAnyKeyword);
}
