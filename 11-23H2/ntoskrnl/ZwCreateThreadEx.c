/*
 * XREFs of ZwCreateThreadEx @ 0x14041C640
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14076B6EC (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B124 (MiForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x140A37954 (MiInjectThreadForHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
