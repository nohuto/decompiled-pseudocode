/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800E7D24
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E72D0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
          memset_thunk_772440563353939046(0LL, 0, 0xF8uLL);
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
