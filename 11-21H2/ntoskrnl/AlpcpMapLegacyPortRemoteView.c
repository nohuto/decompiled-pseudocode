/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x1406622B8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcpRemoveResourcePort @ 0x1406F6C24 (AlpcpRemoveResourcePort.c)
 *     AlpcpInsertResourcePort @ 0x1407A6950 (AlpcpInsertResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *Object, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int64 *v4; // rdi
  signed __int64 *v7; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = Object + 44;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v7 = *(signed __int64 **)(v3 + 24);
  if ( Object != v7 )
  {
    AlpcpRemoveResourcePort(v7, v3);
    ObfDereferenceObject(*(PVOID *)(v3 + 24));
    ObfReferenceObject(Object);
    *(_QWORD *)(v3 + 24) = Object;
    AlpcpInsertResourcePort(Object, v3);
  }
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 24;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
