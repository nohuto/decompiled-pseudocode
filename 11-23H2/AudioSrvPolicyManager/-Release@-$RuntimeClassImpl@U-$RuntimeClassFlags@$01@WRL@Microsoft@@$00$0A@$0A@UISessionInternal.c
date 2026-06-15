/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D9F0
 * Callers:
 *     ??$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaybackManager@@@12@XZ @ 0x18001AF28 (--$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPlaybackManager@@@12@XZ.c)
 *     ??1?$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001BD78 (--1-$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18001E3F8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18001E850 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A170 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
