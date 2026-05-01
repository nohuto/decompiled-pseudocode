/*
 * XREFs of ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075FB0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180075ADC (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800766FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180137790 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805F0E5C (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1805F0E5C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::OnEventQueued(
        HSTRING *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v5; // rdi
  int *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  const GUID *v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  __int64 (__fastcall *v15)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *); // rbx
  int v16; // eax
  unsigned int v17; // edi
  PCWSTR v18; // rbx
  PCWSTR v19; // rdi
  PCWSTR v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // rdx
  void *v34; // rbx
  void *v35; // rbx
  HANDLE ProcessHeap; // rax
  void *v37; // rbx
  HANDLE v38; // rax
  __int64 v39; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-BCh]
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v48; // [rsp+68h] [rbp-98h] BYREF
  void **v49; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v50[3]; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+A0h] [rbp-60h]
  int *v52; // [rsp+A8h] [rbp-58h]
  int *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h] BYREF
  char v55; // [rsp+BCh] [rbp-44h]
  _BYTE v56[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v57; // [rsp+E0h] [rbp-20h] BYREF
  const char *v58; // [rsp+E8h] [rbp-18h]
  LPVOID v59; // [rsp+F0h] [rbp-10h]
  char v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+100h] [rbp+0h]
  _BYTE v62[152]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE lpMem[24]; // [rsp+1A0h] [rbp+A0h]
  void *v64; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v66; // [rsp+1D0h] [rbp+D0h]
  int v67; // [rsp+1D8h] [rbp+D8h]
  int v68; // [rsp+1DCh] [rbp+DCh]
  PCWSTR v69; // [rsp+1E0h] [rbp+E0h]
  int v70; // [rsp+1E8h] [rbp+E8h]
  int v71; // [rsp+1ECh] [rbp+ECh]
  PCWSTR v72; // [rsp+1F0h] [rbp+F0h]
  int v73; // [rsp+1F8h] [rbp+F8h]
  int v74; // [rsp+1FCh] [rbp+FCh]
  PCWSTR v75; // [rsp+200h] [rbp+100h]
  int v76; // [rsp+208h] [rbp+108h]
  int v77; // [rsp+20Ch] [rbp+10Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp+110h] BYREF
  void *v79; // [rsp+220h] [rbp+120h]
  int v80; // [rsp+228h] [rbp+128h]
  int v81; // [rsp+22Ch] [rbp+12Ch]
  __int64 *v82; // [rsp+230h] [rbp+130h]
  __int64 v83; // [rsp+238h] [rbp+138h]
  DWORD *p_CurrentThreadId; // [rsp+240h] [rbp+140h]
  __int64 v85; // [rsp+248h] [rbp+148h]
  PCWSTR v86; // [rsp+250h] [rbp+150h]
  int v87; // [rsp+258h] [rbp+158h]
  int v88; // [rsp+25Ch] [rbp+15Ch]
  PCWSTR v89; // [rsp+260h] [rbp+160h]
  int v90; // [rsp+268h] [rbp+168h]
  int v91; // [rsp+26Ch] [rbp+16Ch]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v5 = WindowsGetStringRawBuffer(this[1], 0LL);
  v50[0] = 0LL;
  v50[1] = &v49;
  v50[2] = 0LL;
  v51 = 0;
  v52 = &v57;
  v53 = &v54;
  v54 = 0;
  v55 = 0;
  v60 = 0;
  v57 = 0;
  v58 = "OnEventQueued";
  v59 = 0LL;
  v61 = 1LL;
  *(_QWORD *)lpMem = 0LL;
  memset_0(v62, 0, sizeof(v62));
  *(_OWORD *)&lpMem[8] = 0LL;
  v64 = 0LL;
  v49 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v49,
    &v45);
  v6 = v53;
  if ( **(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                       v7,
                       _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_OWORD *)(v6 + 2) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  *v6 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v45);
  v9 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v8,
                     _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v46 = 0LL;
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v49);
    if ( StringRawBuffer )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( StringRawBuffer[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      StringRawBuffer = &LocaleName;
      v12 = 2;
    }
    v89 = StringRawBuffer;
    v90 = v12;
    v91 = 0;
    if ( v5 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v5[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v5 = &LocaleName;
      v14 = 2;
    }
    v86 = v5;
    v87 = v14;
    v88 = 0;
    p_CurrentThreadId = &CurrentThreadId;
    v85 = 4LL;
    v82 = &v46;
    v83 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v79 = &unk_1806CE9A1;
    v80 = 76;
    v81 = 1;
    v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, (LPCGUID)(v53 + 2), v10, 6u, &UserData);
  }
  if ( !v51 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  string = 0LL;
  v15 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v16 = v15(a2, &string);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29A,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v16,
      UserDataCount);
    goto LABEL_35;
  }
  v18 = WindowsGetStringRawBuffer(string, 0LL);
  v19 = WindowsGetStringRawBuffer(this[2], 0LL);
  v20 = WindowsGetStringRawBuffer(this[1], 0LL);
  v22 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v21,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v22 > 5u )
  {
    if ( v18 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v18[v23] );
      v24 = 2 * v23 + 2;
    }
    else
    {
      v18 = &LocaleName;
      v24 = 2;
    }
    v75 = v18;
    v76 = v24;
    v77 = 0;
    if ( v19 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v19[v25] );
      v26 = 2 * v25 + 2;
    }
    else
    {
      v19 = &LocaleName;
      v26 = 2;
    }
    v72 = v19;
    v73 = v26;
    v74 = 0;
    if ( v20 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( v20[v27] );
      v28 = 2 * v27 + 2;
    }
    else
    {
      v20 = &LocaleName;
      v28 = 2;
    }
    v69 = v20;
    v70 = v28;
    v71 = 0;
    *(_DWORD *)&v48.Id = 184549376;
    *(_DWORD *)&v48.Level = 5;
    v48.Keyword = 0LL;
    v65.Ptr = *(_QWORD *)(v22 + 8);
    v65.Size = *(unsigned __int16 *)v65.Ptr;
    v65.Reserved = 2;
    v66 = &unk_1806CDC70;
    v67 = 59;
    v68 = 1;
    v44 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v22 + 32), &v48, 0LL, 0LL, 5u, &v65);
  }
  v42 = 0LL;
  v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v42);
  v17 = v29;
  if ( v29 < 0 )
  {
    v33 = 671LL;
  }
  else
  {
    v29 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *, HSTRING, __int64))(*(_QWORD *)this[11] + 88LL))(
            this[11],
            this,
            string,
            v42);
    v17 = v29;
    if ( v29 >= 0 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v49);
      v17 = 0;
      goto LABEL_33;
    }
    v33 = 672LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v33,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v29,
    UserDataCount);
LABEL_33:
  v30 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_35:
  WindowsDeleteString(string);
  string = 0LL;
  v49 = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v49);
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v64, 0xFFFFFFFF) == 1 )
    {
      v34 = v64;
      if ( v64 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v64 + 8);
        operator delete(v34, 0x108uLL);
      }
    }
    v64 = 0LL;
  }
  v31 = *(_QWORD *)lpMem;
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v35 = *(void **)lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v35);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v60 )
  {
    v37 = v59;
    v38 = GetProcessHeap();
    HeapFree(v38, 0, v37);
    v60 = 0;
  }
  v59 = 0LL;
  if ( v54 == 1 )
  {
    v54 = 2;
    v39 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
            v31,
            _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_QWORD *)(v39 + 8), v56);
  }
  v54 = 3;
  if ( v51 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v50);
  return v17;
}
