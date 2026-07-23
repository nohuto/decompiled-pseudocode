/*
 * XREFs of wcsnlen @ 0x1403DBCC0
 * Callers:
 *     _wcslwr_s @ 0x1403D9CF0 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x14051CE40 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528D70 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805F48 (BiGetObjectReferenceFromEfiEntry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x140863170 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD9CC (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E48BC (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x140A60560 (SiIsValidWindowsBootEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
