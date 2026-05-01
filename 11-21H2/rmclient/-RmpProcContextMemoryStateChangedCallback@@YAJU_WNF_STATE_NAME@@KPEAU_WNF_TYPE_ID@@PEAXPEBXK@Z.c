/*
 * XREFs of ?RmpProcContextMemoryStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180013530
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012D24 (-RmpProcContextCheckQueueEmptyWorker@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpProcContextMemoryStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a4,
        _DWORD *a5,
        unsigned int a6)
{
  signed int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(*(_QWORD *)&a1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      *(_QWORD *)&a1,
      byte_18002B43A);
  if ( a6 == 24 )
  {
    v7 = a5[1];
    CempLockAcquireExclusive((char *)a4 + 48, a2, a3);
    if ( ((*((_DWORD *)a4 + 24) >> 3) & 7u) < v7 )
    {
      if ( v7 >= 2 )
        RmpProcContextCheckQueueEmptyWorker(a4);
    }
    else
    {
      *((_DWORD *)a4 + 24) ^= (*((_DWORD *)a4 + 24) ^ (8 * v7)) & 0x38;
    }
    *((_DWORD *)a4 + 14) = 0;
    RtlReleaseSRWLockExclusive((char *)a4 + 48);
  }
  else
  {
    LOBYTE(v7) = 5;
  }
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(*(_QWORD *)&a1, 3LL) )
  {
    LOBYTE(a6) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
      v8,
      (int)&unk_18002B463,
      v9,
      v10,
      (__int64)&a6);
  }
  return 0LL;
}
