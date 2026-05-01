/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x1801D6BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800282C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801BDC3C (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        signed __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0331_0003 *a2)
{
  int v4; // r14d
  __int64 *v5; // rax
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rdi
  void *v8; // rbx
  int (__fastcall *v9)(void *, signed __int64, __int64 *); // rdi
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  if ( *(_BYTE *)(this + 616) )
  {
    v4 = -2147019873;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    v5 = CWRLObjectWithGITSite::SiteUnk(this - 64, &v12);
    v4 = IAMPrivate_QueryObject(
           (struct IUnknown *)*v5,
           (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      v6 = v11;
      v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
      v4 = v7(v6, *(_QWORD *)(this + 472), &v12);
      if ( v4 >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 380);
        v4 = 0;
        if ( *(_BYTE *)(v12 + 33) || *(_BYTE *)(v12 + 35) )
        {
          v13 = 0LL;
          v8 = v11;
          v9 = *(int (__fastcall **)(void *, signed __int64, __int64 *))(*(_QWORD *)v11 + 112LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
          if ( v9(v8, this & -(__int64)(this != 112), &v13) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v4;
}
