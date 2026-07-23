/*
 * XREFs of sub_1406EDB48 @ 0x1406EDB48
 * Callers:
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExCancelTimer @ 0x1402D3E10 (ExCancelTimer.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140634044 @ 0x140634044 (sub_140634044.c)
 *     sub_1406EF58C @ 0x1406EF58C (sub_1406EF58C.c)
 *     sub_140795400 @ 0x140795400 (sub_140795400.c)
 *     sub_140814244 @ 0x140814244 (sub_140814244.c)
 *     sub_1409EA3AC @ 0x1409EA3AC (sub_1409EA3AC.c)
 */

__int64 __fastcall sub_1406EDB48(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v9; // rax
  ULONG_PTR v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 1096);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
  {
    memset(v11, 0, sizeof(v11));
    sub_140814244(a1, v11);
  }
  v3 = *(_DWORD *)(a1 + 816);
  if ( (v3 & 0x20) == 0 )
  {
    sub_140795400(v1, *(unsigned int *)a1);
    v3 = *(_DWORD *)(a1 + 816);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v4 = 0;
    while ( *(unsigned __int16 *)(v1 + 2LL * v4 + 4048) != *(_DWORD *)a1 )
    {
      if ( ++v4 >= 8 )
        goto LABEL_11;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v1 + 432, 0LL);
    *(_BYTE *)(v1 + 4064) &= ~(1 << v4);
    v6 = 32LL * v4;
    *(_OWORD *)(v6 + v1 + 152) = 0LL;
    *(_OWORD *)(v6 + v1 + 168) = 0LL;
    *(_WORD *)(v1 + 2LL * v4 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    ExReleasePushLockEx(v1 + 432, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
LABEL_11:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 816);
    if ( (v7 & 0x800) != 0 )
    {
      sub_1409EA3AC(a1, *(unsigned int *)a1);
      v7 = *(_DWORD *)(a1 + 816);
    }
    if ( (v7 & 0x1000000) != 0 )
      sub_140634044(*(_QWORD *)(a1 + 1008), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  v9 = *(_QWORD *)(a1 + 1080);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      ExCancelTimer(v10, 0LL);
  }
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  sub_1406EF58C(a1, 2LL);
  return 0LL;
}
