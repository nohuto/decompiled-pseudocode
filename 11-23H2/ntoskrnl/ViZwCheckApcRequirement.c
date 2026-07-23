/*
 * XREFs of ViZwCheckApcRequirement @ 0x140AD4EF8
 * Callers:
 *     VfZwDeviceIoControlFile_Entry @ 0x140AD46D0 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD4B20 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD4B90 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140AD4D70 (VfZwWriteFile_Entry.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
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
