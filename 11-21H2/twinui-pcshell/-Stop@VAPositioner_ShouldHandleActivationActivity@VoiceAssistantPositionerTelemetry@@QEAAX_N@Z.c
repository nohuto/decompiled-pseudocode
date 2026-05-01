/*
 * XREFs of ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x180091E60
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092450 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1803B5FA0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803B5FA0.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        char a2)
{
  __int64 v2; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  REGHANDLE v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // r8
  _BYTE v15[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v17; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D8h] [rbp-68h] BYREF
  int v21; // [rsp+DCh] [rbp-64h] BYREF
  int v22; // [rsp+E0h] [rbp-60h] BYREF
  int v23; // [rsp+E4h] [rbp-5Ch] BYREF
  int v24; // [rsp+E8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+138h] [rbp-8h] BYREF
  __int64 v34; // [rsp+140h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v36; // [rsp+160h] [rbp+20h]
  int v37; // [rsp+168h] [rbp+28h]
  int v38; // [rsp+16Ch] [rbp+2Ch]
  __int64 *v39; // [rsp+170h] [rbp+30h]
  int v40; // [rsp+178h] [rbp+38h]
  int v41; // [rsp+17Ch] [rbp+3Ch]
  int *v42; // [rsp+180h] [rbp+40h]
  int v43; // [rsp+188h] [rbp+48h]
  int v44; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v45; // [rsp+190h] [rbp+50h]
  int v46; // [rsp+198h] [rbp+58h]
  int v47; // [rsp+19Ch] [rbp+5Ch]
  _BYTE *v48; // [rsp+1A0h] [rbp+60h]
  int v49; // [rsp+1A8h] [rbp+68h]
  int v50; // [rsp+1ACh] [rbp+6Ch]

  v2 = *((_QWORD *)this + 6);
  v5 = *(_DWORD *)(v2 + 76);
  if ( v5 >= 0 || v5 != *(_DWORD *)(v2 + 88) || (v11 = v2 + 80, v2 == -80) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)this,
      &v19);
    **((_DWORD **)this + 6) = 2;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v19);
    v7 = wil::details::static_lazy<WindowManagementLogging>::get(
           v6,
           _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 5u )
    {
      v15[0] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 6);
      v50 = 0;
      v47 = 0;
      v44 = 0;
      v41 = 0;
      EventDescriptor.Keyword = 0LL;
      v17 = CurrentThreadId;
      v16 = *(_DWORD *)(v9 + 76);
      v48 = v15;
      v45 = &v17;
      v42 = &v16;
      v39 = &v19;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      v46 = 4;
      v43 = 4;
      v49 = 1;
      v19 = 50331648LL;
      v40 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v36 = &unk_1806C0F9F;
      v38 = 1;
      v10 = *(_QWORD *)(v7 + 32);
      UserData.Reserved = 2;
      v37 = 116;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v10, &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 6u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v12,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      v26 = *(_QWORD *)(v11 + 48);
      v20 = *(_DWORD *)(v11 + 68);
      v21 = *(_DWORD *)(v11 + 16);
      v27 = *(_QWORD *)(v11 + 120);
      v28 = *(_QWORD *)(v11 + 112);
      v22 = *(_DWORD *)(v11 + 104);
      v14 = *((_QWORD *)this + 6);
      v29 = *(_QWORD *)(v11 + 96);
      v30 = *(_QWORD *)(v11 + 88);
      v23 = *(_DWORD *)(v11 + 80);
      v31 = *(_QWORD *)(v11 + 72);
      v24 = *(_DWORD *)(v11 + 32);
      v32 = *(_QWORD *)(v11 + 24);
      v18 = *(_DWORD *)v11;
      v33 = *(_QWORD *)(v11 + 128);
      v16 = *(_DWORD *)(v11 + 64);
      v34 = *(_QWORD *)(v11 + 56);
      v17 = *(_DWORD *)(v11 + 8);
      v15[0] = a2;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v19 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        (int)v13,
        (int)&dword_1806C1014,
        v14 + 8,
        (__int64)&v19,
        (__int64)&EventDescriptor,
        (__int64)&v17,
        (__int64)&v34,
        (__int64)&v16,
        (__int64)&v33,
        (__int64)&v18,
        (__int64)&v32,
        (__int64)&v24,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v22,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)v15);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 8));
}
