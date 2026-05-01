/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F35C
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EDE8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D9E0 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F8E4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080E90 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F59C (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        unsigned int a5,
        char a6)
{
  __int64 *Next; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi
  __int64 *v13; // r15
  struct _RM_HAM_ACTIVITY_HOST **v14; // rdi
  unsigned __int64 v15; // rbp
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // rax
  BOOL v21; // edi
  unsigned __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+A0h] [rbp+28h]

  if ( *(_DWORD *)(a1 + 8) )
  {
    Next = *(__int64 **)a1;
    for ( *(_DWORD *)(a1 + 16) = 1; Next; Next = (__int64 *)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1) )
    {
      v11 = (struct _RM_HAM_ACTIVITY_HOST *)*Next;
      HampHostQueueTerminateEx(*Next, a2, a3, a4, 0, 0, 0LL, (unsigned int *)&v22);
      if ( (a6 & 1) != 0 )
      {
        HampHostAcquireLockExclusiveEx(v11, 0);
        HampHostCheckQueueStateWorker(v11, 0);
        HampHostReleaseLockExclusiveEx(v11);
      }
    }
  }
  RtlQueryUnbiasedInterruptTime(&v22);
  v13 = &v23;
  v14 = 0LL;
  v15 = v22 / 0x2710;
  if ( a5 == -1 )
    v13 = 0LL;
  result = (struct _HAM_TERMINATION_HOST_BLOCK *)(a5 + (unsigned int)v15);
  v25 = a5 + v15;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v14 = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v14 )
  {
    do
    {
      v17 = *v14;
      HampHostAcquireLockSharedEx(*v14);
      v19 = v14 + 1;
      do
      {
        CempLockTrackerMarkReleased(HampLockTrackerId, v18, 1u);
        RtlReleaseSRWLockShared(v17);
        if ( v13 )
        {
          v20 = (unsigned int)(v25 - v15);
          if ( (unsigned int)v20 >= a5 )
            v23 = 0LL;
          else
            v23 = -10000 * v20;
        }
        RtlWaitOnAddress((char *)v17 + 816, v19, 8LL);
        if ( a5 == -1 )
        {
          v21 = 0;
        }
        else
        {
          RtlQueryUnbiasedInterruptTime(&v22);
          LODWORD(v15) = v22 / 0x2710;
          v21 = v25 - (int)v15 > a5;
        }
        HampHostAcquireLockSharedEx(v17);
      }
      while ( *v19 == *((_QWORD *)v17 + 102) && !v21 );
      CempLockTrackerMarkReleased(HampLockTrackerId, v18, 1u);
      RtlReleaseSRWLockShared(v17);
      result = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
      v14 = (struct _RM_HAM_ACTIVITY_HOST **)result;
    }
    while ( result );
  }
  return result;
}
