/*
 * XREFs of ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18010049C
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x180102BC4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800535E4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1801008F8 (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 *     ?_Change_array@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIInspectable@Foundation@Windows@winrt@@_K1@Z @ 0x180103C2C (-_Change_array@-$vector@UIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Found.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::vector<winrt::Windows::Foundation::IInspectable>::_Emplace_reallocate<winrt::Windows::Foundation::IInspectable const &>(
        const char *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  __int64 v13; // rsi
  winrt::Windows::Foundation::IUnknown *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (winrt::Windows::Foundation::IUnknown *)(v13 + 8 * v5);
  *(_QWORD *)v14 = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref(v14);
  v15 = *((_QWORD *)a1 + 1);
  v16 = (char *)v13;
  v17 = *(_QWORD *)a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v17, a2, v13);
    v15 = *((_QWORD *)a1 + 1);
    v16 = (char *)v14 + 8;
    v17 = a2;
  }
  std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v17, v15, v16);
  std::vector<winrt::Windows::Foundation::IInspectable>::_Change_array(a1, v13, v9, v3);
  return v14;
}
