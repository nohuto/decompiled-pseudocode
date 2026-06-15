/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x1800263C0
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800261BC (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800D618C (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800D65B0 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DA6B8 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rcx
  void *v8; // rdi
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rdx
  volatile signed __int32 *v13; // rdx
  volatile signed __int32 *v14; // rdx
  volatile signed __int32 *v15; // rdx
  volatile signed __int32 *v16; // rdx
  volatile signed __int32 *v17; // rdx
  void *v18; // rsi
  __int64 *v19; // rbp
  __int64 *v20; // r14
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rsi
  __int64 v24; // r8
  volatile signed __int32 *v25; // rdx
  volatile signed __int32 *v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdi
  __int64 *v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  volatile signed __int32 *v32; // r8
  signed __int32 i; // edx
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  unsigned __int64 v36; // [rsp+20h] [rbp-58h] BYREF
  void *v37; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp+8h] BYREF
  void *v39; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp+18h] BYREF
  void *v41; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = (__int64 *)*((_QWORD *)this + 15);
  v4 = (__int64 *)*((_QWORD *)this + 14);
  if ( v4 != v3 )
  {
    do
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v4++);
    while ( v4 != v3 );
    v4 = (__int64 *)*((_QWORD *)this + 14);
  }
  *((_QWORD *)this + 15) = v4;
  if ( v2 )
    LeaveCriticalSection(v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v5 = (__int64 *)*((_QWORD *)this + 23);
  v6 = (__int64 *)*((_QWORD *)this + 22);
  if ( v6 != v5 )
  {
    do
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v6++);
    while ( v6 != v5 );
    v6 = (__int64 *)*((_QWORD *)this + 22);
  }
  *((_QWORD *)this + 23) = v6;
  if ( this != (CAudioSession *)-136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v7 = *((_QWORD *)this + 114);
  if ( v7 )
  {
    *((_QWORD *)this + 114) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (void *)*((_QWORD *)this + 112);
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  *((_QWORD *)this + 99) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  if ( *((_QWORD *)this + 100) )
  {
    v34 = *((_QWORD *)this + 100);
    if ( GetTickCount64() - v34 > 0x3E8 )
      (**((void (__fastcall ***)(char *, __int64, _QWORD))this + 99))(
        (char *)this + 792,
        v34 - *((_QWORD *)this + 101),
        *((unsigned int *)this + 204));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 824));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v10 = (_QWORD *)*((_QWORD *)this + 88);
  if ( v10 )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 89);
    if ( v10 != v11 )
    {
      do
      {
        if ( *v10 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 16LL))(*v10);
        ++v10;
      }
      while ( v10 != v11 );
      v10 = (_QWORD *)*((_QWORD *)this + 88);
    }
    v12 = 8 * ((__int64)(*((_QWORD *)this + 90) - (_QWORD)v10) >> 3);
    v38 = v12;
    v39 = v10;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v39, &v38);
      v12 = v38;
      v10 = v39;
    }
    operator delete(v10, v12);
    *((_QWORD *)this + 88) = 0LL;
    *((_QWORD *)this + 89) = 0LL;
    *((_QWORD *)this + 90) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v13 = (volatile signed __int32 *)(*((_QWORD *)this + 82) - 24LL);
  if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13);
  v14 = (volatile signed __int32 *)(*((_QWORD *)this + 78) - 24LL);
  if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14);
  v15 = (volatile signed __int32 *)(*((_QWORD *)this + 75) - 24LL);
  if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15);
  v16 = (volatile signed __int32 *)(*((_QWORD *)this + 74) - 24LL);
  if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  v17 = (volatile signed __int32 *)(*((_QWORD *)this + 73) - 24LL);
  if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
  v18 = (void *)*((_QWORD *)this + 67);
  if ( v18 )
  {
    _RecurringTask::~_RecurringTask(*((_RecurringTask **)this + 67));
    operator delete(v18, 0x20uLL);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v19 = (__int64 *)*((_QWORD *)this + 59);
  if ( v19 )
  {
    v20 = (__int64 *)*((_QWORD *)this + 60);
    if ( v19 != v20 )
    {
      do
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
        v19 += 2;
      }
      while ( v19 != v20 );
      v19 = (__int64 *)*((_QWORD *)this + 59);
    }
    v21 = (*((_QWORD *)this + 61) - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL;
    v40 = v21;
    v41 = v19;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v41, &v40);
      v21 = v40;
      v19 = (__int64 *)v41;
    }
    operator delete(v19, v21);
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  v22 = *((_QWORD *)this + 52);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = (_QWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v23 )
  {
    do
    {
      v35 = (_QWORD *)*v23;
      if ( v23[1] )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release();
      std::_Deallocate<16,0>(v23, 0x10uLL);
      v23 = v35;
    }
    while ( v35 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 7);
  v25 = (volatile signed __int32 *)(*((_QWORD *)this + 32) - 24LL);
  if ( _InterlockedExchangeAdd(v25 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
  v26 = (volatile signed __int32 *)(*((_QWORD *)this + 31) - 24LL);
  if ( _InterlockedExchangeAdd(v26 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26);
  v27 = *((_QWORD *)this + 22);
  if ( v27 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
      v27,
      *((_QWORD *)this + 23),
      v24);
    std::_Deallocate<16,0>(
      *((void **)this + 22),
      (*((_QWORD *)this + 24) - *((_QWORD *)this + 22)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v28 = (__int64 *)*((_QWORD *)this + 14);
  if ( v28 )
  {
    v29 = (__int64 *)*((_QWORD *)this + 15);
    if ( v28 != v29 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v28++);
      while ( v28 != v29 );
      v28 = (__int64 *)*((_QWORD *)this + 14);
    }
    v30 = (*((_QWORD *)this + 16) - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL;
    v36 = v30;
    v37 = v28;
    if ( v30 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v37, &v36);
      v30 = v36;
      v28 = (__int64 *)v37;
    }
    operator delete(v28, v30);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  DeleteCriticalSection(v2);
  v31 = *((_QWORD *)this + 7);
  if ( v31 < 0 )
  {
    v32 = (volatile signed __int32 *)(2 * v31);
    for ( i = *((_DWORD *)v32 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v32 + 3) )
    {
      if ( i == _InterlockedCompareExchange(v32 + 3, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      if ( v32 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v32 + 32LL))(v32, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
