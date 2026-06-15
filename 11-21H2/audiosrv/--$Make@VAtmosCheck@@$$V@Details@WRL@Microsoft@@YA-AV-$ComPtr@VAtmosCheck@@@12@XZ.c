/*
 * XREFs of ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180059380
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180057C1C (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180059400 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
AtmosCheck **__fastcall Microsoft::WRL::Details::Make<AtmosCheck,>(AtmosCheck **a1)
{
  AtmosCheck *v2; // rax
  AtmosCheck *v3; // rdi

  *a1 = 0LL;
  v2 = (AtmosCheck *)operator new(0x2C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = AtmosCheck::AtmosCheck(v2);
    if ( *a1 )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
