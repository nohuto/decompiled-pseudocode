/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180328BB8
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803293C8 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x1803284A4 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rsi
  _OWORD *v11; // rbp
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  bool v14; // zf
  _OWORD *v15; // r14
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  unsigned __int64 *result; // rax

  v6 = a2 + 32 * ((__int64)(a3 - a2) >> 6);
  std::_Guess_median_unchecked<std::wstring *,std::less<void>>(a2, v6, a3 - 32);
  v7 = v6 + 32;
  if ( a2 < v6 )
  {
    v8 = (_QWORD *)v6;
    do
    {
      v9 = v8 - 4;
      if ( (int)std::wstring::compare(v8 - 4, v8) < 0 )
        break;
      if ( (int)std::wstring::compare(v8, v8 - 4) < 0 )
        break;
      v6 = (unsigned __int64)(v8 - 4);
      v8 -= 4;
    }
    while ( a2 < (unsigned __int64)v9 );
  }
  while ( v7 < a3
       && (int)std::wstring::compare((_QWORD *)v7, (_QWORD *)v6) >= 0
       && (int)std::wstring::compare((_QWORD *)v6, (_QWORD *)v7) >= 0 )
    v7 += 32LL;
  v10 = v7;
  v11 = (_OWORD *)v6;
  while ( 1 )
  {
    while ( v10 < a3 )
    {
      if ( (int)std::wstring::compare((_QWORD *)v6, (_QWORD *)v10) < 0 )
        goto LABEL_17;
      if ( (int)std::wstring::compare((_QWORD *)v10, (_QWORD *)v6) < 0 )
        break;
      if ( v7 != v10 )
      {
        v12 = *(_OWORD *)v7;
        v13 = *(_OWORD *)(v7 + 16);
        *(_OWORD *)v7 = *(_OWORD *)v10;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v10 + 16);
        *(_OWORD *)v10 = v12;
        *(_OWORD *)(v10 + 16) = v13;
      }
      v7 += 32LL;
LABEL_17:
      v10 += 32LL;
    }
    v14 = v11 == (_OWORD *)a2;
    if ( (unsigned __int64)v11 > a2 )
    {
      v15 = v11 - 2;
      do
      {
        if ( (int)std::wstring::compare(v15, (_QWORD *)v6) >= 0 )
        {
          if ( (int)std::wstring::compare((_QWORD *)v6, v15) < 0 )
            break;
          v6 -= 32LL;
          if ( (_OWORD *)v6 != v15 )
          {
            v16 = *(_OWORD *)v6;
            v17 = *(_OWORD *)(v6 + 16);
            *(_OWORD *)v6 = *v15;
            *(_OWORD *)(v6 + 16) = v15[1];
            *v15 = v16;
            v15[1] = v17;
          }
        }
        v11 -= 2;
        v15 -= 2;
      }
      while ( a2 < (unsigned __int64)v11 );
      v14 = v11 == (_OWORD *)a2;
    }
    if ( v14 )
      break;
    v11 -= 2;
    if ( v10 != a3 )
    {
      v26 = *(_OWORD *)v10;
      v27 = *(_OWORD *)(v10 + 16);
      *(_OWORD *)v10 = *v11;
      *(_OWORD *)(v10 + 16) = v11[1];
      *v11 = v26;
      v11[1] = v27;
      goto LABEL_17;
    }
    v6 -= 32LL;
    if ( v11 != (_OWORD *)v6 )
    {
      v22 = *v11;
      v23 = v11[1];
      *v11 = *(_OWORD *)v6;
      v11[1] = *(_OWORD *)(v6 + 16);
      *(_OWORD *)v6 = v22;
      *(_OWORD *)(v6 + 16) = v23;
    }
    v24 = *(_OWORD *)v6;
    v7 -= 32LL;
    v25 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)v7 = v24;
    *(_OWORD *)(v7 + 16) = v25;
  }
  if ( v10 != a3 )
  {
    if ( v7 != v10 )
    {
      v18 = *(_OWORD *)v6;
      v19 = *(_OWORD *)(v6 + 16);
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)v7 = v18;
      *(_OWORD *)(v7 + 16) = v19;
    }
    v20 = *(_OWORD *)v6;
    v7 += 32LL;
    v21 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v10;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v10 + 16);
    v6 += 32LL;
    *(_OWORD *)v10 = v20;
    *(_OWORD *)(v10 + 16) = v21;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
