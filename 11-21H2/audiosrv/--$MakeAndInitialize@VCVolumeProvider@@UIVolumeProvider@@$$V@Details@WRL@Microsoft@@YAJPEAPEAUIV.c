/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005C774
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>()
{
  unsigned int v0; // ebx
  struct IVolumeProvider *v1; // rax
  struct IVolumeProvider *v2; // rdi
  const struct _GUID *v3; // rcx

  v0 = 0;
  g_pVolumeProvider = 0LL;
  v1 = (struct IVolumeProvider *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = v1;
  if ( v1 )
  {
    *((_DWORD *)v1 + 3) = 1;
    *(_QWORD *)v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeProvider>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &CVolumeProvider::`vftable';
    g_pVolumeProvider = 0LL;
    if ( InlineIsEqualGUID(&GUID_bd295271_9adb_40ce_9bd9_5bb40bfcabf9, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v3, v3) )
    {
      g_pVolumeProvider = v2;
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v0 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::Release(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v0;
}
