/*
 * XREFs of RmConnectProcessManager @ 0x18001B590
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001074 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     MIDL_user_allocate @ 0x180009270 (MIDL_user_allocate.c)
 *     ?RmpProcContextAllocateState@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012CF0 (-RmpProcContextAllocateState@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcContextInitialize@@YAXP6A?AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x1800134A4 (-RmpProcContextInitialize@@YAXP6A-AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_R.c)
 *     ?RmpProcContextStart@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013CF8 (-RmpProcContextStart@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 */

__int64 __fastcall RmConnectProcessManager(
        enum _RM_PROC_CALLBACK_RESULT (__high *a1)(void *, enum _RM_PROC_REQUEST, unsigned int),
        struct _RM_PROCESS_MANAGEMENT_CONTEXT **a2)
{
  int State; // ebx
  struct _RM_PROCESS_MANAGEMENT_CONTEXT *v5; // rax
  struct _RM_PROCESS_MANAGEMENT_CONTEXT *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn((__int64)a1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)a1,
      byte_18002B715);
  if ( a1 )
  {
    v5 = (struct _RM_PROCESS_MANAGEMENT_CONTEXT *)MIDL_user_allocate(0x70uLL);
    v6 = v5;
    if ( v5 )
    {
      RmpProcContextInitialize(a1, v5);
      State = RmpProcContextAllocateState(v6);
      if ( State < 0 || (State = RmpProcContextStart(v6), State < 0) )
      {
        RmDisconnectProcessManager(v6);
      }
      else
      {
        *a2 = v6;
        State = 0;
      }
    }
    else
    {
      State = -1073741801;
    }
  }
  else
  {
    State = -1073741585;
  }
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn((__int64)a1, 3LL) )
  {
    v11 = State;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v7,
      (int)&unk_18002B6F0,
      v8,
      v9,
      (__int64)&v11);
  }
  return (unsigned int)State;
}
