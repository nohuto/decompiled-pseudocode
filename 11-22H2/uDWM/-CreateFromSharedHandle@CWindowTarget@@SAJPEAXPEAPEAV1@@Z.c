/*
 * XREFs of ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x18010DA04
 * Callers:
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E5660 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x18001A750 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x18010D798 (-Attach@-$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowTarget::CreateFromSharedHandle(void *a1, struct CWindowTarget **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rbx
  void *v6; // rdx
  CVisual *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVisual *v12; // [rsp+40h] [rbp+18h] BYREF
  CVisual *v13; // [rsp+48h] [rbp+20h]

  v12 = 0LL;
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    248LL);
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xF8uLL);
    CVisual::CVisual(v5);
    *(_QWORD *)v5 = &CWindowTarget::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<CWindowTarget>::Attach(&v12, v5);
  v6 = a1;
  v7 = v12;
  v8 = CVisual::InitializeFromSharedHandle(v12, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *a2 = v7;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  return v9;
}
