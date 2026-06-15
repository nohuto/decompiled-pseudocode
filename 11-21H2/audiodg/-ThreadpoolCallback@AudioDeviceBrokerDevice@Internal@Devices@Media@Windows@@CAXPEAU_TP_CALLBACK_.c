/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14007FB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14002116C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x14002DE74 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@Z @ 0x140071278 (--$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x1400730FC (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14007D840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14007D840.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v6; // rbx
  __int64 *Ptr; // rcx
  __int64 v8; // rax
  struct Windows::Storage::Streams::IBuffer *v9; // rbx
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v10; // rax
  RTL_SRWLOCK *v11; // rax
  int v12; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Storage::Streams::IBuffer *v13; // [rsp+28h] [rbp-28h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v15; // [rsp+38h] [rbp-18h] BYREF
  __int128 v16; // [rsp+40h] [rbp-10h] BYREF
  char v17; // [rsp+68h] [rbp+18h] BYREF

  wil::CoInitializeEx(&v17);
  if ( Context )
  {
    v12 = 0;
    while ( (*(int (__fastcall **)(PVOID, int *))(*(_QWORD *)Context[24].Ptr + 56LL))(Context[24].Ptr, &v12) >= 0 && v12 )
    {
      v6 = 0LL;
      v15 = 0LL;
      v13 = 0LL;
      Ptr = (__int64 *)Context[24].Ptr;
      v8 = *Ptr;
      v13 = 0LL;
      (*(void (__fastcall **)(__int64 *, _QWORD, struct Windows::Storage::Streams::IBuffer **))(v8 + 48))(
        Ptr,
        0LL,
        &v13);
      if ( v13 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Context[24].Ptr + 96LL))(Context[24].Ptr, 0LL);
        v9 = v13;
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x48uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
        {
          v11 = (RTL_SRWLOCK *)Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                                 v10,
                                 v9);
          v6 = (__int64)v11;
          if ( v11 )
          {
            v15 = v11;
            v14 = Context;
            *(_QWORD *)&v16 = &v14;
            *((_QWORD *)&v16 + 1) = &v15;
            Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_0024b6ff9a14fcf65a4c3da593d931bf_>(
              Context + 19,
              &v16);
          }
        }
        else
        {
          v6 = 0LL;
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v6);
    }
    AcquireSRWLockExclusive(Context + 27);
    v15 = Context + 27;
    if ( !LOBYTE(Context[28].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
  }
  if ( v17 )
    CoUninitialize();
}
