/*
 * XREFs of ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14008BCA8
 * Callers:
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x14007E82C (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140080FE4 (--4-$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x14008CC90 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        struct Windows::Media::Devices::AudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Media::Devices::AudioDeviceModule *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 24,
    (__int64)a3);
  v6 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start((char *)this + 16);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x654,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
