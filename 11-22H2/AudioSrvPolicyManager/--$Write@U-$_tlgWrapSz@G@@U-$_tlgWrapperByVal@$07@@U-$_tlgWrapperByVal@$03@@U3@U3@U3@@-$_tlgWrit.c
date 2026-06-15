/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180001008
 * Callers:
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18002AB4C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x18002AC50 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  REGHANDLE v15; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v19; // [rsp+60h] [rbp-59h]
  int v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+6Ch] [rbp-4Dh]
  _WORD *v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  __int64 v25; // [rsp+80h] [rbp-39h]
  __int64 v26; // [rsp+88h] [rbp-31h]
  __int64 v27; // [rsp+90h] [rbp-29h]
  __int64 v28; // [rsp+98h] [rbp-21h]
  __int64 v29; // [rsp+A0h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-11h]
  __int64 v31; // [rsp+B0h] [rbp-9h]
  __int64 v32; // [rsp+B8h] [rbp-1h]
  __int64 v33; // [rsp+C0h] [rbp+7h]
  __int64 v34; // [rsp+C8h] [rbp+Fh]

  v33 = a10;
  v31 = a9;
  v29 = a8;
  v27 = a7;
  v25 = a6;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v12 = *a5;
  v28 = 4LL;
  v26 = 8LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_180053328;
    v14 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v23 = v14;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v22 = v12;
  v24 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v20 = *(unsigned __int16 *)(a2 + 11);
  v19 = a2 + 11;
  v15 = *(_QWORD *)(a1 + 32);
  UserData.Reserved = 2;
  v21 = 1;
  return EventWriteTransfer(v15, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
