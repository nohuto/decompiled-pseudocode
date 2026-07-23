/*
 * XREFs of IopDisableCrashDump @ 0x140552BFC
 * Callers:
 *     IoConfigureCrashDump @ 0x140550024 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x140552F2C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140553118 (IopDumpTraceDisableCrashDumpFailure.c)
 */

__int64 IopDisableCrashDump()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( CrashdmpImageEntry && qword_140C6AC68 && CrashdmpInitialized )
  {
    v1 = qword_140C6AC68();
    v0 = v1;
    if ( v1 >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v1);
    }
  }
  return v0;
}
