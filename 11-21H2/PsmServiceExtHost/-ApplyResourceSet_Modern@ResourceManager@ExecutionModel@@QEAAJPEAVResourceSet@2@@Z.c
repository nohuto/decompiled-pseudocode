/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18002AB6C (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18008E3CC (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001D7C0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028940 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v2; // rdi
  char *v3; // rsi
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v2 = *((_QWORD *)a2 + 165);
  v3 = (char *)a2 + 1296;
  v6 = *((_QWORD *)a2 + 162);
  if ( *(char **)(v6 + 8) != v3 )
    goto LABEL_12;
  v7 = (char **)*((_QWORD *)v3 + 1);
  if ( *v7 != v3 )
    goto LABEL_12;
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_OWORD *)v3 = 0LL;
  --*(_DWORD *)(v2 + 1144);
  v8 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 332) = 2;
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(v8 + 16))(a2);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL))(a2);
  v9 = *((_QWORD *)a2 + 165);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = (_DWORD *)(v9 + 1152);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = *(_QWORD *)v10;
  if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 )
LABEL_12:
    __fastfail(3u);
  *(_QWORD *)v3 = v11;
  *((_QWORD *)v3 + 1) = v10;
  *(_QWORD *)(v11 + 8) = v3;
  *(_QWORD *)v10 = v3;
  ++v10[4];
  *((_DWORD *)a2 + 332) = 1;
  *((_BYTE *)a2 + 12) = 1;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v2, 3);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, 3);
  QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1472));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
  *(_QWORD *)(v2 + 1224) = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 3232LL);
  v13 = *(_DWORD *)(v12 + 160);
  if ( (v13 & 3) == 0 )
  {
    *(_DWORD *)(v12 + 160) = v13 | 1;
    TpPostWork(*(_QWORD *)(v12 + 144));
  }
  if ( (*(_BYTE *)(v2 + 852) & 1) == 0 )
  {
    v14 = RmpActivityHostComputeAndApplyEnforcementSettings((PVOID)v2);
    if ( v14 < 0 )
      return v14 | 0x10000000;
  }
  ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this, (struct _RM_ACTIVITY_HOST *)v2);
  return 0;
}
