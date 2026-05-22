/*
 * XREFs of ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x1801B2154
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801B2A04 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualHotKeyTracker@@QEAA@XZ @ 0x1801B22D0 (--0VirtualHotKeyTracker@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualHotKeyTracker,VirtualHotKeyTracker,>(
        VirtualHotKeyTracker **a1)
{
  VirtualHotKeyTracker *v2; // rax
  VirtualHotKeyTracker *v4; // rax
  VirtualHotKeyTracker *v5; // rdi
  VirtualHotKeyTracker *v7; // [rsp+48h] [rbp+10h] BYREF
  VirtualHotKeyTracker *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (VirtualHotKeyTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = VirtualHotKeyTracker::VirtualHotKeyTracker(v2);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(VirtualHotKeyTracker *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
