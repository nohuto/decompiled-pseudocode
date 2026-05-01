/*
 * XREFs of ?ApplicationChanged@CDropFeedback@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1805E9320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::ApplicationChanged(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 **v14; // rax
  __int64 *AddressOf; // rax
  __int64 **v16; // rax
  int (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 *v18; // rbx
  int (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rsi
  int v21; // [rsp+30h] [rbp-30h] BYREF
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+30h] BYREF

  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v26);
    v9 = 0;
    if ( v26 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a1 + 88);
        v22 = 0LL;
        v23 = 0LL;
        v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
        if ( v11(v10, v9, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v22) >= 0 )
        {
          v12 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
          v13 = (*v22)[5];
          v14 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v24);
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v14);
          if ( ((int (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64 *))v13)(v12, AddressOf) >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v23 + 104LL))(v23, a2, &v21);
            if ( v21 )
              break;
          }
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
        if ( ++v9 >= v26 )
          return 0LL;
      }
      v24 = 0LL;
      v16 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v25);
      v17 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
      v18 = *v16;
      v19 = **v22;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(*v16);
      if ( v19(v17, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060, v18) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 24LL))(v24, a2, a3, a4);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
    }
  }
  return 0LL;
}
