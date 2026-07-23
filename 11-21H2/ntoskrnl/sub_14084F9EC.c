/*
 * XREFs of sub_14084F9EC @ 0x14084F9EC
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_140989028 @ 0x140989028 (sub_140989028.c)
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084FC2C @ 0x14084FC2C (sub_14084FC2C.c)
 *     sub_140A485D4 @ 0x140A485D4 (sub_140A485D4.c)
 */

__int64 __fastcall sub_14084F9EC(_QWORD *a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rdi
  unsigned int v6; // eax
  struct _KEVENT *v7; // rcx

  v3 = (struct _FAST_MUTEX *)(a1 + 70);
  if ( a3 )
  {
    ExAcquireFastMutex(v3);
    KeReleaseGuardedMutex(v3);
    *((_OWORD *)a1 + 49) = 0LL;
    *((_OWORD *)a1 + 50) = 0LL;
    a1[102] = 0LL;
  }
  else
  {
    memset(a1, 0, 0x340uLL);
    memset(&stru_140CF5E08, 0, 0x58uLL);
    *a1 = 0LL;
  }
  qword_140CF5E00 = 0x23C34600uLL / KeQueryTimeIncrement();
  *(_OWORD *)(a1 + 3) = 0LL;
  *(_OWORD *)(a1 + 5) = 0LL;
  a1[7] = 0LL;
  *((_DWORD *)a1 + 6) &= 0xFFFFFFF0;
  a1[7] = a1 + 6;
  a1[6] = a1 + 6;
  *((_WORD *)a1 + 17) = 0;
  a1[5] = 0LL;
  *((_WORD *)a1 + 16) = 2;
  *((_OWORD *)a1 + 4) = 0LL;
  *((_OWORD *)a1 + 5) = 0LL;
  a1[12] = 0LL;
  a1[12] = a1 + 11;
  a1[11] = a1 + 11;
  v6 = a1[8] & 0xFFFFFFF1;
  *((_WORD *)a1 + 37) = 0;
  a1[10] = 0LL;
  *((_DWORD *)a1 + 16) = v6 | 1;
  *((_WORD *)a1 + 36) = 0;
  if ( a3 )
    ExAcquireFastMutex(v3);
  else
    KeInitializeGuardedMutex(v3);
  a1[64] = a1 + 63;
  a1[63] = a1 + 63;
  a1[66] = a1 + 65;
  a1[65] = a1 + 65;
  if ( a3 )
    KeReleaseGuardedMutex(v3);
  else
    sub_140A485D4(a1, &qword_140CF5E00, 0LL);
  v7 = (struct _KEVENT *)(a1 + 17);
  if ( a3 )
  {
    KeResetEvent(v7);
    KeResetEvent((PRKEVENT)(a1 + 20));
    KeResetEvent((PRKEVENT)(a1 + 14));
    KeResetEvent((PRKEVENT)(a1 + 25));
  }
  else
  {
    KeInitializeEvent(v7, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 20), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 14), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 25), NotificationEvent, 0);
  }
  sub_14084FC2C((PEX_RUNDOWN_REF)a1 + 28);
  InitializeSListHead((PSLIST_HEADER)a1 + 30);
  *((_DWORD *)a1 + 124) = -1;
  return sub_14084FC2C((PEX_RUNDOWN_REF)a1 + 44);
}
