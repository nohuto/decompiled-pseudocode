/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA@XZ @ 0x18050C0A8
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$36 @ 0x1802B8AA2 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$36.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::~list<std::pair<unsigned int const,KeyboardHosting::ViewState>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x58uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x58uLL);
}
