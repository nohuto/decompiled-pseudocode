/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BA318
 * Callers:
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2A60 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B2F60 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x18063AA90 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  ULONGLONG v8; // rax
  unsigned __int16 *v9; // rdx
  unsigned __int16 *v10; // rax
  REGHANDLE v11; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 *v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  __int64 v18; // [rsp+70h] [rbp-19h]
  __int64 v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  __int64 v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  __int64 v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]

  v24 = a8;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v8;
  v10 = *(unsigned __int16 **)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 32);
  UserData.Ptr = (ULONGLONG)v10;
  v25 = 8LL;
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  UserData.Size = *v10;
  v16 = *v9;
  v15 = v9;
  UserData.Reserved = 2;
  v17 = 1;
  return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
}
