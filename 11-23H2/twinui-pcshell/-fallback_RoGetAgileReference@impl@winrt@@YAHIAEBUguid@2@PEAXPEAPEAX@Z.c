/*
 * XREFs of ?fallback_RoGetAgileReference@impl@winrt@@YAHIAEBUguid@2@PEAXPEAPEAX@Z @ 0x1804122D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CoCreateInstance_0 @ 0x1801C7A95 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::fallback_RoGetAgileReference(
        winrt::impl *this,
        __int64 a2,
        const struct winrt::guid *a3,
        LPVOID **a4)
{
  HRESULT Instance_0; // ebx
  LPVOID *v9; // rax
  int v10; // edx
  LPVOID ppv[2]; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  ppv[0] = 0LL;
  Instance_0 = CoCreateInstance_0(
                 &`winrt::impl::fallback_RoGetAgileReference'::`2'::git_clsid,
                 0LL,
                 1u,
                 &winrt::impl::guid_v<winrt::impl::IGlobalInterfaceTable>,
                 ppv);
  if ( Instance_0 < 0
    || (v12 = 0,
        Instance_0 = (*(__int64 (__fastcall **)(LPVOID, const struct winrt::guid *, __int64, int *))(*(_QWORD *)ppv[0] + 24LL))(
                       ppv[0],
                       a3,
                       a2,
                       &v12),
        Instance_0 < 0) )
  {
    if ( ppv[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)ppv);
    return (unsigned int)Instance_0;
  }
  else
  {
    v9 = (LPVOID *)operator new(0x18uLL);
    v10 = v12;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *v9 = &winrt::impl::agile_ref_fallback::`vftable';
    v9[1] = ppv[0];
    *((_DWORD *)v9 + 4) = v10;
    *((_DWORD *)v9 + 5) = 1;
    *a4 = v9;
    return 0LL;
  }
}
