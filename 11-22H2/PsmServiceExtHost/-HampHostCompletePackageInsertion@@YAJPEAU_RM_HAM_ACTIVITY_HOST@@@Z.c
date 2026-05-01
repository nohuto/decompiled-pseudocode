/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800371DC
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DAA4 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18002F170 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015710 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180017754 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800186E0 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001B1F0 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800375EC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376F4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037730 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007C56C (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F7CC (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008FAA4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  DWORD v3; // ebp
  __int64 v5; // r14
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v8; // ebp
  _QWORD *v9; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v10; // rcx
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // rdx
  int v20; // ebx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v23; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v24; // rcx
  __int64 v25; // r8
  __int64 j; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8

  v1 = *((_QWORD *)a1 + 99);
  v2 = 0LL;
  v3 = HampLockTrackerId;
  v5 = *(_QWORD *)(v1 + 88);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v3) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v8 = HampLockTrackerId;
  dword_1800DC590 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v9 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v9 |= 0x20uLL;
    ++v9[6];
  }
  RtlAcquireSRWLockExclusive(v1 + 584);
  *(_DWORD *)(v1 + 592) = GetCurrentThreadId();
  v10 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v10 && (unsigned int)RmHamHostReferenceUnsafe(v10) )
    v11 = *(_QWORD *)(v1 + 568);
  else
    v11 = 0LL;
  dword_1800DC590 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 1) == 0 )
      __int2c();
    v14 = v12[1]-- == 1;
    if ( v14 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v15 = *(_QWORD **)(v1 + 608);
  v16 = (_QWORD *)((char *)a1 + 824);
  if ( *v15 != v1 + 600 )
    __fastfail(3u);
  *v16 = v1 + 600;
  *((_QWORD *)a1 + 104) = v15;
  v17 = 624LL;
  *v15 = v16;
  *(_QWORD *)(v1 + 608) = v16;
  if ( a1 )
    v17 = (__int64)a1 + 560;
  if ( *(_DWORD *)v17 == 2 )
  {
    if ( *((_BYTE *)a1 + 592) )
    {
      if ( !*(_QWORD *)(v1 + 576) )
      {
        *(_QWORD *)(v1 + 576) = a1;
        HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
        goto LABEL_28;
      }
      MicrosoftTelemetryAssertTriggeredNoArgs();
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      v30 = 4867LL;
    }
    else
    {
      if ( !*(_QWORD *)(v1 + 568) )
      {
        *(_QWORD *)(v1 + 568) = a1;
        goto LABEL_20;
      }
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      v30 = 4864LL;
    }
    HampAppQueueTerminate(v1, v29, v30);
    v20 = -1058275322;
    goto LABEL_29;
  }
LABEL_20:
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 0x20) == 0 )
      __int2c();
    v14 = v18[6]-- == 1;
    if ( v14 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *(_DWORD *)(v1 + 592) = 0;
  RtlReleaseSRWLockExclusive(v1 + 584);
  if ( *(_DWORD *)v17 != 2 )
  {
    if ( v11 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)a1 + 100) = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)v11);
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
    }
    goto LABEL_28;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v23) )
  {
    v23 = i;
    if ( !i )
      break;
    if ( *((_BYTE *)i + 592) != 1 && *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v23, 0);
      *((_QWORD *)v23 + 100) = RmHamHostReference(a1);
      HampHostReleaseLockExclusiveEx(v23);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) == 0 )
  {
    if ( !*((_QWORD *)a1 + 89) )
    {
      RmpAcquireGlobalLock();
      HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v5);
      v24 = *(struct _RM_HAM_ACTIVITY_HOST **)(v5 + 328);
      if ( !v24 || !(unsigned int)RmHamHostReferenceUnsafe(v24) )
      {
        v20 = 0;
        HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v5);
LABEL_44:
        RmpReleaseGlobalLock();
        goto LABEL_29;
      }
      v2 = *(_QWORD *)(v5 + 328);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v5);
      RmpReleaseGlobalLock();
      v20 = HampDepGroupAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v2);
      if ( v20 < 0 )
        goto LABEL_50;
      goto LABEL_49;
    }
LABEL_28:
    v20 = 0;
    goto LABEL_29;
  }
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v5);
  *(_QWORD *)(v5 + 328) = a1;
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v5);
  v25 = 0LL;
  for ( j = v5; ; j = *(_QWORD *)(*(_QWORD *)(v28 + 792) + 88LL) )
  {
    v27 = HampHostEnumerateHostsInNode(j, 3LL, v25);
    v28 = v27;
    if ( !v27 )
      break;
    if ( *(_BYTE *)(v27 + 592) != 1
      && (struct _RM_HAM_ACTIVITY_HOST *)v27 != a1
      && *(_DWORD *)(v27 + 560) == 2
      && !*(_QWORD *)(v27 + 712) )
    {
      v20 = HampDepGroupAddPpleDependency((struct _RM_HAM_ACTIVITY_HOST *)v27, a1);
      if ( v20 < 0 )
        goto LABEL_29;
    }
    v25 = v28;
  }
LABEL_49:
  v20 = 0;
LABEL_50:
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    v14 = (*(_QWORD *)(v2 + 600))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v2 - 64));
    goto LABEL_44;
  }
LABEL_29:
  if ( v11 )
  {
    RmpAcquireGlobalLock();
    v14 = (*(_QWORD *)(v11 + 600))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v11 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v20;
}
