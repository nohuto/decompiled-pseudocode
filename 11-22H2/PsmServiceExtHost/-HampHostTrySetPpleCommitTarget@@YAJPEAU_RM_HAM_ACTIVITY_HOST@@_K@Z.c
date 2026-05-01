/*
 * XREFs of ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180070448
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x1800849B8 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014438 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D540 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003D080 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006EF64 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall HampHostTrySetPpleCommitTarget(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rsi
  int CanStaticallyDonateCommit; // ebx
  int v6; // ebp
  struct _HAM_ACTIVITY *i; // rax
  __int64 v8; // rax
  struct _HAM_ACTIVITY *v9; // rcx
  __int64 v12; // rbx
  int Host; // eax
  __int64 v14; // rax
  struct _HAM_DEPENDENCY_GROUP *v15; // r14
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) == 0 )
    return (unsigned int)-1073700845;
  if ( a2 == -1 )
    return (unsigned int)-1073741584;
  if ( a2 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v9) )
    {
      v9 = i;
      if ( !i )
        goto LABEL_12;
      v8 = *((_QWORD *)i + 9);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 40) == 2 )
          break;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL);
    if ( v12 == -1 )
    {
LABEL_12:
      CanStaticallyDonateCommit = -1058275323;
      goto LABEL_13;
    }
    HampHostReleaseLockExclusiveEx(a1);
    v6 = 0;
    Host = RmHamFindHost(
             (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    + 120)
                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
           - 392,
             v12,
             0LL,
             &v16);
    v2 = v16;
    CanStaticallyDonateCommit = Host;
    if ( Host >= 0 )
    {
      v6 = 1;
      HampHostAcquireTwoLocksExclusive(v16, a1);
      v14 = *((_QWORD *)v2 + 89);
      if ( v14 )
      {
        if ( *(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)v14 + 80LL) == a1 )
        {
          CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(v2, a2);
          if ( CanStaticallyDonateCommit >= 0 )
          {
            *((_QWORD *)a1 + 120) = a2;
            HampHostCheckQueueStateWorker(a1, 0);
            CanStaticallyDonateCommit = 0;
          }
        }
        else
        {
          CanStaticallyDonateCommit = -1058275322;
        }
      }
      else
      {
        CanStaticallyDonateCommit = -1058275323;
      }
    }
    if ( v2 )
      HampHostReleaseLockExclusiveEx(v2);
    if ( CanStaticallyDonateCommit < 0 )
      goto LABEL_34;
    if ( !v6 )
      HampHostAcquireLockExclusiveEx(a1, 0);
  }
  else
  {
    v6 = 1;
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 120) = 0LL;
    CanStaticallyDonateCommit = 0;
  }
  v15 = HampHostCheckEnterDependencyWorker(a1);
  if ( !v15 )
  {
LABEL_34:
    if ( v6 )
LABEL_13:
      HampHostReleaseLockExclusiveEx(a1);
    goto LABEL_14;
  }
  HampHostReleaseLockExclusiveEx(a1);
  HampDepGroupRunStateChangeWorker(v15);
LABEL_14:
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v2 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v2 - 64) & -(__int64)(v2 != 0LL)));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)CanStaticallyDonateCommit;
}
