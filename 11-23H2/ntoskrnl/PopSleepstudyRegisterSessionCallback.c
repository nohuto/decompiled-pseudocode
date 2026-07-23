/*
 * XREFs of PopSleepstudyRegisterSessionCallback @ 0x140848D04
 * Callers:
 *     PopPowerRequestStatsInitialize @ 0x140B64EBC (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall PopSleepstudyRegisterSessionCallback(__int64 a1)
{
  __int64 *v2; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v2 = (__int64 *)qword_140C3BBC8;
  if ( *(__int64 **)qword_140C3BBC8 != &PopSleepstudySessionContext )
    __fastfail(3u);
  *(_QWORD *)a1 = &PopSleepstudySessionContext;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_140C3BBC8 = a1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(
    *((unsigned int *)&unk_140C3BC90 + 26 * (unsigned int)dword_140C3BC88),
    *((_QWORD *)&unk_140C3BC90 + 13 * (unsigned int)dword_140C3BC88 + 1));
  PopReleaseRwLock(&PopSleepstudySessionLock);
}
