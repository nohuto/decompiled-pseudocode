/*
 * XREFs of ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x14001818C
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400773B0 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x14001796C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetDeviceGraphObjectCache(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct tWAVEFORMATEX *a4,
        struct IDeviceGraphObjectCache **a5)
{
  int DeviceGraphObjectCacheManager; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, _QWORD); // r13
  int v13; // eax
  struct IDeviceGraphObjectCache *v14; // rax
  int v16; // [rsp+20h] [rbp-61h]
  struct IDeviceGraphObjectCache *v17; // [rsp+30h] [rbp-51h] BYREF
  struct IDeviceGraphObjectCacheManager *v18; // [rsp+38h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-31h] BYREF
  union _RTL_RUN_ONCE *v22; // [rsp+58h] [rbp-29h] BYREF
  int v23; // [rsp+60h] [rbp-21h]
  __int64 v24; // [rsp+68h] [rbp-19h] BYREF
  float nSamplesPerSec; // [rsp+70h] [rbp-11h]
  int nChannels; // [rsp+74h] [rbp-Dh]
  int v27; // [rsp+78h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0LL;
  v18 = 0LL;
  DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v18);
  v10 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      v16);
  }
  else
  {
    v21 = 0LL;
    (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, __int64 *))v18)(
      v18,
      &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
      &v21);
    v11 = v21;
    v12 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 24LL);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v22 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v23 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v22);
    }
    v12(v11, *((_QWORD *)Context + 1));
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
    v24 = a2;
    nSamplesPerSec = (float)(int)a4->nSamplesPerSec;
    nChannels = a4->nChannels;
    v27 = a3;
    v17 = 0LL;
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, const unsigned __int16 *, __int64 *, struct IDeviceGraphObjectCache **))(*(_QWORD *)v18 + 24LL))(
            v18,
            a1,
            &v24,
            &v17);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE9,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v13,
        v16);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v17);
    }
    else
    {
      v14 = v17;
      v17 = 0LL;
      *a5 = v14;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v17);
      v10 = 0;
    }
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v18);
  return v10;
}
