/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000B480
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CB0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D51C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DFA0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v12; // edx
  REGHANDLE v13; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 *v17; // [rsp+60h] [rbp-58h]
  int v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+6Ch] [rbp-4Ch]
  _WORD *v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+7Ch] [rbp-3Ch]
  __int64 v23; // [rsp+80h] [rbp-38h]
  __int64 v24; // [rsp+88h] [rbp-30h]
  __int64 v25; // [rsp+90h] [rbp-28h]
  __int64 v26; // [rsp+98h] [rbp-20h]

  v25 = a7;
  v23 = a6;
  v26 = 4LL;
  v24 = 8LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    while ( v9[++v10] != 0 )
      ;
    v12 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_180053328;
    v12 = 2;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v21 = v12;
  v20 = v9;
  v22 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v13 = *(_QWORD *)(a1 + 32);
  UserData.Reserved = 2;
  v19 = 1;
  return EventWriteTransfer(v13, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
}
