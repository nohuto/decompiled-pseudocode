/*
 * XREFs of PopPowerRequestDebounceTimerWorker @ 0x140989CF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
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
  v1 = &unk_140C0368C;
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
  v3 = &unk_140C0368C;
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
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
