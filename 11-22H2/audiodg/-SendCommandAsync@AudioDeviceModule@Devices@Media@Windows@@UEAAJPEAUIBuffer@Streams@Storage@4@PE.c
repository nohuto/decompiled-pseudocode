/*
 * XREFs of ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14008C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14007BF24 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperatio.c)
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x14007E87C (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 *     ??1?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1400806CC (--1-$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14008A800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IA_ea_14008A800.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::SendCommandAsync(
        struct Windows::Media::Devices::AudioDeviceModule *a1,
        struct Windows::Storage::Streams::IBuffer *a2,
        __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // rax
  Windows::Media::Devices::SendCommandAsyncOperation *v10; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Media::Devices::AudioDeviceModule *v11; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct Windows::Storage::Streams::IBuffer *v13; // [rsp+48h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v13 = a2;
  v10 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 2147942487LL;
    v6 = 445LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v5);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>((__int64 *)&v10);
    return v4;
  }
  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = 2147500035LL;
    v6 = 446LL;
    goto LABEL_10;
  }
  *a3 = 0LL;
  v11 = a1;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
         &v10,
         &v11,
         &v13);
  v4 = v7;
  if ( v7 < 0 )
  {
    v6 = 450LL;
LABEL_9:
    v5 = (unsigned int)v7;
    goto LABEL_10;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>>(
         (__int64)v10,
         &GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb,
         &v14);
  v4 = v7;
  if ( v7 < 0 )
  {
    v6 = 451LL;
    goto LABEL_9;
  }
  v9 = v14;
  v14 = 0LL;
  *a3 = v9;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release((__int64)v10);
  return 0LL;
}
