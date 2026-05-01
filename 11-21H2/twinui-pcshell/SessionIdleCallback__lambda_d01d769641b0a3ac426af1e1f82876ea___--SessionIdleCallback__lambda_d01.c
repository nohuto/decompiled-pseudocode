/*
 * XREFs of SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___ @ 0x1800FC980
 * Callers:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____lambda_d01d769641b0a3ac426af1e1f82876ea__&_ @ 0x1800FC8E4 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____l.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_180632CF8;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 24) = a2[1];
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return a1;
}
