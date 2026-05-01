/*
 * XREFs of std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681890
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681634 (std--_Guess_median_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662a.c)
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x180682F00 (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  _QWORD *v12; // r14
  bool v13; // zf
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 8 * ((__int64)((__int64)a3 - a2) >> 4));
  std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
    a2,
    (__int64)v6,
    (__int64)(a3 - 1));
  v8 = v6 + 1;
  if ( a2 < (unsigned __int64)v6 )
  {
    v9 = v6;
    do
    {
      v10 = v6 - 1;
      if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v9 - 1, v6) )
        break;
      if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v6 - 1) )
        break;
      --v6;
      v9 = v10;
    }
    while ( a2 < (unsigned __int64)v10 );
  }
  while ( v8 < a3
       && !(unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v8, v6)
       && !(unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v8) )
    ++v8;
  v11 = v8;
  v12 = v6;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v11) )
        goto LABEL_17;
      if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v11, v6) )
        break;
      if ( v8 != v11 )
      {
        v7 = *v8;
        *v8 = *v11;
        *v11 = v7;
      }
      ++v8;
LABEL_17:
      ++v11;
    }
    v13 = v12 == (_QWORD *)a2;
    if ( (unsigned __int64)v12 > a2 )
    {
      v14 = v12 - 1;
      do
      {
        if ( !(unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v14, v6) )
        {
          if ( (unsigned __int8)lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v14) )
            break;
          if ( --v6 != v14 )
          {
            v7 = *v6;
            *v6 = *v14;
            *v14 = v7;
          }
        }
        --v12;
        --v14;
      }
      while ( a2 < (unsigned __int64)v12 );
      v13 = v12 == (_QWORD *)a2;
    }
    if ( v13 )
      break;
    --v12;
    if ( v11 != a3 )
    {
      v7 = *v11;
      *v11 = *v12;
      *v12 = v7;
      goto LABEL_17;
    }
    if ( v12 != --v6 )
    {
      v16 = *v12;
      *v12 = *v6;
      *v6 = v16;
    }
    v7 = *v6;
    *v6 = *--v8;
    *v8 = v7;
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
    {
      v15 = *v6;
      *v6 = *v8;
      *v8 = v15;
    }
    v7 = *v6;
    ++v8;
    *v6++ = *v11;
    *v11 = v7;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
