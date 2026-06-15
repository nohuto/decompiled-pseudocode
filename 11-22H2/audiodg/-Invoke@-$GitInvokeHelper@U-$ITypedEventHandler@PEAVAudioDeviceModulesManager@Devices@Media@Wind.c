/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIAudioDeviceModulesManager@Devices@Media@4@PEAUIAudioDeviceModuleNotificationEventArgs@674@@Z @ 0x140088080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v9);
  v6 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1,
           &v9);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
  }
  else
  {
    v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v9);
  return (unsigned int)v7;
}
