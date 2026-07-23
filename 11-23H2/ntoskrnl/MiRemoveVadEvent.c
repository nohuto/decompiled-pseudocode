/*
 * XREFs of MiRemoveVadEvent @ 0x140634358
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _KPROCESS *Process; // rsi
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // rdx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( v10 == a2 )
        break;
      v4 = v10;
      v10 = (_QWORD *)*v10;
      if ( !v11 )
        goto LABEL_8;
    }
    if ( v4 )
      *v4 = v11;
    else
      *(_QWORD *)(a1 + 56) = v11 | v9 & 0xF;
  }
LABEL_8:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v7, (__int64)v10, v8);
}
