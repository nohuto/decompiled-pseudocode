/*
 * XREFs of MiPrepareToHotPatchVad @ 0x140A3AEEC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiVadDeleted @ 0x140275410 (MiVadDeleted.c)
 *     MiUnlockVad @ 0x140289CA0 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029C7D0 (MiLockVad.c)
 *     MiBeginHoldingDirtyFaults @ 0x140641BF4 (MiBeginHoldingDirtyFaults.c)
 *     MiInitializeImageHotPatchContext @ 0x140A37884 (MiInitializeImageHotPatchContext.c)
 *     MiPrepareToHotPatchImage @ 0x140A3A908 (MiPrepareToHotPatchImage.c)
 */

__int64 __fastcall MiPrepareToHotPatchVad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        __int64 a7,
        _BYTE *a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  MiLockVad((__int64)CurrentThread, a2);
  if ( (unsigned int)MiVadDeleted(a2) )
  {
    v13 = -1073741800;
  }
  else
  {
    MiInitializeImageHotPatchContext((_QWORD *)a3, a6, a2);
    if ( !a9
      || (MiBeginHoldingDirtyFaults(a1, (_QWORD *)(a3 + 88)),
          *(_DWORD *)(a3 + 140) |= 2u,
          v13 = MiPrepareToHotPatchImage(a3, a7, a8),
          v13 >= 0) )
    {
      v13 = 0;
    }
  }
  MiUnlockVad((__int64)CurrentThread, a2);
  return (unsigned int)v13;
}
