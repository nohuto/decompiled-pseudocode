/*
 * XREFs of ??$AsWeak@VCBridgeSourceEndpoint@@@WRL@Microsoft@@YAJPEAVCBridgeSourceEndpoint@@PEAVWeakRef@01@@Z @ 0x140078CE4
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140079C8C (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1400251BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<CBridgeSourceEndpoint>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  v3 = (**a1)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v10);
  if ( v3 < 0 )
  {
    v4 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return (unsigned int)v3;
  }
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v11);
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v3;
  }
  v7 = v11;
  v12 = v11;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&v12);
  v12 = 0LL;
  v9 = *a2;
  *a2 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v11);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
