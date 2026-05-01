/*
 * XREFs of ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180141A2C
 * Callers:
 *     _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x180129B38 (_lambda_8eaa9d9bc48e0c760b532341ceadabea_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@QEAA@XZ @ 0x180141AC4 (--0-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
        _QWORD *a1,
        _DWORD *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = (_DWORD *)details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>(v5);
    v8 = v6;
    v6[16] = *a2;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
