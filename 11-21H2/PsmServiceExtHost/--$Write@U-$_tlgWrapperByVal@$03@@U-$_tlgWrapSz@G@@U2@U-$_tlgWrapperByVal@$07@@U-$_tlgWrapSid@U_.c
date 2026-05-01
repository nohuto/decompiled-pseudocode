/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3@Z @ 0x180009B70
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x180008570 (HamRpcSrvFindOrCreateHostId.c)
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006FB74 (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const unsigned __int16 **a6,
        const unsigned __int16 **a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10)
{
  int v11; // eax
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // r8d
  const unsigned __int16 *v17; // rdx
  int v18; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v22; // [rsp+60h] [rbp-59h]
  int v23; // [rsp+68h] [rbp-51h]
  int v24; // [rsp+6Ch] [rbp-4Dh]
  __int64 v25; // [rsp+70h] [rbp-49h]
  __int64 v26; // [rsp+78h] [rbp-41h]
  const unsigned __int16 *v27; // [rsp+80h] [rbp-39h]
  int v28; // [rsp+88h] [rbp-31h]
  int v29; // [rsp+8Ch] [rbp-2Dh]
  const unsigned __int16 *v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+98h] [rbp-21h]
  int v32; // [rsp+9Ch] [rbp-1Dh]
  __int64 v33; // [rsp+A0h] [rbp-19h]
  __int64 v34; // [rsp+A8h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  int v36; // [rsp+B8h] [rbp-1h]
  int v37; // [rsp+BCh] [rbp+3h]
  __int64 v38; // [rsp+C0h] [rbp+7h]
  __int64 v39; // [rsp+C8h] [rbp+Fh]

  v38 = a10;
  v39 = 4LL;
  v11 = *(unsigned __int8 *)(*a9 + 1);
  v35 = *a9;
  v37 = 0;
  v34 = 8LL;
  v36 = 4 * v11 + 8;
  v33 = a8;
  v12 = *a7;
  v13 = -1LL;
  if ( *a7 )
  {
    v14 = -1LL;
    do
      v15 = v12[++v14] == 0;
    while ( !v15 );
    v16 = 2 * v14 + 2;
  }
  else
  {
    v12 = &word_1800B7A9C;
    v16 = 2;
  }
  v30 = v12;
  v31 = v16;
  v32 = 0;
  v17 = *a6;
  if ( *a6 )
  {
    do
      v15 = v17[++v13] == 0;
    while ( !v15 );
    v18 = 2 * v13 + 2;
  }
  else
  {
    v17 = &word_1800B7A9C;
    v18 = 2;
  }
  v25 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  v28 = v18;
  UserData.Ptr = (ULONGLONG)off_1800DC220;
  v27 = v17;
  v29 = 0;
  v26 = 4LL;
  UserData.Size = *(unsigned __int16 *)off_1800DC220;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  UserData.Reserved = 2;
  v24 = 1;
  return EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
