/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800146E8 (-HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D4B0 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D658 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180040864 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D6CC (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007BFA0 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

void __fastcall HampActEndStateChange(struct _RM_HAM_ACTIVITY_HOST **a1, int a2)
{
  __int64 v4; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  _DWORD *v6; // r14
  char v7; // al
  BOOL v8; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  __int64 v10; // rdi
  int v11; // esi
  unsigned int v12; // edx
  struct _HAM_DEPENDENCY_GROUP *v13; // rbp
  struct _HAM_HOST_DEPENDENCY *v14; // rdi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  char v18; // [rsp+80h] [rbp+8h] BYREF
  char v19; // [rsp+88h] [rbp+10h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+90h] [rbp+18h] BYREF

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  if ( a2 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
    {
      v19 = *((_BYTE *)a1 + 562);
      v20 = a1[5];
      v18 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v15,
        (unsigned int)&unk_1800C1F62,
        v16,
        v17,
        (__int64)&v20,
        (__int64)&v18,
        (__int64)&v19);
    }
    LOBYTE(v4) = 6;
    *((_BYTE *)a1 + 562) = 1;
    HampActSetPendState(a1, v4);
    HampActResetToStopped((struct _HAM_ACTIVITY *)a1);
  }
  v5 = a1[10];
  v6 = a1 + 69;
  *((_DWORD *)a1 + 138) &= ~1u;
  HampHostUpdateActivityState(v5);
  if ( (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) <= 1u && (*v6 & 0x300) != 0 )
    HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1, 0);
  v7 = *((_BYTE *)a1 + 562);
  v8 = (v7 == 1 || v7 == 4) && (((_DWORD)a1[15] & 0x20C) != 0 || ((_DWORD)a1[14] & 0x4000) != 0);
  v9 = a1[10];
  v10 = *((_QWORD *)v9 + 88);
  if ( v10 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v11 = (*v6 >> 1) & 1;
    *v6 &= ~2u;
  }
  else
  {
    v11 = 0;
    HampHostCheckQueueStateWorker(v9, 0);
  }
  v13 = (struct _HAM_DEPENDENCY_GROUP *)(v10 & -(__int64)(v11 != 0));
  if ( !a2 && *((_BYTE *)a1 + 562) == 4 )
  {
    v14 = a1[9];
    a1[9] = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  HampHostReleaseLockExclusiveEx(a1[10], v12);
  RtlWakeAddressAll(a1 + 69);
  if ( v14 )
    HampHostDepDestroy(v14);
  if ( v8 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(((unsigned __int64)a1[4] & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v11 )
    HampDepGroupRunStateChangeWorker(v13);
  RmHamHostUpdateSettings(a1[10]);
}
