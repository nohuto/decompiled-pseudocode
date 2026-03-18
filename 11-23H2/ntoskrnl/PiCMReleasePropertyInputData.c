/*
 * XREFs of PiCMReleasePropertyInputData @ 0x1406D0C30
 * Callers:
 *     PiCMGetObjectProperty @ 0x1406D09D4 (PiCMGetObjectProperty.c)
 *     PiCMSetObjectProperty @ 0x14079BE44 (PiCMSetObjectProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BC6C (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleasePropertyInputData(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rdx
  char PreviousMode; // bl
  void *v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 16);
  PreviousMode = CurrentThread->PreviousMode;
  if ( v3 )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, v3);
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v5);
  return 0LL;
}
