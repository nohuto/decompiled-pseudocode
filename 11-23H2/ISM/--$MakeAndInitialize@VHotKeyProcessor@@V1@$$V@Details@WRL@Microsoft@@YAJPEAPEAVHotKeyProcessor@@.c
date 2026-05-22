/*
 * XREFs of ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x1801D0598
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801D0F24 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801F0844 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801F2A28 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,>(HotKeyProcessor **a1)
{
  void *v2; // rax
  int v3; // edi
  HotKeyProcessor *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  HotKeyProcessor *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (HotKeyProcessor *)v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v6);
    return (unsigned int)v3;
  }
  v8 = v2;
  v4 = HotKeyProcessor::HotKeyProcessor((HotKeyProcessor *)v2);
  v7 = v4;
  v6 = 0LL;
  v3 = HotKeyProcessor::RuntimeClassInitialize(v4);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    goto LABEL_5;
  }
  if ( v4 )
    (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
