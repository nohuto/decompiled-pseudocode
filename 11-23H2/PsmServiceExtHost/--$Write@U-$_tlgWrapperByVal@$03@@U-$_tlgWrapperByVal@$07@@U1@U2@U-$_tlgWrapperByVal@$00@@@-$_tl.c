/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180029F30
 * Callers:
 *     HamRpcSrvStartActivityAsync @ 0x180027DB0 (HamRpcSrvStartActivityAsync.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180039380 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int8 *v12; // [rsp+60h] [rbp-41h]
  int v13; // [rsp+68h] [rbp-39h]
  int v14; // [rsp+6Ch] [rbp-35h]
  __int64 v15; // [rsp+70h] [rbp-31h]
  __int64 v16; // [rsp+78h] [rbp-29h]
  __int64 v17; // [rsp+80h] [rbp-21h]
  __int64 v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-11h]
  __int64 v20; // [rsp+98h] [rbp-9h]
  __int64 v21; // [rsp+A0h] [rbp-1h]
  __int64 v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  __int64 v24; // [rsp+B8h] [rbp+17h]

  v23 = a9;
  v21 = a8;
  v19 = a7;
  v17 = a6;
  v15 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_1800DB220;
  v24 = 1LL;
  v22 = 8LL;
  v20 = 4LL;
  v18 = 8LL;
  v16 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1800DB220;
  v13 = *(unsigned __int16 *)(a2 + 11);
  v12 = a2 + 11;
  v14 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
}
