/*
 * XREFs of ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800191D0 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180019944 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034730 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180037888 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgPushUpdate(struct _HAM_PACKAGE *a1)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  DWORD v8; // ebp
  _QWORD *v9; // rsi
  int v10; // eax
  DWORD v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = HampLockTrackerId;
  v16 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 304);
  *((_DWORD *)a1 + 78) = GetCurrentThreadId();
  v4 = *((_DWORD *)a1 + 85) | 0x20;
  *((_DWORD *)a1 + 85) = v4;
  if ( (v4 & 0x10) != 0 )
  {
LABEL_25:
    if ( HampLockTrackerId != -1 )
    {
      v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v15 = *v14;
      if ( (*v14 & 0x40) == 0 )
        __int2c();
      v7 = v14[7]-- == 1;
      if ( v7 )
        *v14 = v15 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *((_DWORD *)a1 + 78) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 304);
    goto LABEL_31;
  }
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 0x40) == 0 )
      __int2c();
    v7 = v5[7]-- == 1;
    if ( v7 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
  if ( (int)TpAllocWork(
              &v16,
              HampPkgUpdateWorker,
              a1,
              (*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
            + 584) >= 0 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v9 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v9 |= 0x40uLL;
      ++v9[7];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 304);
    *((_DWORD *)a1 + 78) = GetCurrentThreadId();
    v10 = *((_DWORD *)a1 + 85);
    if ( (v10 & 0x10) == 0 )
    {
      v11 = HampLockTrackerId;
      *((_DWORD *)a1 + 85) = v10 | 0x10;
      if ( v11 != -1 )
      {
        v12 = (__int64 *)TlsGetValue(v11);
        v13 = *v12;
        if ( (*v12 & 0x40) == 0 )
          __int2c();
        v7 = v12[7]-- == 1;
        if ( v7 )
          *v12 = v13 & 0xFFFFFFFFFFFFFFBFuLL;
      }
      *((_DWORD *)a1 + 78) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      TpPostWork(v16);
      goto LABEL_31;
    }
    goto LABEL_25;
  }
LABEL_31:
  if ( v16 )
    TpReleaseWork(v16);
}
