/*
 * XREFs of ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18004CCB0
 * Callers:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18004CC30 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004D0B8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18004E038 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::Create(unsigned __int64 a1, struct CGlobalLightSet **a2)
{
  CGlobalLightSet *v4; // rax
  CGlobalLightSet *v5; // rax
  struct CGlobalLightSet *v6; // rsi
  CBaseObject *v7; // rbx
  int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CGlobalLightSet *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            112LL);
  if ( !v4 )
  {
    v7 = 0LL;
    goto LABEL_9;
  }
  v5 = CGlobalLightSet::CGlobalLightSet(v4, a1);
  v6 = v5;
  v7 = v5;
  if ( !v5 )
  {
LABEL_9:
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_5;
  }
  v8 = CGlobalLightSet::Initialize(v5);
  if ( v8 >= 0 )
  {
    v7 = 0LL;
    *a2 = v6;
    v8 = 0;
  }
LABEL_5:
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)v8;
}
