/*
 * XREFs of ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x1400894B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14007E6E8 (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 *     ??4?$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140080F7C (--4-$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1400838D0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::OnStart(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64 *); // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  unsigned int v16; // [rsp+70h] [rbp+28h] BYREF
  __int64 v17; // [rsp+78h] [rbp+30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+40h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  wil::com_ptr_t<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,wil::err_returncode_policy>::operator=(
    &v18,
    *(_QWORD *)(*((_QWORD *)this + 21) + 96LL));
  v2 = v18;
  if ( v18 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL);
    v7 = v17;
    v17 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v2, *((_QWORD *)this + 21), *((_QWORD *)this + 22), &v17);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v14[0] = v17;
      v16 = 0;
      v9 = Microsoft::WRL::Details::Make<Windows::Media::Devices::ModuleCommandResult,enum Windows::Media::Devices::SendCommandStatus,Windows::Storage::Streams::IBuffer *>(
             &v19,
             &v16,
             v14);
      v10 = *v9;
      *v9 = 0LL;
      v11 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( !*((_QWORD *)this + 19) )
      {
        v3 = -2147024882;
        v4 = 2147942414LL;
        v5 = 1744LL;
        goto LABEL_8;
      }
      v8 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion((__int64)this);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v3 = 0;
        goto LABEL_18;
      }
      v5 = 1747LL;
    }
    else
    {
      v5 = 1739LL;
    }
    v4 = (unsigned int)v8;
  }
  else
  {
    v3 = -2147467261;
    v4 = 2147500035LL;
    v5 = 1737LL;
  }
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v4);
LABEL_18:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
  return v3;
}
