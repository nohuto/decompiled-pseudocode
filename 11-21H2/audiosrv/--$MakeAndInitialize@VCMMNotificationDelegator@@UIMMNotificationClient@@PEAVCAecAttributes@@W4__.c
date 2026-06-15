/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@PEAVCAecAttributes@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@$$QEAPEAVCAecAttributes@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180104D34
 * Callers:
 *     ?RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180105D2C (-RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x180059980 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180105D20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180105D20.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,CAecAttributes *,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3,
        int *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int Interface; // edi
  int v10; // edx
  int v11; // ecx

  *a1 = 0LL;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(v7);
    *v8 = &CMMNotificationDelegator::`vftable';
    v8[1] = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
    v8[2] = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    v8[5] = 0LL;
    *((_DWORD *)v8 + 12) = 0;
    *((_DWORD *)v8 + 13) = 0;
    v10 = *a4;
    v11 = *a3;
    v8[5] = *a2;
    *((_DWORD *)v8 + 12) = v11;
    *((_DWORD *)v8 + 13) = v10;
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMMNotificationClient>::QueryInterface(v8);
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
