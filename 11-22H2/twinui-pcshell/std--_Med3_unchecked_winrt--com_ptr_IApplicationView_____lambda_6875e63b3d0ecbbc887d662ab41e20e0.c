/*
 * XREFs of std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1806817C0
 * Callers:
 *     std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681634 (std--_Guess_median_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662a.c)
 * Callees:
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180682F00 (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

__int64 __fastcall std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(a1, a2, a1) )
  {
    v7 = *a2;
    *a2 = *a1;
    *a1 = v7;
  }
  result = lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, a3, a2);
  if ( (_BYTE)result )
  {
    v9 = *a3;
    *a3 = *a2;
    *a2 = v9;
    result = lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v9, a2, a1);
    if ( (_BYTE)result )
    {
      result = *a1;
      v10 = *a2;
      *a2 = *a1;
      *a1 = v10;
    }
  }
  return result;
}
