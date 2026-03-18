/*
 * XREFs of IoInitializeDumpStack @ 0x14055083C
 * Callers:
 *     PopRestoreHiberContext @ 0x140AA45CC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140552E28 (IopDumpTraceInitializeDumpStackFailure.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6AD38 )
    {
      v2 = qword_140C6AD38(a1, 0LL);
      v1 = v2;
      if ( v2 < 0 )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v2);
    }
  }
  return v1;
}
