/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800436FC
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800435D8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180078D94 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007B234 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007B7B8 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043944 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 *v11; // r14
  struct _RM_HAM_ACTIVITY_HOST **v12; // rdi
  unsigned __int64 v13; // rbp
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  bool v15; // zf
  __int64 *Next; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v18; // rsi
  __int64 v19; // rdx
  _QWORD *v20; // r12
  BOOL v21; // edi
  unsigned __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+A0h] [rbp+28h]

  if ( *(_DWORD *)(a1 + 8) )
  {
    Next = *(__int64 **)a1;
    for ( *(_DWORD *)(a1 + 16) = 1; Next; Next = (__int64 *)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1) )
    {
      v17 = (struct _RM_HAM_ACTIVITY_HOST *)*Next;
      HampHostQueueTerminateEx(*Next, a2, a3, a4, 0, 0, 0LL, (unsigned int *)&v22);
      if ( (a6 & 1) != 0 )
      {
        HampHostAcquireLockExclusiveEx(v17, 0);
        HampHostCheckQueueStateWorker(v17, 0);
        HampHostReleaseLockExclusiveEx(v17);
      }
    }
  }
  RtlQueryUnbiasedInterruptTime(&v22);
  v11 = &v23;
  v12 = 0LL;
  v13 = v22 / 0x2710;
  result = (struct _HAM_TERMINATION_HOST_BLOCK *)(a5 + (unsigned int)(v22 / 0x2710));
  v15 = a5 == -1;
  v25 = a5 + v22 / 0x2710;
  if ( v15 )
    v11 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v12 = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v12 )
  {
    do
    {
      v18 = *v12;
      HampHostAcquireLockSharedEx(*v12, 0LL);
      v20 = v12 + 1;
      do
      {
        CempLockTrackerMarkReleased(HampLockTrackerId, v19, 1u);
        RtlReleaseSRWLockShared(v18);
        if ( v11 )
          v23 = -10000LL * (unsigned int)(v25 - v13);
        RtlWaitOnAddress((char *)v18 + 816, v20, 8LL);
        if ( a5 == -1 )
        {
          v21 = 0;
        }
        else
        {
          RtlQueryUnbiasedInterruptTime(&v22);
          LODWORD(v13) = v22 / 0x2710;
          v21 = v25 - (int)v13 > a5;
        }
        HampHostAcquireLockSharedEx(v18, 0LL);
      }
      while ( *v20 == *((_QWORD *)v18 + 102) && !v21 );
      CempLockTrackerMarkReleased(HampLockTrackerId, v19, 1u);
      RtlReleaseSRWLockShared(v18);
      result = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
      v12 = (struct _RM_HAM_ACTIVITY_HOST **)result;
    }
    while ( result );
  }
  return result;
}
