/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009660
 * Callers:
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007348 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     PsmHamGetPackageDebugMode @ 0x180009390 (PsmHamGetPackageDebugMode.c)
 *     ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18002D468 (-HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHO.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18006FCF8 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18006FEEC (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180070D48 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180072564 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x180078AD4 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x1800386C0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18003A5D0 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x18003C2C0 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  void *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rtt
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rtt
  unsigned __int64 v19; // rsi
  int v20; // ebp
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // ebp
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r14
  signed __int64 v27; // rax
  bool v28; // cc
  signed __int64 v29; // rax
  unsigned __int64 v30; // rdi
  signed __int64 v31; // rbp
  signed __int64 v32; // rbp

  v2 = (void *)*((unsigned int *)a2 + 50);
  v3 = (unsigned __int64)a1 + 168;
  RtlAcquireSRWLockShared((char *)a1 + 184);
  v5 = *(_QWORD *)v3;
  v6 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_9;
    v5 ^= v3;
  }
  if ( !v5 )
    goto LABEL_9;
  while ( 1 )
  {
    v7 = HampSessionCompareById(v2, (void *)v5);
    if ( v7 < 0 )
    {
      v8 = *(_QWORD *)v5;
      if ( v6 && v8 )
        goto LABEL_15;
      goto LABEL_7;
    }
    if ( v7 <= 0 )
      break;
    v8 = *(_QWORD *)(v5 + 8);
    if ( v6 && v8 )
    {
LABEL_15:
      v5 ^= v8;
      goto LABEL_8;
    }
LABEL_7:
    v5 = v8;
LABEL_8:
    if ( !v5 )
      goto LABEL_9;
  }
  if ( !*(_QWORD *)(v5 + 24) )
  {
LABEL_9:
    RtlReleaseSRWLockShared(v3 + 16);
    return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v3 + 16);
  RtlAcquireSRWLockShared(v5 + 56);
  v19 = *(_QWORD *)(v5 + 40);
  v20 = *(_BYTE *)(v5 + 48) & 1;
  if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
  {
    if ( v19 )
    {
      v19 ^= v5 + 40;
      goto LABEL_27;
    }
    goto LABEL_32;
  }
LABEL_27:
  if ( !v19 )
    goto LABEL_32;
  while ( 1 )
  {
    v21 = HampUserCompareByIdentity((char *)a2 + 132, (void *)v19);
    if ( v21 < 0 )
    {
      v22 = *(_QWORD *)v19;
      if ( v20 && v22 )
        goto LABEL_38;
      goto LABEL_30;
    }
    if ( v21 <= 0 )
      break;
    v22 = *(_QWORD *)(v19 + 8);
    if ( v20 && v22 )
    {
LABEL_38:
      v19 ^= v22;
      goto LABEL_31;
    }
LABEL_30:
    v19 = v22;
LABEL_31:
    if ( !v19 )
      goto LABEL_32;
  }
  if ( !*(_QWORD *)(v19 + 24) )
  {
LABEL_32:
    RtlReleaseSRWLockShared(v5 + 56);
    v9 = 0LL;
    v19 = 0LL;
    goto LABEL_18;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v5 + 56);
  RtlAcquireSRWLockShared(v19 + 56);
  v9 = *(_QWORD *)(v19 + 40);
  v23 = *(_BYTE *)(v19 + 48) & 1;
  if ( (*(_BYTE *)(v19 + 48) & 1) != 0 )
  {
    if ( v9 )
    {
      v9 ^= v19 + 40;
      goto LABEL_44;
    }
    goto LABEL_17;
  }
LABEL_44:
  if ( !v9 )
    goto LABEL_17;
  while ( 1 )
  {
    v24 = HampPkgCompareByIdentity(a2, (void *)v9);
    if ( v24 < 0 )
    {
      v25 = *(_QWORD *)v9;
      if ( v23 && v25 )
        goto LABEL_55;
      goto LABEL_47;
    }
    if ( v24 <= 0 )
      break;
    v25 = *(_QWORD *)(v9 + 8);
    if ( v23 && v25 )
    {
LABEL_55:
      v9 ^= v25;
      goto LABEL_48;
    }
LABEL_47:
    v9 = v25;
LABEL_48:
    if ( !v9 )
      goto LABEL_17;
  }
  if ( !*(_QWORD *)(v9 + 24) )
  {
LABEL_17:
    RtlReleaseSRWLockShared(v19 + 56);
    v9 = 0LL;
    goto LABEL_18;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v19 + 56);
LABEL_18:
  _m_prefetchw((const void *)(v5 + 24));
  v10 = *(_QWORD *)(v5 + 24);
  v11 = v10 - 1;
  v12 = v10 == 1;
  if ( v10 - 1 <= 0 )
  {
LABEL_65:
    if ( !v12 )
      __fastfail(0xEu);
    v26 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_QWORD *)(v5 + 16) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 24)) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(unsigned __int64))(v26 + 24))(v5);
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
        (*(void (__fastcall **)(unsigned __int64))(v26 + 24))(v5);
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
      v13 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v11, v10);
      if ( v13 == v10 )
        break;
      v11 = v10 - 1;
      v12 = v10 == 1;
      if ( v10 - 1 <= 0 )
        goto LABEL_65;
    }
  }
  if ( v19 )
  {
    _m_prefetchw((const void *)(v19 + 24));
    v14 = *(_QWORD *)(v19 + 24);
    v15 = v14 - 1;
    v16 = v14 == 1;
    if ( v14 - 1 <= 0 )
    {
LABEL_77:
      if ( !v16 )
        __fastfail(0xEu);
      v30 = *(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(v19 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(v19 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(unsigned __int64))(v30 + 24))(v19);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v30 + 16);
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v28 = v31 <= 1;
        v32 = v31 - 1;
        if ( v28 )
        {
          if ( v32 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v30 + 16);
          (*(void (__fastcall **)(unsigned __int64))(v30 + 24))(v19);
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
        v17 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v15, v14);
        if ( v17 == v14 )
          break;
        v15 = v14 - 1;
        v16 = v14 == 1;
        if ( v14 - 1 <= 0 )
          goto LABEL_77;
      }
    }
  }
  return (struct _HAM_PACKAGE *)v9;
}
