/*
 * XREFs of ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140079C8C
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x140078E1C (--$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1400251BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VCBridgeSourceEndpoint@@@WRL@Microsoft@@YAJPEAVCBridgeSourceEndpoint@@PEAVWeakRef@01@@Z @ 0x140078CE4 (--$AsWeak@VCBridgeSourceEndpoint@@@WRL@Microsoft@@YAJPEAVCBridgeSourceEndpoint@@PEAVWeakRef@01@@.c)
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@QEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140078FA0 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 *     ??4?$com_ptr_t@UIDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDeviceGraphObjectCache@@@Z @ 0x140079530 (--4-$com_ptr_t@UIDeviceGraphObjectCache@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDevic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBridgeSourceEndpoint::RuntimeClassInitialize(
        CBridgeSourceEndpoint *this,
        struct IDeviceGraphObjectCache *a2,
        __int64 a3,
        struct IAudioMediaType *a4,
        unsigned int a5)
{
  void **v9; // r12
  const struct tWAVEFORMATEX *v10; // rax
  int v11; // ebx
  void *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r14d
  const struct tWAVEFORMATEX *v15; // rax
  void *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  void **v22; // [rsp+28h] [rbp-48h]
  struct tWAVEFORMATEX *v23; // [rsp+30h] [rbp-40h] BYREF
  char v24; // [rsp+38h] [rbp-38h]
  _QWORD v25[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-20h]
  int v27; // [rsp+54h] [rbp-1Ch]
  struct IAudioMediaType *v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a3;
  v9 = (void **)((char *)this + 72);
  v22 = (void **)((char *)this + 72);
  v23 = 0LL;
  v24 = 1;
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
  v11 = CloneWaveFormat(v10, &v23);
  if ( v24 )
  {
    v12 = *v22;
    *v22 = v23;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v11 < 0 )
  {
    v13 = 94LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  wil::com_ptr_t<IDeviceGraphObjectCache,wil::err_returncode_policy>::operator=((__int64 *)this + 10, (__int64)a2);
  v25[0] = 0LL;
  v25[1] = 0LL;
  v27 = 0;
  v30 = 0;
  v14 = a5;
  v26 = a5;
  v29 = 1094927443;
  v28 = a4;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 10) + 40LL))(
          *((_QWORD *)this + 10),
          v25,
          (char *)this + 88);
  if ( v11 < 0 )
  {
    v13 = 104LL;
    goto LABEL_6;
  }
  v22 = v9;
  v23 = 0LL;
  v24 = 1;
  v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
  v11 = CloneWaveFormat(v15, &v23);
  if ( v24 )
  {
    v16 = *v22;
    *v22 = v23;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( v11 < 0 )
  {
    v13 = 105LL;
    goto LABEL_6;
  }
  v21 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v21);
  v17 = Microsoft::WRL::AsWeak<CBridgeSourceEndpoint>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, &v32);
  v11 = v17;
  if ( v17 >= 0 )
  {
    EnterCriticalSection(&g_lockBridgeEndpointRegistry);
    v34 = &g_lockBridgeEndpointRegistry;
    v19 = qword_1400CF8A8;
    if ( qword_1400CF8A8 == qword_1400CF8B0 )
    {
      std::vector<BridgeEndpointRecord>::_Emplace_reallocate<__int64 &,Microsoft::WRL::WeakRef &>(
        v18,
        qword_1400CF8A8,
        &v33,
        &v32);
    }
    else
    {
      *(_QWORD *)qword_1400CF8A8 = a3;
      *(_QWORD *)(v19 + 8) = v32;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)(v19 + 8));
      qword_1400CF8A8 += 16LL;
    }
    LeaveCriticalSection(&g_lockBridgeEndpointRegistry);
    *((_DWORD *)this + 16) = v14;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
      (const char *)(unsigned int)v17);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v32);
  return (unsigned int)v11;
}
