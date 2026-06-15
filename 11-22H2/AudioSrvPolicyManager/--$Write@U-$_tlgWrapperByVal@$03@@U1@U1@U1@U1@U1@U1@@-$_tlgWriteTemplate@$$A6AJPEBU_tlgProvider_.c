/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1800011F4
 * Callers:
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18000E710 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  ULONGLONG v11; // rax
  unsigned __int16 *v12; // rdx
  unsigned __int16 *v13; // rax
  REGHANDLE v14; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int16 *v18; // [rsp+60h] [rbp-71h]
  int v19; // [rsp+68h] [rbp-69h]
  int v20; // [rsp+6Ch] [rbp-65h]
  __int64 v21; // [rsp+70h] [rbp-61h]
  __int64 v22; // [rsp+78h] [rbp-59h]
  __int64 v23; // [rsp+80h] [rbp-51h]
  __int64 v24; // [rsp+88h] [rbp-49h]
  __int64 v25; // [rsp+90h] [rbp-41h]
  __int64 v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  __int64 v28; // [rsp+A8h] [rbp-29h]
  __int64 v29; // [rsp+B0h] [rbp-21h]
  __int64 v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]
  __int64 v32; // [rsp+C8h] [rbp-9h]
  __int64 v33; // [rsp+D0h] [rbp-1h]
  __int64 v34; // [rsp+D8h] [rbp+7h]

  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v21 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v11 = *(_QWORD *)(a2 + 3);
  v12 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v11;
  v13 = *(unsigned __int16 **)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 32);
  UserData.Ptr = (ULONGLONG)v13;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  UserData.Size = *v13;
  v19 = *v12;
  v18 = v12;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(v14, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
}
