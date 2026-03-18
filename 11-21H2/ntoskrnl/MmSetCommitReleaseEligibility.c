/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14058196C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  volatile LONG *SharedVm; // rbx
  KIRQL v8; // al
  int v9; // edx
  unsigned int v10; // ebx
  char v11; // dl
  _OWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v13, a4);
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
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
  MiUnlockWorkingSetExclusive(a1 + 1664, v8);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v13, 0LL);
  return v10;
}
