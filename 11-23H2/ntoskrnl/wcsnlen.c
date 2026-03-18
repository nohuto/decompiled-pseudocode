/*
 * XREFs of wcsnlen @ 0x1403DBAE0
 * Callers:
 *     _wcslwr_s @ 0x1403D9B10 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x14051C8F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528820 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805C78 (BiGetObjectReferenceFromEfiEntry.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x140862F30 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD7CC (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E462C (EtwpLoadMicroarchitecturalProfileSource.c)
 *     SiIsValidWindowsBootEntry @ 0x140A602B0 (SiIsValidWindowsBootEntry.c)
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
