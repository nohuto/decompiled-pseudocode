/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001A7B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C840 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ADB8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003ADCC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800500A4 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180055918 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008B6B0 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  ExecutionModel::ExternalResourceSet *v4; // rsi
  struct _RM_OBJECT_HEADER *v5; // rcx
  char *v6; // rcx
  __int64 v7; // rdx
  char **v8; // rax
  DWORD v9; // ebp
  _QWORD *Value; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 3536LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = (ExecutionModel::ExternalResourceSet *)v3[4];
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)v4 + 167);
    v3 = (_QWORD *)*v3;
    if ( a1 == v5 )
    {
      if ( v5 )
      {
        RmpObjectRelease(v5);
        *((_QWORD *)v4 + 167) = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 56LL))(v4) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v4);
      else
        ExecutionModel::ExternalResourceSet::Revoke(v4, 1);
    }
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)a1 + 173) = 0LL;
  *((_QWORD *)a1 + 174) = 0LL;
  *((_DWORD *)a1 + 350) = 0;
  RmpActivityHostResourceSetsChanged(a1);
  v6 = (char *)a1 + 1296;
  if ( *((_QWORD *)a1 + 162) && *((_QWORD *)a1 + 163) )
  {
    v7 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (char **)*((_QWORD *)a1 + 163), *v8 != v6) )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_OWORD *)v6 = 0LL;
    RmpObjectRelease(a1);
  }
  if ( *((_QWORD *)a1 + 178) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 80LL));
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 64);
  *((_DWORD *)a1 + 18) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete(a1) )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    {
      v17 = *((_QWORD *)a1 + 4);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v11,
        (unsigned int)&unk_1800C406D,
        v12,
        v13,
        (__int64)&v17);
    }
    HampHostCheckQueueStateWorker((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 1u);
  }
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      __int2c();
    if ( v14[2]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 18) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
}
