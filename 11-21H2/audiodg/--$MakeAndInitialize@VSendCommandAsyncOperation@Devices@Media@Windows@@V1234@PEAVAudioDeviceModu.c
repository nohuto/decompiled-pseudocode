/*
 * XREFs of ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140071BE4
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14007EF20 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140024740 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ @ 0x1400734D8 (--0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14007D400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IA_ea_14007D400.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14007E8D8 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
        volatile signed __int64 **a1,
        struct Windows::Media::Devices::AudioDeviceModule **a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  Windows::Media::Devices::SendCommandAsyncOperation *v6; // rax
  int v7; // edi
  volatile signed __int64 *v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  *a1 = 0LL;
  v6 = (Windows::Media::Devices::SendCommandAsyncOperation *)operator new(
                                                               0xC8uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile signed __int64 *)Windows::Media::Devices::SendCommandAsyncOperation::SendCommandAsyncOperation(v6);
    v7 = Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(
           (Windows::Media::Devices::SendCommandAsyncOperation *)v8,
           *a2,
           *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
      {
        v10 = *((_QWORD *)v8 + 20);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64(v8 + 20, v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
      }
LABEL_11:
      *a1 = v8;
      v7 = 0;
    }
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
