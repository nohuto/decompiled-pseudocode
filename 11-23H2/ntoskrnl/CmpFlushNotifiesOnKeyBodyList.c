/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x14071087C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140680A38 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x140682700 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140A0CE20 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x140A1FCA0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1FD80 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28168 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A284D8 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A24004 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *i; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rbx
  struct _PRIVILEGE_SET *v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx

  v4 = (__int64 *)(a1 + 120);
  for ( i = *(__int64 **)(a1 + 120); i != v4; i = (__int64 *)*i )
  {
    if ( *(i - 2) )
      CmpFlushNotify((__int64)(i - 4), a4, 0LL);
    v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(i + 7, 0LL);
    if ( v13 )
      CmpKeyEnumStackFreeResumeContext(v13);
    *((_WORD *)i + 8) |= a2;
  }
  v9 = 0LL;
  v10 = (__int64 *)(a1 + 136);
  do
  {
    v11 = *v10;
    if ( (unsigned __int64)*v10 >= 3
      && v11 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), 2LL, v11) )
    {
      if ( *(_QWORD *)(v11 + 16) )
        CmpFlushNotify(v11, a4, 0LL);
      v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
      if ( v12 )
        CmpKeyEnumStackFreeResumeContext(v12);
      *(_WORD *)(v11 + 48) |= a2;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), v11, 2LL);
    }
    v9 = (unsigned int)(v9 + 1);
    ++v10;
  }
  while ( (unsigned int)v9 < 4 );
}
