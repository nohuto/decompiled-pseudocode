/*
 * XREFs of ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003ECA8
 * Callers:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18003EC28 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 * Callees:
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18003ED40 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::Create(unsigned __int64 a1, struct CGlobalLightSet **a2)
{
  CGlobalLightSet *v4; // rax
  CGlobalLightSet *v5; // rax
  struct CGlobalLightSet *v6; // rbx
  int v7; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CGlobalLightSet *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = (CGlobalLightSet *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            136LL);
  v11 = v4;
  if ( !v4 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
  v5 = CGlobalLightSet::CGlobalLightSet(v4, a1);
  v6 = v5;
  v11 = v5;
  if ( !v5 )
  {
LABEL_6:
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      v9);
    goto LABEL_7;
  }
  v7 = CGlobalLightSet::Initialize(v5);
  if ( v7 >= 0 )
  {
    *a2 = v6;
    return 0LL;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v11);
  return (unsigned int)v7;
}
