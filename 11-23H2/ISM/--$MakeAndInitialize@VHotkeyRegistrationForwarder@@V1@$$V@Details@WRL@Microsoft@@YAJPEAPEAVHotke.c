/*
 * XREFs of ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180044EBC
 * Callers:
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x180044CB8 (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0HotkeyRegistrationForwarder@@QEAA@XZ @ 0x180044F60 (--0HotkeyRegistrationForwarder@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180045538 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(
        HotkeyRegistrationForwarder **a1)
{
  HotkeyRegistrationForwarder *v2; // rax
  HotkeyRegistrationForwarder *v3; // rbx
  int v4; // edi
  HotkeyRegistrationForwarder *v6; // [rsp+30h] [rbp+8h] BYREF
  HotkeyRegistrationForwarder *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (HotkeyRegistrationForwarder *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return (unsigned int)v4;
  }
  v3 = HotkeyRegistrationForwarder::HotkeyRegistrationForwarder(v2);
  v7 = v3;
  v6 = 0LL;
  v4 = HotkeyRegistrationForwarder::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v7);
    goto LABEL_8;
  }
  if ( v3 )
    (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v3 + 8LL))(v3);
  *a1 = v3;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
