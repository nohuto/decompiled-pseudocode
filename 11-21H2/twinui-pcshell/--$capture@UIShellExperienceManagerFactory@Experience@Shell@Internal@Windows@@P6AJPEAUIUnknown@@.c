/*
 * XREFs of ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1805D1B98
 * Callers:
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D1C88 (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, void *, void *, __int64 *),
        _QWORD *a3)
{
  signed int v4; // eax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = a2(
         *a3,
         &unk_1806F0160,
         &winrt::impl::guid_v<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>,
         &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v6;
  return a1;
}
