/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x1800135A4 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     PsmHamGetPackageDebugMode @ 0x180028240 (PsmHamGetPackageDebugMode.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x1800363E8 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800722DC (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800724D0 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180072C14 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x18007ED58 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x18000C760 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18000F420 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180010E90 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, const wchar_t *a2)
{
  void *v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rax
  int v14; // ebp
  int v15; // eax
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  bool v19; // zf
  signed __int64 v20; // rtt
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  bool v23; // zf
  signed __int64 v24; // rtt
  unsigned __int64 v26; // r14
  signed __int64 v27; // rax
  bool v28; // cc
  signed __int64 v29; // rax
  unsigned __int64 v30; // rbx
  signed __int64 v31; // rbp
  signed __int64 v32; // rbp

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 392;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v5 = *(_QWORD *)v3;
  v6 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v5 )
    {
LABEL_3:
      RtlReleaseSRWLockShared(v3 + 16);
      return 0LL;
    }
    v5 ^= v3;
  }
  if ( !v5 )
    goto LABEL_3;
  do
  {
    v8 = HampSessionCompareById(v2, (_DWORD *)v5);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v5;
      if ( v6 && v9 )
        goto LABEL_37;
      goto LABEL_8;
    }
    if ( v8 <= 0 )
      break;
    v9 = *(_QWORD *)(v5 + 8);
    if ( v6 && v9 )
    {
LABEL_37:
      v5 ^= v9;
      continue;
    }
LABEL_8:
    v5 = v9;
  }
  while ( v5 );
  if ( !v5 || !*(_QWORD *)(v5 + 24) )
    goto LABEL_3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v3 + 16);
  RtlAcquireSRWLockShared(v5 + 56);
  v10 = *(_QWORD *)(v5 + 40);
  v11 = *(_BYTE *)(v5 + 48) & 1;
  if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
  {
    if ( v10 )
    {
      v10 ^= v5 + 40;
      goto LABEL_14;
    }
    goto LABEL_57;
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_57;
  do
  {
    v12 = HampUserCompareByIdentity((void *)(a2 + 66), (char *)v10);
    if ( v12 < 0 )
    {
      v13 = *(_QWORD *)v10;
      if ( v11 && v13 )
        goto LABEL_43;
      goto LABEL_17;
    }
    if ( v12 <= 0 )
      break;
    v13 = *(_QWORD *)(v10 + 8);
    if ( v11 && v13 )
    {
LABEL_43:
      v10 ^= v13;
      continue;
    }
LABEL_17:
    v10 = v13;
  }
  while ( v10 );
  if ( !v10 || !*(_QWORD *)(v10 + 24) )
  {
LABEL_57:
    RtlReleaseSRWLockShared(v5 + 56);
    v7 = 0LL;
    v10 = 0LL;
    goto LABEL_51;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v5 + 56);
  RtlAcquireSRWLockShared(v10 + 56);
  v7 = *(_QWORD *)(v10 + 40);
  v14 = *(_BYTE *)(v10 + 48) & 1;
  if ( (*(_BYTE *)(v10 + 48) & 1) != 0 )
  {
    if ( v7 )
    {
      v7 ^= v10 + 40;
      goto LABEL_23;
    }
    goto LABEL_50;
  }
LABEL_23:
  if ( !v7 )
    goto LABEL_50;
  do
  {
    v15 = HampPkgCompareByIdentity(a2, (const wchar_t *)v7);
    if ( v15 < 0 )
    {
      v16 = *(_QWORD *)v7;
      if ( v14 && v16 )
        goto LABEL_49;
      goto LABEL_26;
    }
    if ( v15 <= 0 )
      break;
    v16 = *(_QWORD *)(v7 + 8);
    if ( v14 && v16 )
    {
LABEL_49:
      v7 ^= v16;
      continue;
    }
LABEL_26:
    v7 = v16;
  }
  while ( v7 );
  if ( !v7 || !*(_QWORD *)(v7 + 24) )
  {
LABEL_50:
    RtlReleaseSRWLockShared(v10 + 56);
    v7 = 0LL;
    goto LABEL_51;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v10 + 56);
LABEL_51:
  _m_prefetchw((const void *)(v5 + 24));
  v17 = *(_QWORD *)(v5 + 24);
  v18 = v17 - 1;
  v19 = v17 == 1;
  if ( v17 - 1 <= 0 )
  {
LABEL_67:
    if ( !v19 )
      __fastfail(0xEu);
    v26 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_QWORD *)(v5 + 16) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(__int64))(v26 + 24))(v5);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v26 + 16);
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      v28 = v27 <= 1;
      v29 = v27 - 1;
      if ( v28 )
      {
        if ( v29 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v26 + 16);
        (*(void (__fastcall **)(__int64))(v26 + 24))(v5);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v26 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v20 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v18, v17);
      if ( v20 == v17 )
        break;
      v18 = v17 - 1;
      v19 = v17 == 1;
      if ( v17 - 1 <= 0 )
        goto LABEL_67;
    }
  }
  if ( v10 )
  {
    _m_prefetchw((const void *)(v10 + 24));
    v21 = *(_QWORD *)(v10 + 24);
    v22 = v21 - 1;
    v23 = v21 == 1;
    if ( v21 - 1 <= 0 )
    {
LABEL_79:
      if ( !v23 )
        __fastfail(0xEu);
      v30 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(v10 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(v10 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(__int64))(v30 + 24))(v10);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v30 + 16);
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v28 = v31 <= 1;
        v32 = v31 - 1;
        if ( v28 )
        {
          if ( v32 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v30 + 16);
          (*(void (__fastcall **)(__int64))(v30 + 24))(v10);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v30 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v24 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v22, v21);
        if ( v24 == v21 )
          break;
        v22 = v21 - 1;
        v23 = v21 == 1;
        if ( v21 - 1 <= 0 )
          goto LABEL_79;
      }
    }
  }
  return (struct _HAM_PACKAGE *)v7;
}
