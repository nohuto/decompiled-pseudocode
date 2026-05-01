/*
 * XREFs of ?StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ @ 0x1800791D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall StartWindowTelemetry::GetImmersiveMonitor::StopActivity(
        StartWindowTelemetry::GetImmersiveMonitor *this)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rdx
  _QWORD *p_SRWLock; // rax
  char v6; // si
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending[2]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  int v22; // [rsp+F8h] [rbp-48h] BYREF
  int v23; // [rsp+FCh] [rbp-44h] BYREF
  __int64 v24; // [rsp+100h] [rbp-40h] BYREF
  __int64 v25; // [rsp+108h] [rbp-38h] BYREF
  __int64 v26; // [rsp+110h] [rbp-30h] BYREF
  __int64 v27; // [rsp+118h] [rbp-28h] BYREF
  __int64 v28; // [rsp+120h] [rbp-20h] BYREF
  __int64 v29; // [rsp+128h] [rbp-18h] BYREF
  __int64 v30; // [rsp+130h] [rbp-10h] BYREF
  __int64 v31; // [rsp+138h] [rbp-8h] BYREF
  __int64 v32; // [rsp+140h] [rbp+0h] BYREF
  __int64 v33; // [rsp+148h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v35; // [rsp+160h] [rbp+20h]
  int v36; // [rsp+168h] [rbp+28h]
  int v37; // [rsp+16Ch] [rbp+2Ch]
  PSRWLOCK *v38; // [rsp+170h] [rbp+30h]
  __int64 v39; // [rsp+178h] [rbp+38h]
  WINBOOL *v40; // [rsp+180h] [rbp+40h]
  __int64 v41; // [rsp+188h] [rbp+48h]
  __int64 *v42; // [rsp+190h] [rbp+50h]
  __int64 v43; // [rsp+198h] [rbp+58h]

  fPending[0] = 0;
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 76);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v2 + 88) || (v10 = v2 + 80, v2 == -80) )
  {
    v4 = *((_QWORD *)this + 39);
    if ( v4 )
    {
      wil::AcquireSRWLockExclusive(&v17, v4 + 256);
      p_SRWLock = &v17;
      v6 = 1;
      v7 = (RTL_SRWLOCK *)v17;
    }
    else
    {
      p_SRWLock = &SRWLock;
      v6 = 2;
      v7 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v6 & 1) != 0 )
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    **((_DWORD **)this + 6) = 2;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      *(_QWORD *)&EventDescriptor.Id = &`LauncherTelemetryLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B44B0;
      qword_1807B44B0 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B44C8 = (__int64)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v14,
        v15);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 5u )
    {
      LODWORD(v17) = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      fPending[1] = *(_DWORD *)(v9 + 76);
      SRWLock = 0LL;
      v42 = &v17;
      v43 = 4LL;
      v40 = &fPending[1];
      v41 = 4LL;
      v38 = &SRWLock;
      v39 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v8 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v35 = &unk_1806B41F9;
      v36 = 72;
      v37 = 1;
      LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                         v11,
                         _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                         v12)
                     + 8);
    if ( *v13 > 5u )
    {
      v25 = *(_QWORD *)(v10 + 48);
      v22 = *(_DWORD *)(v10 + 68);
      v23 = *(_DWORD *)(v10 + 16);
      v26 = *(_QWORD *)(v10 + 120);
      v27 = *(_QWORD *)(v10 + 112);
      LODWORD(v24) = *(_DWORD *)(v10 + 104);
      v28 = *(_QWORD *)(v10 + 96);
      v29 = *(_QWORD *)(v10 + 88);
      LODWORD(Context) = *(_DWORD *)(v10 + 80);
      v30 = *(_QWORD *)(v10 + 72);
      LODWORD(v19) = *(_DWORD *)(v10 + 32);
      v31 = *(_QWORD *)(v10 + 24);
      fPending[1] = *(_DWORD *)v10;
      v32 = *(_QWORD *)(v10 + 128);
      LODWORD(v17) = *(_DWORD *)(v10 + 64);
      v33 = *(_QWORD *)(v10 + 56);
      fPending[0] = *(_DWORD *)(v10 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v13,
        (int)&dword_1806B40A0,
        *((_QWORD *)this + 6) + 8,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)fPending,
        (__int64)&v33,
        (__int64)&v17,
        (__int64)&v32,
        (__int64)&fPending[1],
        (__int64)&v31,
        (__int64)&v19,
        (__int64)&v30,
        (__int64)&Context,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v24,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::GetImmersiveMonitor *)((char *)this + 8));
}
