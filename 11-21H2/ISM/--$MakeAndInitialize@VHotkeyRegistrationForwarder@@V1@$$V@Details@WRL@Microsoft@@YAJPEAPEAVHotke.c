/*
 * XREFs of ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180030C58
 * Callers:
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x180030C14 (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180031218 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ??0HotkeyRegistrationForwarder@@QEAA@XZ @ 0x180031AB0 (--0HotkeyRegistrationForwarder@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(
        HotkeyRegistrationForwarder **a1)
{
  HotkeyRegistrationForwarder *v2; // rax
  HotkeyRegistrationForwarder *v3; // rdi
  int v4; // ebx
  HotkeyRegistrationForwarder *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (HotkeyRegistrationForwarder *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = HotkeyRegistrationForwarder::HotkeyRegistrationForwarder(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = HotkeyRegistrationForwarder::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
