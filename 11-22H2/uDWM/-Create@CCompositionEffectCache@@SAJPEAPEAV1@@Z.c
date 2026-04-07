/*
 * XREFs of ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x18004A578
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18004B174 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x1800AD3BC (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositionEffectCache::Create(struct CCompositionEffectCache **a1)
{
  CCompositionEffectCache *v2; // rax
  CCompositionEffectCache *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCompositionEffectCache *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CCompositionEffectCache *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                                    WPF::g_pProcessHeap,
                                    72LL);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v9 = v3;
  v4 = CCompositionEffectCache::Initialize(v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v4,
      v7);
    std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>(&v9);
    return v5;
  }
  else
  {
    *a1 = v3;
    return 0LL;
  }
}
