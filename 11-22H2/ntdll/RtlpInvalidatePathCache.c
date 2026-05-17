/*
 * XREFs of RtlpInvalidatePathCache @ 0x1800789C0
 * Callers:
 *     RtlSetSearchPathMode @ 0x180002000 (RtlSetSearchPathMode.c)
 *     LdrAddDllDirectory @ 0x180078440 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x180078650 (LdrRemoveDllDirectory.c)
 *     LdrSetDllDirectory @ 0x1800788C0 (LdrSetDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800E9AFC (RtlpSignalSystemDirsModification.c)
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
