/*
 * XREFs of ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x18073BA38
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CC00 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CD30 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::FindApplication(
        __int64 (__fastcall ***this)(CallerIdentity *, GUID *, __int64 *),
        struct IUnknown *a2,
        _QWORD *a3,
        struct IImmersiveApplication **a4)
{
  __int64 (__fastcall **v5)(CallerIdentity *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v8)(CallerIdentity *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rsi
  __int64 *v13; // rdi
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v5 = *this;
  v16 = 0LL;
  v8 = *v5;
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  v10 = v8((CallerIdentity *)this, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v9);
  if ( v10 >= 0 )
  {
    v11 = v16;
    v15 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL);
    v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    v10 = v12(v11, &SID_ImmersiveApplicationArrayService, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, v13);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD *))(*(_QWORD *)v15 + 48LL))(v15, a2, a3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return (unsigned int)v10;
}
