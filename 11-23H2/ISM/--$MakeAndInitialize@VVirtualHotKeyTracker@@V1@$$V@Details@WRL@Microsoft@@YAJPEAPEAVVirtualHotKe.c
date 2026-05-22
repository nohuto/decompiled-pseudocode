/*
 * XREFs of ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x1801D0684
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801D0F24 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualHotKeyTracker@@QEAA@XZ @ 0x1801D07F8 (--0VirtualHotKeyTracker@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualHotKeyTracker,VirtualHotKeyTracker,>(
        VirtualHotKeyTracker **a1)
{
  void *v2; // rax
  VirtualHotKeyTracker *v4; // rax
  VirtualHotKeyTracker *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  VirtualHotKeyTracker *v7; // [rsp+38h] [rbp+10h] BYREF
  void *v8; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (VirtualHotKeyTracker *)v2;
  if ( v2 )
  {
    v8 = v2;
    v4 = VirtualHotKeyTracker::VirtualHotKeyTracker((VirtualHotKeyTracker *)v2);
    v5 = v4;
    v7 = v4;
    v6 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(VirtualHotKeyTracker *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return 2147942414LL;
  }
}
