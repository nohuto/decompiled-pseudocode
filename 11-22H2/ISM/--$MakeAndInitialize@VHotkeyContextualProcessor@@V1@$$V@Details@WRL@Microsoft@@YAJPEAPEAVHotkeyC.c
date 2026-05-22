/*
 * XREFs of ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1801C4BE4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HotkeyContextualProcessor@@QEAA@XZ @ 0x1801C54F0 (--0HotkeyContextualProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801DE794 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyContextualProcessor,HotkeyContextualProcessor,>(
        HotkeyContextualProcessor **a1)
{
  void *v2; // rax
  int v3; // edi
  HotkeyContextualProcessor *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  HotkeyContextualProcessor *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return (unsigned int)v3;
  }
  v4 = HotkeyContextualProcessor::HotkeyContextualProcessor((HotkeyContextualProcessor *)v2);
  v7 = v4;
  v6 = 0LL;
  v3 = HotkeyContextualProcessor::RuntimeClassInitialize(v4);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    goto LABEL_5;
  }
  if ( v4 )
    (*(void (__fastcall **)(HotkeyContextualProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
