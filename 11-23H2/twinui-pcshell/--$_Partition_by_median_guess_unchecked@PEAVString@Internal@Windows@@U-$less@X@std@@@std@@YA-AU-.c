/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3470
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1803D31B0 (--$_Guess_median_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Inter.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

Windows::Internal::String **__fastcall std::_Partition_by_median_guess_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String **a1,
        Windows::Internal::String *a2,
        HSTRING *a3)
{
  Windows::Internal::String *v5; // rdi
  HSTRING *v6; // rsi
  Windows::Internal::String *v7; // rcx
  Windows::Internal::String *v8; // rbx
  HSTRING *v9; // r14
  HSTRING *v10; // r15
  HSTRING v11; // rbx
  bool v12; // zf
  HSTRING *v13; // rbp
  HSTRING v14; // rbx
  HSTRING v15; // rbx
  HSTRING v16; // rbx
  HSTRING v17; // rbx
  HSTRING v18; // rbx
  HSTRING v19; // rbx
  Windows::Internal::String **result; // rax

  v5 = (Windows::Internal::String *)((char *)a2 + 8 * (((char *)a3 - (char *)a2) >> 4));
  std::_Guess_median_unchecked<Windows::Internal::String *,std::less<void>>(
    a2,
    v5,
    (Windows::Internal::String *)(a3 - 1));
  v6 = (HSTRING *)((char *)v5 + 8);
  if ( a2 < v5 )
  {
    v7 = v5;
    do
    {
      v8 = (Windows::Internal::String *)((char *)v5 - 8);
      if ( (unsigned __int8)Windows::Internal::operator<((char *)v7 - 8, v5) )
        break;
      if ( (unsigned __int8)Windows::Internal::operator<(v5, (char *)v5 - 8) )
        break;
      v5 = (Windows::Internal::String *)((char *)v5 - 8);
      v7 = v8;
    }
    while ( a2 < v8 );
  }
  while ( v6 < a3
       && !(unsigned __int8)Windows::Internal::operator<(v6, v5)
       && !(unsigned __int8)Windows::Internal::operator<(v5, v6) )
    ++v6;
  v9 = v6;
  v10 = (HSTRING *)v5;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( (unsigned __int8)Windows::Internal::operator<(v5, v9) )
        goto LABEL_17;
      if ( (unsigned __int8)Windows::Internal::operator<(v9, v5) )
        break;
      if ( v6 != v9 )
      {
        v11 = *v6;
        *v6 = 0LL;
        Windows::Internal::String::Release(v6);
        *v6 = *v9;
        *v9 = 0LL;
        Windows::Internal::String::Release(v9);
        *v9 = v11;
      }
      ++v6;
LABEL_17:
      ++v9;
    }
    v12 = v10 == (HSTRING *)a2;
    if ( v10 > (HSTRING *)a2 )
    {
      v13 = v10 - 1;
      do
      {
        if ( !(unsigned __int8)Windows::Internal::operator<(v13, v5) )
        {
          if ( (unsigned __int8)Windows::Internal::operator<(v5, v13) )
            break;
          v5 = (Windows::Internal::String *)((char *)v5 - 8);
          if ( v5 != (Windows::Internal::String *)v13 )
          {
            v14 = *(HSTRING *)v5;
            *(_QWORD *)v5 = 0LL;
            Windows::Internal::String::Release((HSTRING *)v5);
            *(_QWORD *)v5 = *v13;
            *v13 = 0LL;
            Windows::Internal::String::Release(v13);
            *v13 = v14;
          }
        }
        --v10;
        --v13;
      }
      while ( a2 < (Windows::Internal::String *)v10 );
      v12 = v10 == (HSTRING *)a2;
    }
    if ( v12 )
      break;
    --v10;
    if ( v9 != a3 )
    {
      v19 = *v9;
      *v9 = 0LL;
      Windows::Internal::String::Release(v9);
      *v9 = *v10;
      *v10 = 0LL;
      Windows::Internal::String::Release(v10);
      *v10 = v19;
      goto LABEL_17;
    }
    v5 = (Windows::Internal::String *)((char *)v5 - 8);
    if ( v10 != (HSTRING *)v5 )
    {
      v17 = *v10;
      *v10 = 0LL;
      Windows::Internal::String::Release(v10);
      *v10 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release((HSTRING *)v5);
      *(_QWORD *)v5 = v17;
    }
    v18 = *(HSTRING *)v5;
    *(_QWORD *)v5 = 0LL;
    --v6;
    Windows::Internal::String::Release((HSTRING *)v5);
    *(_QWORD *)v5 = *v6;
    *v6 = 0LL;
    Windows::Internal::String::Release(v6);
    *v6 = v18;
  }
  if ( v9 != a3 )
  {
    if ( v6 != v9 )
    {
      v15 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release((HSTRING *)v5);
      *(_QWORD *)v5 = *v6;
      *v6 = 0LL;
      Windows::Internal::String::Release(v6);
      *v6 = v15;
    }
    v16 = *(HSTRING *)v5;
    *(_QWORD *)v5 = 0LL;
    ++v6;
    Windows::Internal::String::Release((HSTRING *)v5);
    *(_QWORD *)v5 = *v9;
    *v9 = 0LL;
    Windows::Internal::String::Release(v9);
    v5 = (Windows::Internal::String *)((char *)v5 + 8);
    *v9 = v16;
    goto LABEL_17;
  }
  result = a1;
  a1[1] = (Windows::Internal::String *)v6;
  *a1 = v5;
  return result;
}
