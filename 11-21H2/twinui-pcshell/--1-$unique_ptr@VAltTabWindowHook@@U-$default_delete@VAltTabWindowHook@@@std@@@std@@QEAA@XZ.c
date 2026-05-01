/*
 * XREFs of ??1?$unique_ptr@VAltTabWindowHook@@U?$default_delete@VAltTabWindowHook@@@std@@@std@@QEAA@XZ @ 0x1805F9624
 * Callers:
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$8 @ 0x18060E0DE (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$8.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AltTabWindowHook>::~unique_ptr<AltTabWindowHook>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = qword_1807B4BA0;
    qword_1807B4BA0 = 0LL;
    AltTabWindowHook::s_altTabHook = 0LL;
    if ( v2 )
      std::_Ref_count_base::_Decref(v2);
    v3 = (std::_Ref_count_base *)v1[1];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v1);
  }
}
