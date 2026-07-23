/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x1407790EC
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

signed __int32 __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, volatile signed __int64 *a2, ULONG_PTR *a3, int a4)
{
  __int64 v8; // rax
  ULONG_PTR i; // rsi
  int v10; // edi
  int v11; // edi
  volatile signed __int64 *v12; // rdi
  volatile signed __int64 *v14; // r14
  __int64 v15; // rax

  if ( a4 == 1 || a4 == 2 )
  {
    v8 = 17LL;
  }
  else if ( a4 == 3 )
  {
    v8 = 22LL;
  }
  else
  {
    v8 = 25LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[v8], 0LL);
LABEL_7:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v14 = a2 + 17;
      }
      else if ( a4 == 3 )
      {
        v14 = a2 + 22;
      }
      else
      {
        v14 = a2 + 25;
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000LL);
      else
        AlpcpUnlockMessage(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v15 = 17LL;
      }
      else if ( a4 == 3 )
      {
        v15 = 22LL;
      }
      else
      {
        v15 = 25LL;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[v15], 0LL);
      goto LABEL_7;
    }
  }
  v10 = a4 - 1;
  if ( v10 && (v11 = v10 - 1) != 0 )
  {
    if ( v11 == 1 )
      v12 = a2 + 22;
    else
      v12 = a2 + 25;
  }
  else
  {
    v12 = a2 + 17;
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  return KeAbPostRelease((ULONG_PTR)v12);
}
