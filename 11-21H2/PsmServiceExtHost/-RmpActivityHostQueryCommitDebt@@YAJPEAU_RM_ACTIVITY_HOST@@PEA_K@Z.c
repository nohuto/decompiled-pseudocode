/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002A59C
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180035090 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A648 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003A2D4 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, _QWORD *a2)
{
  int ProcessesInfo; // ebx
  unsigned __int128 v5; // kr00_16
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  ProcessesInfo = RmHamHostGetProcessesInfo(a1, 0x1000u, 1u, (struct _HAM_PROCESS_SNAPSHOT *)&v13);
  if ( ProcessesInfo >= 0 )
  {
    if ( (_DWORD)v14 )
    {
      v5 = v13;
      v6 = (unsigned int)v14;
      do
      {
        RmpActivityHostCommitDebtCallback(a1, *(void **)v5, **((_DWORD **)&v5 + 1), a2);
        --v6;
        v5 = __PAIR128__(*((_QWORD *)&v5 + 1) + 4LL, (__int64)v5 + 8);
      }
      while ( v6 );
    }
    ProcessesInfo = 0;
  }
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v13);
  if ( ProcessesInfo < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v7, v8) )
    {
      v16 = *((_QWORD *)a1 + 4);
      v15 = ProcessesInfo;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        (int)&unk_1800C644E,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessesInfo;
}
