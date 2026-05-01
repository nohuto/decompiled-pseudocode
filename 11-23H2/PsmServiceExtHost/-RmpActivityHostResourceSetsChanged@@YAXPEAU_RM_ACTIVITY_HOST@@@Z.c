/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800500A4
 * Callers:
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015468 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180050E70 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C670 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D3D0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FED0 (-RmpActivityHostComputeDigest@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1)
{
  __int16 v1; // bx
  __int16 v3; // ax
  __int64 v4; // rcx
  int v5; // ebx
  __int16 v6; // ax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *((_WORD *)a1 + 592);
  v3 = RmpActivityHostComputeDigest((__int64)a1);
  *((_WORD *)a1 + 592) = v3;
  v4 = *((_QWORD *)a1 + 7);
  v5 = v1 & 0x80;
  if ( v5 )
  {
    v6 = v3 & 0x80;
    if ( !v6 )
    {
      --*(_DWORD *)(v4 + 212);
      goto LABEL_8;
    }
  }
  else
  {
    v6 = v3 & 0x80;
  }
  if ( !v5 && v6 )
    ++*(_DWORD *)(v4 + 212);
LABEL_8:
  HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  v7 = *((_DWORD *)a1 + 186);
  HampHostReleaseLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), v8);
  *((_DWORD *)a1 + 364) = v7;
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 181);
  if ( RmpActivityHostIsRevocable(a1) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 88LL));
  v9 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 154) = 0LL;
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v9 + 3536));
}
