/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180051B14
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800773EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]

  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  RmpReleaseGlobalLock();
  Object[0] = *((HANDLE *)a1 + 166);
  Object[1] = *((HANDLE *)a1 + 165);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v14 = 0;
    v8 = v2;
    v13 = 8;
    v12 = &v8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C3BC0,
      0LL,
      0LL,
      3u,
      &v11);
  }
  v3 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  if ( v3 )
  {
    v4 = 0;
  }
  else
  {
    *((_DWORD *)a1 + 334) = 0;
    NtClearEvent(*((HANDLE *)a1 + 166));
    v4 = 1;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v9 = *((_QWORD *)a1 + 4);
    LODWORD(v8) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800DC1E0,
      (unsigned int)&unk_1800C3B20,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&v8);
  }
  return v4;
}
