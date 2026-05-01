/*
 * XREFs of ??$MakeAndInitialize@VDefaultLaunchPositionOverride@@UIDefaultLaunchPositionOverride@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDefaultLaunchPositionOverride@@@Z @ 0x1800EFEEC
 * Callers:
 *     ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0030 (-DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0DefaultLaunchPositionOverride@@QEAA@XZ @ 0x1800EFE64 (--0DefaultLaunchPositionOverride@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DefaultLaunchPositionOverride,IDefaultLaunchPositionOverride,>(
        _QWORD *a1)
{
  DefaultLaunchPositionOverride *v2; // rax
  DefaultLaunchPositionOverride *v3; // rbx
  unsigned int v4; // edi

  *a1 = 0LL;
  v2 = (DefaultLaunchPositionOverride *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = DefaultLaunchPositionOverride::DefaultLaunchPositionOverride(v2);
    v4 = (**(__int64 (__fastcall ***)(DefaultLaunchPositionOverride *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_1d220fb5_768d_4a75_a66c_fe0f2f547926,
           a1);
    (*(void (__fastcall **)(DefaultLaunchPositionOverride *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
