/*
 * XREFs of ?StopActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18004B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // eax
  REGHANDLE v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v16; // [rsp+C4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-70h] BYREF
  int v19; // [rsp+D8h] [rbp-68h] BYREF
  int v20; // [rsp+DCh] [rbp-64h] BYREF
  int v21; // [rsp+E0h] [rbp-60h] BYREF
  int v22; // [rsp+E4h] [rbp-5Ch] BYREF
  int v23; // [rsp+E8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+100h] [rbp-40h] BYREF
  __int64 v26; // [rsp+108h] [rbp-38h] BYREF
  __int64 v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31; // [rsp+130h] [rbp-10h] BYREF
  __int64 v32; // [rsp+138h] [rbp-8h] BYREF
  __int64 v33; // [rsp+140h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v35; // [rsp+160h] [rbp+20h]
  int v36; // [rsp+168h] [rbp+28h]
  int v37; // [rsp+16Ch] [rbp+2Ch]
  __int64 *v38; // [rsp+170h] [rbp+30h]
  int v39; // [rsp+178h] [rbp+38h]
  int v40; // [rsp+17Ch] [rbp+3Ch]
  int *v41; // [rsp+180h] [rbp+40h]
  int v42; // [rsp+188h] [rbp+48h]
  int v43; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v44; // [rsp+190h] [rbp+50h]
  int v45; // [rsp+198h] [rbp+58h]
  int v46; // [rsp+19Ch] [rbp+5Ch]

  v1 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 88) && (v4 = v1 + 80, v1 != -80) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v12 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                         v11,
                         _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v12 > 5u )
    {
      v25 = *(_QWORD *)(v4 + 48);
      v19 = *(_DWORD *)(v4 + 68);
      v20 = *(_DWORD *)(v4 + 16);
      v26 = *(_QWORD *)(v4 + 120);
      v27 = *(_QWORD *)(v4 + 112);
      v13 = *((_QWORD *)this + 6);
      v21 = *(_DWORD *)(v4 + 104);
      v14 = *(_QWORD *)(v4 + 96);
      v18 = 0LL;
      v28 = v14;
      v29 = *(_QWORD *)(v4 + 88);
      v22 = *(_DWORD *)(v4 + 80);
      v30 = *(_QWORD *)(v4 + 72);
      v23 = *(_DWORD *)(v4 + 32);
      v31 = *(_QWORD *)(v4 + 24);
      LODWORD(v17) = *(_DWORD *)v4;
      v32 = *(_QWORD *)(v4 + 128);
      v15 = *(_DWORD *)(v4 + 64);
      v33 = *(_QWORD *)(v4 + 56);
      v16 = *(_DWORD *)(v4 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v12,
        (int)&dword_1806A2472,
        v13 + 8,
        (__int64)&v18,
        (__int64)&EventDescriptor,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v15,
        (__int64)&v32,
        (__int64)&v17,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v21,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v25);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      this,
      &v18);
    **((_DWORD **)this + 6) = 2;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    v6 = *(_QWORD *)(wil::details::static_lazy<NotificationCenterLogging>::get(
                       v5,
                       _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v46 = 0;
      v43 = 0;
      v40 = 0;
      EventDescriptor.Keyword = 0LL;
      v16 = CurrentThreadId;
      v9 = *(_DWORD *)(v8 + 76);
      v18 = 0LL;
      v15 = v9;
      v44 = &v16;
      v41 = &v15;
      v38 = &v18;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      v45 = 4;
      v42 = 4;
      v39 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v35 = &unk_1806A25CF;
      UserData.Reserved = 2;
      v10 = *(_QWORD *)(v6 + 32);
      v36 = 76;
      v37 = 1;
      LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v10, &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)((char *)this + 8));
}
