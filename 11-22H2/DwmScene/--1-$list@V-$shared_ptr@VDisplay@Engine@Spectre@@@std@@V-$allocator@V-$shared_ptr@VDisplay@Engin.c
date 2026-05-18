/*
 * XREFs of ??1?$list@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x180031A30
 * Callers:
 *     _Spectre::dtor$8::Engine::Engine_::_1_::dtor$8 @ 0x1800E54E1 (_Spectre--dtor$8--Engine--Engine_--_1_--dtor$8.c)
 *     _Spectre::dtor$5::Engine::_Engine_::_1_::dtor$5 @ 0x1800E57E4 (_Spectre--dtor$5--Engine--_Engine_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::list<std::shared_ptr<Spectre::Engine::Display>>::~list<std::shared_ptr<Spectre::Engine::Display>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (std::_Ref_count_base *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
