/*
 * XREFs of ?RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ @ 0x1805FB37C
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18060DD08 (--0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAltTabViewController::RegisterKeyboardHook(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rax
  std::_Ref_count_base **v4; // rbx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  void *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = operator new(0x10uLL);
  v2 = AltTabWindowHook::AltTabWindowHook(v10, a1);
  v3 = (__int64 *)(a1 + 376);
  if ( (void **)(a1 + 376) == &v10 )
  {
    if ( !v2 )
      return;
    AltTabWindowHook::s_altTabHook = 0LL;
    v8 = qword_1807B4BA0;
    qword_1807B4BA0 = 0LL;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    v9 = *(std::_Ref_count_base **)(v2 + 8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v7 = (void *)v2;
  }
  else
  {
    v4 = (std::_Ref_count_base **)*v3;
    *v3 = v2;
    if ( !v4 )
      return;
    AltTabWindowHook::s_altTabHook = 0LL;
    v5 = qword_1807B4BA0;
    qword_1807B4BA0 = 0LL;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    v6 = v4[1];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v7 = v4;
  }
  operator delete(v7);
}
