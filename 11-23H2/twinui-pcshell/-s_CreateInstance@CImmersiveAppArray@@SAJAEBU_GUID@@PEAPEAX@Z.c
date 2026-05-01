/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18016F274
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180170BE0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180170D10 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18039BCF0 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Make@VCImmersiveAppArray@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveAppArray@@@12@XZ @ 0x18016F318 (--$Make@VCImmersiveAppArray@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveAppArray@@@12@X.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  const struct _GUID *v5; // rbx
  int Instance; // edi
  const struct _GUID *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<CImmersiveAppArray,>(&v8);
  v5 = v8;
  if ( v8 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)v8[1].Data4);
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v5->Data1)(
                   v5,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v5->Data1 + 16LL))(v5);
  return (unsigned int)Instance;
}
