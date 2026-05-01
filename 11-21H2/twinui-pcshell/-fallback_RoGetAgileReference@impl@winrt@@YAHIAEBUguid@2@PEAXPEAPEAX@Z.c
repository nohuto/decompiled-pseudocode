/*
 * XREFs of ?fallback_RoGetAgileReference@impl@winrt@@YAHIAEBUguid@2@PEAXPEAPEAX@Z @ 0x1803444A0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  LPVOID v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v11[0] = 0LL;
  Instance_0 = CoCreateInstance_0(
                 &`winrt::impl::fallback_RoGetAgileReference'::`2'::git_clsid,
                 0LL,
                 1u,
                 &winrt::impl::guid_v<winrt::impl::IGlobalInterfaceTable>,
                 v11);
  if ( Instance_0 < 0
    || (v12 = 0,
        Instance_0 = (*(__int64 (__fastcall **)(LPVOID, const struct winrt::guid *, __int64, int *))(*(_QWORD *)v11[0] + 24LL))(
                       v11[0],
                       a3,
                       a2,
                       &v12),
        Instance_0 < 0) )
  {
    if ( v11[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)v11);
    return (unsigned int)Instance_0;
  }
  else
  {
    v9 = (LPVOID *)operator new(0x18uLL);
    v10 = v12;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *v9 = &winrt::impl::agile_ref_fallback::`vftable';
    v9[1] = v11[0];
    *((_DWORD *)v9 + 4) = v10;
    *((_DWORD *)v9 + 5) = 1;
    *a4 = v9;
    return 0LL;
  }
}
