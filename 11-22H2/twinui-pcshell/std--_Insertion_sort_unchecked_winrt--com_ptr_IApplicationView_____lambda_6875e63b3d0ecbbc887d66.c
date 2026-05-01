/*
 * XREFs of std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1806816F4
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$_Move_backward_unchecked@PEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@00@Z @ 0x180681840 (--$_Move_backward_unchecked@PEAU-$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU-$com_pt.c)
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180682F00 (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *i; // rdi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 *j; // rbx
  char v11; // al
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; i != a2; ++i )
    {
      v5 = i;
      v6 = *i;
      *i = 0LL;
      v12 = v6;
      if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(a1, &v12, a1) )
      {
        std::_Move_backward_unchecked<winrt::com_ptr<IApplicationView> *,winrt::com_ptr<IApplicationView> *>(
          a1,
          i,
          i + 1);
        v8 = a1;
      }
      else
      {
        for ( j = i; ; v5 = j )
        {
          v11 = lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, &v12, --j);
          v8 = v5;
          if ( !v11 )
            break;
          winrt::com_ptr<ITouchSwipe>::operator=(v5, j);
        }
      }
      winrt::com_ptr<ITouchSwipe>::operator=(v8, &v12);
      if ( v12 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    }
  }
  return a2;
}
