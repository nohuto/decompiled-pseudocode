/*
 * XREFs of ??$Initialize@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@2@@Z @ 0x14007E0A0
 * Callers:
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@3@@Z @ 0x1400897B0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x14001B748 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x140025334 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::Initialize<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v7);
  v4 = 0;
  v5 = v3;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(v3);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_cb786404_f2e8_5e0b_bf12_39e31483cfae, a2, v5);
  }
  else
  {
    v7 = (__int64 *)*v3;
    v8 = 0LL;
    *v3 = 0LL;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease((__int64 *)&v7);
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v8);
  }
  return v4;
}
