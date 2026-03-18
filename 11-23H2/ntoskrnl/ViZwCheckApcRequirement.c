/*
 * XREFs of ViZwCheckApcRequirement @ 0x140AD4F08
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD46E0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD4B30 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD4BA0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD4D80 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    return VerifierBugCheckIfAppropriate(
             0xC4u,
             0xE6uLL,
             BugCheckParameter2,
             CurrentIrql,
             KeGetCurrentThread()->SpecialApcDisable);
  result = KeAreAllApcsDisabled();
  if ( result )
    return VerifierBugCheckIfAppropriate(
             0xC4u,
             0xE6uLL,
             BugCheckParameter2,
             CurrentIrql,
             KeGetCurrentThread()->SpecialApcDisable);
  return result;
}
