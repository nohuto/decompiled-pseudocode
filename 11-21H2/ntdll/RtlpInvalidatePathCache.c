/*
 * XREFs of RtlpInvalidatePathCache @ 0x180060640
 * Callers:
 *     RtlSetSearchPathMode @ 0x180002500 (RtlSetSearchPathMode.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x180060280 (LdrRemoveDllDirectory.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800EA79C (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_QWORD *)(result + 80))-- != 1LL )
      return 0LL;
  }
  return result;
}
