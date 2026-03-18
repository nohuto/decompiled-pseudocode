/*
 * XREFs of PnpDeferNotification @ 0x140768798
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408648F8 (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PnpInsertNoopEvent @ 0x140768194 (PnpInsertNoopEvent.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  char v2; // bp
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  v2 = 0;
  v3 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE2(NlsMbOemCodePageTag) || *(_DWORD *)(a1 + 16) == 3 )
  {
    Pool2 = ExAllocatePool2(256LL, 24LL, 930115152LL);
    v6 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v7 = (_QWORD *)qword_140D3CE90;
      if ( *(PVOID **)qword_140D3CE90 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v6 = &PnpDeferredRegistrationList;
      v6[1] = v7;
      *v7 = v6;
      qword_140D3CE90 = (__int64)v6;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
      if ( !BYTE2(NlsMbOemCodePageTag) )
        v2 = 1;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( v2 )
  {
    PnpInsertNoopEvent(0LL, 0LL);
    return 0;
  }
  return v3;
}
