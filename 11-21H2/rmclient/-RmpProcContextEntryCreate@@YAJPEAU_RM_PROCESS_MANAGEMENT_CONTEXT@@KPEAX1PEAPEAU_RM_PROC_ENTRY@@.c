/*
 * XREFs of ?RmpProcContextEntryCreate@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180013220
 * Callers:
 *     ?RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@Z @ 0x180014CB8 (-RmpProcFindOrCreateEntry@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAX1PEAPEAU_RM_PROC_ENTRY@@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000134C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     MIDL_user_allocate @ 0x180009270 (MIDL_user_allocate.c)
 *     ?RmpProcEntryAllocateState@@YAJPEAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013D64 (-RmpProcEntryAllocateState@@YAJPEAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z @ 0x1800143B4 (-RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z @ 0x180014B80 (-RmpProcEntryStart@@YAJPEAU_RM_PROC_ENTRY@@@Z.c)
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 */

__int64 __fastcall RmpProcContextEntryCreate(
        struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1,
        unsigned int a2,
        HANDLE SourceHandle,
        void *a4,
        struct _RM_PROC_ENTRY **a5)
{
  struct _RM_PROC_ENTRY *v9; // rax
  __int64 v10; // rcx
  struct _RM_PROC_ENTRY *v11; // rbx
  int State; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-24h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v9 = (struct _RM_PROC_ENTRY *)MIDL_user_allocate(0x80uLL);
  v11 = v9;
  if ( v9 )
  {
    RmpProcEntryInitialize(a2, a4, a1, v9);
    State = RmpProcEntryAllocateState(SourceHandle, v11);
    if ( State >= 0 )
    {
      State = RmpProcEntryStart(v11);
      if ( State >= 0 )
      {
        *a5 = v11;
        v11 = 0LL;
        State = 0;
      }
    }
  }
  else
  {
    State = -1073741801;
  }
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v10, 2LL) )
  {
    v19 = (__int64)*a5;
    v17 = State;
    v18 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v13,
      byte_18002B5DD,
      v14,
      v15,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v17);
  }
  if ( v11 )
    CemRcObjectDereference(v11);
  return (unsigned int)State;
}
