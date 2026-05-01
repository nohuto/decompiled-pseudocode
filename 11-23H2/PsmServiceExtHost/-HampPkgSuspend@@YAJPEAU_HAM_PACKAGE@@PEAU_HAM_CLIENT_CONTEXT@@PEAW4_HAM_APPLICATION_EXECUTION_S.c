/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007EEA8
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007383C (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18003600C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EE30 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F144 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F51C (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18006F1B0 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F27C (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EC0C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EE70 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  struct _HAM_APPLICATION *First; // rax
  int v9; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rsi
  struct _HAM_RC_TREE_NODE *v13; // rdi
  int v14; // edx
  struct _RM_HAM_ACTIVITY_HOST **Next; // rax
  struct _RM_HAM_ACTIVITY_HOST **v16; // rcx
  struct _RM_HAM_ACTIVITY_HOST **v17; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]

  v19 = 0LL;
  v20 = 0LL;
  HampPkgAcquireLockShared(a1, (__int64)a2);
  v6 = (*((_DWORD *)a1 + 86) >> 5) & 7;
  HampPkgReleaseLockShared(a1, v7);
  First = HamRcNodeGetFirst(a1, 1);
  v9 = 0;
  while ( 1 )
  {
    v13 = First;
    if ( !First )
      break;
    v10 = HampAppTryReferenceMixedHost(First);
    v11 = v10;
    if ( v10 )
    {
      v9 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v19, v10);
      if ( v9 >= 0 )
        v9 = 0;
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v11 + 75))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v11 - 64));
      RmpReleaseGlobalLock();
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741275 )
        goto LABEL_22;
      v9 = 0;
    }
    First = HamRcNodeGetSuccessor(a1, v13);
  }
  v14 = DWORD2(v19);
  Next = 0LL;
  v16 = (struct _RM_HAM_ACTIVITY_HOST **)v19;
  if ( DWORD2(v19) )
  {
    Next = (struct _RM_HAM_ACTIVITY_HOST **)v19;
    LODWORD(v20) = 1;
  }
  if ( Next )
  {
    do
    {
      HampHostDebugQueueSuspend(*Next, a2);
      Next = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v19);
    }
    while ( Next );
    v14 = DWORD2(v19);
    v16 = (struct _RM_HAM_ACTIVITY_HOST **)v19;
  }
  v17 = 0LL;
  if ( v14 )
  {
    v17 = v16;
    LODWORD(v20) = 1;
  }
  while ( v17 )
  {
    HampHostDebugWaitForSuspendComplete(*v17);
    v17 = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v19);
  }
  *(_DWORD *)a3 = v6;
LABEL_22:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v19);
  return (unsigned int)v9;
}
