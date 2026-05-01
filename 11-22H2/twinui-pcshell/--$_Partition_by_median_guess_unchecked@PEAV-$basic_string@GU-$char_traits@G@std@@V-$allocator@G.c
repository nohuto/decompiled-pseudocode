/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x1803F5EBC
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x1803F6540 (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Guess_median_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x1803F5798 (--$_Guess_median_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$l.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<std::wstring *,std::less<void>>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  char *v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rbp
  char *v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rsi
  _OWORD *v17; // rbp
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  bool v22; // zf
  char *v23; // r14
  int v24; // eax
  int v25; // eax
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  unsigned __int64 *result; // rax

  v6 = a2 + 32 * ((__int64)(a3 - a2) >> 6);
  std::_Guess_median_unchecked<std::wstring *,std::less<void>>(a2, v6, a3 - 32);
  v7 = v6 + 32;
  if ( a2 < v6 )
  {
    v8 = (char *)v6;
    v9 = v6;
    v10 = (char *)v6;
    do
    {
      v11 = (char *)(v6 - 32);
      LOBYTE(v12) = std::wstring::compare((char *)(v9 - 32), v8);
      if ( v12 < 0 )
        break;
      LOBYTE(v13) = std::wstring::compare(v10, (char *)(v6 - 32));
      if ( v13 < 0 )
        break;
      v8 = (char *)(v6 - 32);
      v6 -= 32LL;
      v9 = (unsigned __int64)v11;
      v10 = v11;
    }
    while ( a2 < (unsigned __int64)v11 );
  }
  while ( v7 < a3 )
  {
    LOBYTE(v14) = std::wstring::compare((char *)v7, (char *)v6);
    if ( v14 < 0 )
      break;
    LOBYTE(v15) = std::wstring::compare((char *)v6, (char *)v7);
    if ( v15 < 0 )
      break;
    v7 += 32LL;
  }
  v16 = v7;
  v17 = (_OWORD *)v6;
  while ( 1 )
  {
    while ( v16 < a3 )
    {
      LOBYTE(v18) = std::wstring::compare((char *)v6, (char *)v16);
      if ( v18 < 0 )
        goto LABEL_17;
      LOBYTE(v19) = std::wstring::compare((char *)v16, (char *)v6);
      if ( v19 < 0 )
        break;
      if ( v7 != v16 )
      {
        v20 = *(_OWORD *)v7;
        v21 = *(_OWORD *)(v7 + 16);
        *(_OWORD *)v7 = *(_OWORD *)v16;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v16 + 16);
        *(_OWORD *)v16 = v20;
        *(_OWORD *)(v16 + 16) = v21;
      }
      v7 += 32LL;
LABEL_17:
      v16 += 32LL;
    }
    v22 = v17 == (_OWORD *)a2;
    if ( (unsigned __int64)v17 > a2 )
    {
      v23 = (char *)(v17 - 2);
      do
      {
        LOBYTE(v24) = std::wstring::compare(v23, (char *)v6);
        if ( v24 >= 0 )
        {
          LOBYTE(v25) = std::wstring::compare((char *)v6, v23);
          if ( v25 < 0 )
            break;
          v6 -= 32LL;
          if ( (char *)v6 != v23 )
          {
            v26 = *(_OWORD *)v6;
            v27 = *(_OWORD *)(v6 + 16);
            *(_OWORD *)v6 = *(_OWORD *)v23;
            *(_OWORD *)(v6 + 16) = *((_OWORD *)v23 + 1);
            *(_OWORD *)v23 = v26;
            *((_OWORD *)v23 + 1) = v27;
          }
        }
        v17 -= 2;
        v23 -= 32;
      }
      while ( a2 < (unsigned __int64)v17 );
      v22 = v17 == (_OWORD *)a2;
    }
    if ( v22 )
      break;
    v17 -= 2;
    if ( v16 != a3 )
    {
      v36 = *(_OWORD *)v16;
      v37 = *(_OWORD *)(v16 + 16);
      *(_OWORD *)v16 = *v17;
      *(_OWORD *)(v16 + 16) = v17[1];
      *v17 = v36;
      v17[1] = v37;
      goto LABEL_17;
    }
    v6 -= 32LL;
    if ( v17 != (_OWORD *)v6 )
    {
      v32 = *v17;
      v33 = v17[1];
      *v17 = *(_OWORD *)v6;
      v17[1] = *(_OWORD *)(v6 + 16);
      *(_OWORD *)v6 = v32;
      *(_OWORD *)(v6 + 16) = v33;
    }
    v34 = *(_OWORD *)v6;
    v7 -= 32LL;
    v35 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)v7 = v34;
    *(_OWORD *)(v7 + 16) = v35;
  }
  if ( v16 != a3 )
  {
    if ( v7 != v16 )
    {
      v28 = *(_OWORD *)v6;
      v29 = *(_OWORD *)(v6 + 16);
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)v7 = v28;
      *(_OWORD *)(v7 + 16) = v29;
    }
    v30 = *(_OWORD *)v6;
    v7 += 32LL;
    v31 = *(_OWORD *)(v6 + 16);
    *(_OWORD *)v6 = *(_OWORD *)v16;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v16 + 16);
    v6 += 32LL;
    *(_OWORD *)v16 = v30;
    *(_OWORD *)(v16 + 16) = v31;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
