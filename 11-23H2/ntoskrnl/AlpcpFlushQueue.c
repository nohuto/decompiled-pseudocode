/*
 * XREFs of AlpcpFlushQueue @ 0x140718CAC
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140718AF0 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 */

signed __int32 __fastcall AlpcpFlushQueue(volatile signed __int64 *a1, ULONG_PTR *a2, int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r15
  int v8; // edi
  int v9; // edi
  volatile signed __int64 *v10; // rdi
  volatile signed __int64 *v12; // r14
  __int64 v13; // rax

  if ( a3 == 1 || a3 == 2 )
  {
    v6 = 17LL;
  }
  else if ( a3 == 3 )
  {
    v6 = 22LL;
  }
  else
  {
    v6 = 25LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v6], 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 == 1 || a3 == 2 )
    {
      v12 = a1 + 17;
    }
    else if ( a3 == 3 )
    {
      v12 = a1 + 22;
    }
    else
    {
      v12 = a1 + 25;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(volatile signed __int64 **)(v7 + 16) == a1 )
      AlpcpCancelMessage(a1, v7, 0x10000LL);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 == 1 || a3 == 2 )
    {
      v13 = 17LL;
    }
    else if ( a3 == 3 )
    {
      v13 = 22LL;
    }
    else
    {
      v13 = 25LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[v13], 0LL);
  }
  v8 = a3 - 1;
  if ( v8 && (v9 = v8 - 1) != 0 )
  {
    if ( v9 == 1 )
      v10 = a1 + 22;
    else
      v10 = a1 + 25;
  }
  else
  {
    v10 = a1 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
