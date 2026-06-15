/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14008CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x140064E90 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@Z @ 0x14007DEA8 (--$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14007FD38 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14008ABF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14008ABF0.c)
 */

// Hidden C++ exception states: #wind=4
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
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v11; // rax
  int v12; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Storage::Streams::IBuffer *v13; // [rsp+28h] [rbp-28h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-20h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v15; // [rsp+38h] [rbp-18h] BYREF
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
          v11 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
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
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v13);
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v6);
    }
    AcquireSRWLockExclusive(Context + 27);
    if ( !LOBYTE(Context[28].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    if ( Context != (RTL_SRWLOCK *)-216LL )
      ReleaseSRWLockExclusive(Context + 27);
  }
  if ( v17 )
    CoUninitialize();
}
