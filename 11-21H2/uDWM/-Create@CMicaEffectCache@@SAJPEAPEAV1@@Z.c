/*
 * XREFs of ?Create@CMicaEffectCache@@SAJPEAPEAV1@@Z @ 0x180062A14
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z @ 0x180062928 (-Alloc@WPF@@YAPEAXPEAVHeapBase@1@_J_K@Z.c)
 *     ??1?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ @ 0x180062998 (--1-$unique_ptr@VCMicaEffectCache@@U-$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@CMicaEffectCache@@AEAAJXZ @ 0x180062CF0 (-Initialize@CMicaEffectCache@@AEAAJXZ.c)
 */

__int64 __fastcall CMicaEffectCache::Create(struct CMicaEffectCache **a1, struct WPF::HeapBase *a2)
{
  CMicaEffectCache *v3; // rax
  CMicaEffectCache *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CMicaEffectCache *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v3 = (CMicaEffectCache *)WPF::Alloc((WPF *)a1, a2, 24LL);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v9 = v4;
  v5 = CMicaEffectCache::Initialize(v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = 0LL;
    v6 = 0;
    *a1 = v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"clientcore\\windows\\dwm\\udwm\\SystemBackdropVisual.h",
      (const char *)(unsigned int)v5);
  }
  std::unique_ptr<CMicaEffectCache>::~unique_ptr<CMicaEffectCache>(&v9);
  return v6;
}
