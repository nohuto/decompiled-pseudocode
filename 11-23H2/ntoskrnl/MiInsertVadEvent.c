/*
 * XREFs of MiInsertVadEvent @ 0x1402E326C
 * Callers:
 *     MiWaitForVadDeletion @ 0x140660C58 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x140745D84 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1407CCE04 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x140A31210 (MiCreateRotateView.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiCreateUserPhysicalView @ 0x140A41778 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x140A47C30 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140A495E8 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140286E74 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A2F0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v6; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // dl

  if ( (_DWORD)a3 )
  {
    v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v6);
    v8 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v9 = v8;
  }
  else
  {
    v9 = 17;
    v6 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)(a1 + 56) = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
  if ( v9 != 17 )
    MiUnlockWorkingSetExclusive((__int64)v6, v9, a3, a4);
}
