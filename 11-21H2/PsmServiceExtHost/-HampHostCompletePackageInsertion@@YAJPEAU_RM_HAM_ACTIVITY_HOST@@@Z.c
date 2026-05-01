/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAD4
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023880 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180007674 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180039A1C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180039BFC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003ED3C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180074354 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007B11C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  DWORD v2; // ebp
  __int64 v4; // r14
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v7; // ebp
  _QWORD *v8; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v18; // rcx
  __int64 v19; // r8
  __int64 j; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // edx
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8

  v1 = *((_QWORD *)a1 + 99);
  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(v1 + 88);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v7 = HampLockTrackerId;
  dword_1800DD4E8 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v8 |= 0x20uLL;
    ++v8[6];
  }
  RtlAcquireSRWLockExclusive(v1 + 584);
  *(_DWORD *)(v1 + 592) = GetCurrentThreadId();
  v9 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v9 && (unsigned int)RmHamHostReferenceUnsafe(v9) )
    v10 = *(_QWORD *)(v1 + 568);
  else
    v10 = 0LL;
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(HampLockTrackerId, v11, 0LL);
  v12 = *(_QWORD **)(v1 + 608);
  v13 = (_QWORD *)((char *)a1 + 824);
  if ( *v12 != v1 + 600 )
    __fastfail(3u);
  *v13 = v1 + 600;
  *((_QWORD *)a1 + 104) = v12;
  *v12 = v13;
  *(_QWORD *)(v1 + 608) = v13;
  if ( *((_DWORD *)a1 + 140) != 2 )
    goto LABEL_13;
  if ( *((_BYTE *)a1 + 592) )
  {
    if ( !*(_QWORD *)(v1 + 576) )
    {
      *(_QWORD *)(v1 + 576) = a1;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      goto LABEL_15;
    }
    MicrosoftTelemetryAssertTriggeredNoArgs();
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
    v28 = 4867LL;
    goto LABEL_51;
  }
  if ( *(_QWORD *)(v1 + 568) )
  {
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
    v28 = 4864LL;
LABEL_51:
    HampAppQueueTerminate(v1, v27, v28);
    v14 = -1058275322;
    goto LABEL_16;
  }
  *(_QWORD *)(v1 + 568) = a1;
LABEL_13:
  CempLockTrackerMarkReleased(HampLockTrackerId, v12, 5LL);
  *(_DWORD *)(v1 + 592) = 0;
  RtlReleaseSRWLockExclusive(v1 + 584);
  if ( *((_DWORD *)a1 + 140) != 2 )
  {
    if ( !v10 )
      goto LABEL_15;
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 100) = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)v10);
    HampHostReleaseLockExclusiveEx(a1, v23);
LABEL_31:
    RmpReleaseGlobalLock();
    goto LABEL_15;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v17) )
  {
    v17 = i;
    if ( !i )
      break;
    if ( *((_BYTE *)i + 592) != 1 && *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v17, 0);
      *((_QWORD *)v17 + 100) = RmHamHostReference(a1);
      HampHostReleaseLockExclusiveEx(v17, v24);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_QWORD *)(v4 + 328) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    v19 = 0LL;
    for ( j = v4; ; j = *(_QWORD *)(*(_QWORD *)(v22 + 792) + 88LL) )
    {
      v21 = HampHostEnumerateHostsInNode(j, 3LL, v19);
      v22 = v21;
      if ( !v21 )
        break;
      if ( (struct _RM_HAM_ACTIVITY_HOST *)v21 != a1
        && *(_BYTE *)(v21 + 592) != 1
        && *(_DWORD *)(v21 + 560) == 2
        && !*(_QWORD *)(v21 + 712) )
      {
        v14 = HampDepGroupAddPpleDependency((struct _RM_HAM_ACTIVITY_HOST *)v21, a1);
        if ( v14 < 0 )
          goto LABEL_16;
      }
      v19 = v22;
    }
    goto LABEL_15;
  }
  if ( *((_QWORD *)a1 + 89) )
  {
LABEL_15:
    v14 = 0;
    goto LABEL_16;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v18 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 328);
  if ( !v18 || !(unsigned int)RmHamHostReferenceUnsafe(v18) )
  {
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    goto LABEL_31;
  }
  v26 = *(_QWORD *)(v4 + 328);
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
  RmpReleaseGlobalLock();
  v14 = HampDepGroupAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v26);
  if ( v14 >= 0 )
    v14 = 0;
  if ( v26 )
  {
    RmpAcquireGlobalLock();
    v25 = (*(_QWORD *)(v26 + 600))-- == 1LL;
    if ( v25 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v26 - 64));
    RmpReleaseGlobalLock();
  }
LABEL_16:
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v25 = (*(_QWORD *)(v10 + 600))-- == 1LL;
    if ( v25 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v10 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v14;
}
