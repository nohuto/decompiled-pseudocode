/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800E8E94
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8440 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(_QWORD *a1, _QWORD *a2)
{
  int Section; // ebx

  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      Section = NtCreateSection();
      if ( Section >= 0 )
      {
        Section = ZwMapViewOfSection();
        if ( Section >= 0 )
        {
          memset(0LL, 0, 0xF8uLL);
          *a1 = 0LL;
          Section = 0;
          *a2 = 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Section;
}
