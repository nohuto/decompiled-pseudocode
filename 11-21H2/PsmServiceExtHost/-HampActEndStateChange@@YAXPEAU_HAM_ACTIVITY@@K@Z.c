/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006044 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180005FAC (-HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180044B74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800774C8 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800781CC (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007BC78 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

void __fastcall HampActEndStateChange(struct _RM_HAM_ACTIVITY_HOST **a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  _DWORD *v8; // r14
  char v9; // al
  BOOL v10; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v11; // rcx
  __int64 v12; // rdi
  int v13; // esi
  unsigned int v14; // edx
  struct _HAM_DEPENDENCY_GROUP *v15; // rbp
  struct _HAM_HOST_DEPENDENCY *v16; // rdi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+80h] [rbp+8h] BYREF
  char v21; // [rsp+88h] [rbp+10h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+90h] [rbp+18h] BYREF

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  if ( a2 )
  {
    if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v5, v6) )
    {
      v21 = *((_BYTE *)a1 + 562);
      v22 = a1[5];
      v20 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v17,
        (unsigned int)&unk_1800C037C,
        v18,
        v19,
        (__int64)&v22,
        (__int64)&v20,
        (__int64)&v21);
    }
    LOBYTE(v4) = 6;
    *((_BYTE *)a1 + 562) = 1;
    HampActSetPendState(a1, v4);
    HampActResetToStopped((struct _HAM_ACTIVITY *)a1);
  }
  v7 = a1[10];
  v8 = a1 + 69;
  *((_DWORD *)a1 + 138) &= ~1u;
  HampHostUpdateActivityState(v7);
  v9 = *((_BYTE *)a1 + 562);
  if ( (v9 == 3 || v9 == 2) && (*v8 & 0x180) != 0 )
  {
    HampActIssueStopRequestCallback((struct _HAM_ACTIVITY *)a1);
    v9 = *((_BYTE *)a1 + 562);
  }
  v10 = (v9 == 1 || v9 == 4) && (((_DWORD)a1[15] & 0x20C) != 0 || ((_DWORD)a1[14] & 0x4000) != 0);
  v11 = a1[10];
  v12 = *((_QWORD *)v11 + 88);
  if ( v12 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v13 = (*v8 >> 1) & 1;
    *v8 &= ~2u;
  }
  else
  {
    v13 = 0;
    HampHostCheckQueueStateWorker(v11, 0);
  }
  v15 = (struct _HAM_DEPENDENCY_GROUP *)(v12 & -(__int64)(v13 != 0));
  if ( !a2 && *((_BYTE *)a1 + 562) == 4 )
  {
    v16 = a1[9];
    a1[9] = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  HampHostReleaseLockExclusiveEx(a1[10], v14);
  RtlWakeAddressAll(a1 + 69);
  if ( v16 )
    HampHostDepDestroy(v16);
  if ( v10 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(((unsigned __int64)a1[4] & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v13 )
    HampDepGroupRunStateChangeWorker(v15);
  RmHamHostUpdateSettings(a1[10]);
}
