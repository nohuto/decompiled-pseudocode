/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x140619FBC
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // ebp
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  unsigned int v10; // ebx
  char v11; // dl
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0;
  memset(&v13, 0, sizeof(v13));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v13);
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v9 = *(_DWORD *)(a1 + 1848);
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) != 0 )
  {
    v10 = -1073741558;
  }
  else
  {
    if ( a2 )
      v11 = HIBYTE(v9) & 0x9F | 0x20;
    else
      v11 = HIBYTE(v9) & 0x9F;
    *(_BYTE *)(a1 + 1851) = v11;
    v10 = 0;
  }
  MiUnlockWorkingSetExclusive(a1 + 1664, v6, v7, v8);
  if ( v2 )
    KiUnstackDetachProcess(&v13);
  return v10;
}
