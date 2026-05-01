/*
 * XREFs of std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681A6C
 * Callers:
 *     std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681B58 (std--_Sort_heap_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41.c)
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180682F00 (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

__int64 *__fastcall std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  __int64 i; // rsi
  __int64 v11; // rsi

  v5 = (a3 - 1) >> 1;
  v7 = a2;
  for ( i = a2; i < v5; v7 = i )
  {
    i = 2 * i + 2;
    if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(a1, a1 + 8 * i, a1 + 8 * i - 8) )
      --i;
    winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)(a1 + 8 * v7), (__int64 *)(a1 + 8 * i));
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)(a1 + 8 * v7), (__int64 *)(a1 + 8 * (a3 - 1)));
    v7 = a3 - 1;
  }
  if ( a2 < v7 )
  {
    do
    {
      v11 = (v7 - 1) >> 1;
      if ( !(unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(a1, a1 + 8 * v11, a4) )
        break;
      winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)(a1 + 8 * v7), (__int64 *)(a1 + 8 * v11));
      v7 = (v7 - 1) >> 1;
    }
    while ( a2 < v11 );
  }
  return winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)(a1 + 8 * v7), a4);
}
