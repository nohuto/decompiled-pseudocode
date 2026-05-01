/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800C7610
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017658 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18008F060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800C77D8 (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 */

char __fastcall wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rcx
  int v8; // eax
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  const wchar_t *v14; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v15; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v16; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v17; // [rsp+D8h] [rbp-58h] BYREF
  const wchar_t *v18; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v19; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v20; // [rsp+F0h] [rbp-40h] BYREF
  const wchar_t *v21; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v22; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23[3]; // [rsp+108h] [rbp-28h] BYREF
  RTL_SRWLOCK *v24; // [rsp+130h] [rbp+0h] BYREF
  int v25; // [rsp+138h] [rbp+8h] BYREF
  int v26; // [rsp+140h] [rbp+10h] BYREF
  int v27; // [rsp+148h] [rbp+18h] BYREF

  v4 = *(_DWORD **)(wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                      a1,
                      _lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 2u )
  {
    v14 = (const wchar_t *)*((_QWORD *)a2 + 6);
    LODWORD(v24) = a2[17];
    v25 = a2[4];
    v15 = (const WCHAR *)*((_QWORD *)a2 + 15);
    v6 = *(_QWORD *)(a1 + 48);
    v16 = (const wchar_t *)*((_QWORD *)a2 + 14);
    v26 = a2[26];
    v17 = (const WCHAR *)*((_QWORD *)a2 + 12);
    v18 = (const wchar_t *)*((_QWORD *)a2 + 11);
    v27 = a2[20];
    v19 = (const wchar_t *)*((_QWORD *)a2 + 9);
    v10 = a2[8];
    v20 = (const WCHAR *)*((_QWORD *)a2 + 3);
    v11 = *a2;
    v21 = (const wchar_t *)*((_QWORD *)a2 + 16);
    v12 = a2[16];
    v22 = (const wchar_t *)*((_QWORD *)a2 + 7);
    v13 = a2[2];
    v23[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)v4,
      (unsigned __int8 *)&unk_18069D587,
      (const GUID *)(v6 + 8),
      v5,
      (__int64)v23,
      (__int64)&v13,
      &v22,
      (__int64)&v12,
      &v21,
      (__int64)&v11,
      &v20,
      (__int64)&v10,
      &v19,
      (__int64)&v27,
      &v18,
      &v17,
      (__int64)&v26,
      &v16,
      &v15,
      (__int64)&v25,
      (__int64)&v24,
      &v14);
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v24);
  v7 = *(_DWORD **)(a1 + 48);
  v8 = a2[2];
  if ( v8 != v7[22] && (v8 != v7[19] || (int)v7[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v7 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v24);
  return 1;
}
