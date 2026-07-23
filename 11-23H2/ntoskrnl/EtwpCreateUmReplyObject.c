/*
 * XREFs of EtwpCreateUmReplyObject @ 0x14077ECBC
 * Callers:
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 * Callees:
 *     KeInitializeQueue @ 0x140220E10 (KeInitializeQueue.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1406BF944 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x14076B780 (ObInsertObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  PVOID v12; // rdi
  PVOID *NewObject; // [rsp+28h] [rbp-29h]
  PVOID v15; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp+Fh] BYREF
  int v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+7Ch] [rbp+2Bh]
  __int128 v19; // [rsp+80h] [rbp+2Fh]
  PVOID Object; // [rsp+D0h] [rbp+7Fh] BYREF

  v18 = 0;
  v15 = 0LL;
  Object = 0LL;
  v16[1] = 0LL;
  v16[2] = 0LL;
  v16[0] = 48LL;
  v17 = 64;
  v19 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(64LL, 72LL, 1903653957LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    inserted = ObCreateObjectEx(
                 0,
                 EtwpRegistrationObjectType,
                 (__int64)v16,
                 1,
                 (__int64)NewObject,
                 112,
                 0,
                 0,
                 &Object,
                 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset(Object, 0, 0x70uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      v10 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)v9 = EtwpReplyListHead;
      *((_QWORD *)v9 + 1) = &EtwpReplyListHead;
      *(_QWORD *)(v10 + 8) = v9;
      EtwpReplyListHead = (__int64)v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v11 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v11 = v11;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x80u);
      v12 = Object;
      inserted = ObInsertObject(Object, 0LL, 0x804u, 1u, &v15, Handle);
      if ( inserted >= 0 )
        *a3 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
