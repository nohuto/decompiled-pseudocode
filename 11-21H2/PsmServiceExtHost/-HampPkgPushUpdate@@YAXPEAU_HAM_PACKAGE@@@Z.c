/*
 * XREFs of ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E420 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180034AB8 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgPushUpdate(struct _HAM_PACKAGE *a1)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  DWORD v7; // ebp
  _QWORD *v8; // rsi
  int v9; // eax
  DWORD v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = HampLockTrackerId;
  v15 = 0LL;
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
  *((_DWORD *)a1 + 85) |= 0x10u;
  if ( (*((_BYTE *)a1 + 340) & 8) != 0 )
  {
LABEL_27:
    if ( HampLockTrackerId != -1 )
    {
      v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v14 = *v13;
      if ( (*v13 & 0x40) == 0 )
        __int2c();
      v6 = v13[7]-- == 1;
      if ( v6 )
        *v13 = v14 & 0xFFFFFFFFFFFFFFBFuLL;
    }
    *((_DWORD *)a1 + 78) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 304);
    goto LABEL_24;
  }
  if ( HampLockTrackerId != -1 )
  {
    v4 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v5 = *v4;
    if ( (*v4 & 0x40) == 0 )
      __int2c();
    v6 = v4[7]-- == 1;
    if ( v6 )
      *v4 = v5 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
  if ( (int)TpAllocWork(&v15, HampPkgUpdateWorker, a1, 0LL) >= 0 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v8 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v8 |= 0x40uLL;
      ++v8[7];
    }
    RtlAcquireSRWLockExclusive((char *)a1 + 304);
    *((_DWORD *)a1 + 78) = GetCurrentThreadId();
    v9 = *((_DWORD *)a1 + 85);
    if ( (v9 & 8) == 0 )
    {
      v10 = HampLockTrackerId;
      *((_DWORD *)a1 + 85) = v9 | 8;
      if ( v10 != -1 )
      {
        v11 = (__int64 *)TlsGetValue(v10);
        v12 = *v11;
        if ( (*v11 & 0x40) == 0 )
          __int2c();
        v6 = v11[7]-- == 1;
        if ( v6 )
          *v11 = v12 & 0xFFFFFFFFFFFFFFBFuLL;
      }
      *((_DWORD *)a1 + 78) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      TpPostWork(v15);
      goto LABEL_24;
    }
    goto LABEL_27;
  }
LABEL_24:
  if ( v15 )
    TpReleaseWork(v15);
}
