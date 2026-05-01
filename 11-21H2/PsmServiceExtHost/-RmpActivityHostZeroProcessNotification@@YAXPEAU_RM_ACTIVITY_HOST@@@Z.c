/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180002D00 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001CAB0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001D7C0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180041FFC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800874A8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008FA78 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(char *P)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  char *v6; // rcx
  DWORD v7; // ebp
  _QWORD *Value; // rsi
  __int64 *v9; // rax
  __int64 v10; // rdx
  ExecutionModel::ExternalResourceSet *v12; // rsi
  char *v13; // rcx
  __int64 v14; // rax
  char **v15; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 6) + 3232LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v12 = (ExecutionModel::ExternalResourceSet *)v3[4];
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = (char *)*((_QWORD *)v12 + 167);
    v3 = (_QWORD *)*v3;
    if ( P == v13 )
    {
      if ( v13 )
      {
        RmpObjectRelease(v13);
        *((_QWORD *)v12 + 167) = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v12 + 56LL))(v12) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v12);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v12, 1);
    }
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_QWORD *)P + 172) = 0LL;
  *((_QWORD *)P + 173) = 0LL;
  *((_DWORD *)P + 348) = 0;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)P, 2u);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)P, 2u);
  QueryUnbiasedInterruptTime((PULONGLONG)P + 184);
  if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)P) )
    SetEvent(*(HANDLE *)(*((_QWORD *)P + 7) + 88LL));
  *((_QWORD *)P + 153) = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)P + 6) + 3232LL);
  v5 = *(_DWORD *)(v4 + 160);
  if ( (v5 & 3) == 0 )
  {
    *(_DWORD *)(v4 + 160) = v5 | 1;
    TpPostWork(*(_QWORD *)(v4 + 144));
  }
  if ( (P[852] & 1) == 0 )
    RmpActivityHostComputeAndApplyEnforcementSettings(P);
  v6 = P + 1288;
  if ( *((_QWORD *)P + 161) && *((_QWORD *)P + 162) )
  {
    v14 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v15 = (char **)*((_QWORD *)P + 162), *v15 != v6) )
      __fastfail(3u);
    *v15 = (char *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_OWORD *)v6 = 0LL;
    RmpObjectRelease(P);
  }
  if ( *((_QWORD *)P + 180) )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)P + 7) + 80LL));
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(P + 64);
  *((_DWORD *)P + 18) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)P) )
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(P + 64), 1u);
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      __int2c();
    if ( v9[2]-- == 1 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)P + 18) = 0;
  RtlReleaseSRWLockExclusive(P + 64);
}
