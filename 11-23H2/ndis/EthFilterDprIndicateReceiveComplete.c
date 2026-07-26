/*
 * XREFs of EthFilterDprIndicateReceiveComplete @ 0x1C0062DE0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EthFilterDprIndicateReceiveComplete(__int64 *a1)
{
  unsigned int Number; // r14d
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+50h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( a1 )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
    v3 = *a1;
    v4 = a1;
    if ( !*a1 )
      goto LABEL_7;
    do
    {
      v5 = Number << 12;
      do
      {
        v6 = *(_QWORD *)(v3 + 720);
        v7 = *(_QWORD *)(v3 + 424);
        if ( *(_BYTE *)(v6 + v5) )
        {
          *(_BYTE *)(v6 + v5) = 0;
          (*(void (__fastcall **)(_QWORD))(v3 + 136))(*(_QWORD *)(v3 + 32));
        }
        v3 = v7;
      }
      while ( v7 );
LABEL_7:
      v8 = 0LL;
      if ( v4 != a1 + 1 )
        v8 = v4;
      v4 = v8;
      if ( v8 == a1 + 2 )
        v4 = a1 + 1;
      if ( v4 == a1 )
        v4 = a1 + 2;
      if ( !v4 )
        break;
      v3 = *v4;
    }
    while ( *v4 );
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)a1[36], &LockState);
  }
}
