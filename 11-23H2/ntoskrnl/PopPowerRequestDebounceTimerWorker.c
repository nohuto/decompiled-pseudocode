/*
 * XREFs of PopPowerRequestDebounceTimerWorker @ 0x140981760
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7844 (PopPowerRequestHandleRequestUpdate.c)
 */

void PopPowerRequestDebounceTimerWorker()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdi
  unsigned int v2; // ecx
  _DWORD *v3; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquirePowerRequestPushLock(1);
  v0 = 0;
  v1 = &unk_140C0358C;
  do
  {
    if ( (*v1 & 8) != 0 )
    {
      *v1 &= ~8u;
      PopPowerRequestHandleRequestUpdate(0LL, v0, 0);
    }
    ++v0;
    v1 += 12;
  }
  while ( v0 < 6 );
  v2 = 0;
  v3 = &unk_140C0358C;
  while ( (*v3 & 8) == 0 )
  {
    ++v2;
    v3 += 12;
    if ( v2 >= 6 )
      goto LABEL_10;
  }
  KeCancelTimer2((__int64)&PopPowerRequestDebounceTimer);
  v4[0] = 0LL;
  v4[1] = -1LL;
  KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v4);
LABEL_10:
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
