/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801237F8
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801236D0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802E3E60 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 * Callees:
 *     ??0CImmersiveAppArray@@QEAA@XZ @ 0x180123B2C (--0CImmersiveAppArray@@QEAA@XZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveAppArray *v3; // rbx
  CImmersiveAppArray *v4; // rax
  const struct _GUID *v5; // rdx
  int v6; // ecx
  void **v7; // rdi
  int Instance; // esi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveAppArray *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    v3 = CImmersiveAppArray::CImmersiveAppArray(v4);
    v7 = (void **)v3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v6, v5, v7 + 3);
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(CImmersiveAppArray *, GUID *, void **))v3)(
                   v3,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v7 )
    (*((void (__fastcall **)(void **))*v7 + 2))(v7);
  return (unsigned int)Instance;
}
