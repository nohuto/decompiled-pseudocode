/*
 * XREFs of ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800D6154
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800D6154 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800D8D18 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800D58A4 (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800D5E68 (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800D6154 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 */

char __fastcall std::_Sort_unchecked<unsigned char *,std::less<void>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4)
{
  __int64 k; // rax
  unsigned __int8 *v7; // rsi
  __int64 i; // rdi
  __int64 v9; // r14
  __int64 v10; // r9
  unsigned __int8 *j; // rbx
  __int64 m; // r14
  unsigned __int8 *v13; // rsi
  __int64 v14; // r14
  unsigned __int8 v15; // bp
  _BYTE *v16; // rcx
  unsigned __int8 *v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]
  unsigned __int8 v20; // [rsp+60h] [rbp+8h] BYREF

  k = (__int64)&a2[-a1];
  v7 = a2;
  for ( i = a1; ; k = (__int64)&v7[-i] )
  {
    if ( k <= 32 )
    {
      if ( (unsigned __int8 *)i != v7 )
      {
        for ( j = (unsigned __int8 *)(i + 1); j != v7; ++j )
        {
          v15 = *j;
          v16 = j;
          if ( *j >= *(_BYTE *)i )
          {
            for ( k = (__int64)j; v15 < *(_BYTE *)--k; v16 = (_BYTE *)k )
              *v16 = *(_BYTE *)k;
            *v16 = v15;
          }
          else
          {
            LOBYTE(k) = (unsigned __int8)memmove_0((void *)(i + 1), (const void *)i, (size_t)&j[-i]);
            *(_BYTE *)i = v15;
          }
        }
      }
      return k;
    }
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(&v18, (unsigned __int8 *)i, v7);
    v9 = v19;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)&v18[-i] >= (__int64)&v7[-v19] )
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v19, v7, a3, v10);
      v7 = v18;
    }
    else
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(i, v18, a3, v10);
      i = v9;
    }
  }
  for ( m = (__int64)&v7[-i] >> 1;
        m > 0;
        LOBYTE(k) = std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(
                      i,
                      m,
                      (__int64)&v7[-i],
                      &v20) )
  {
    v20 = *(_BYTE *)(--m + i);
  }
  if ( (__int64)&v7[-i] >= 2 )
  {
    v13 = v7 - 1;
    v14 = 1 - i;
    do
    {
      if ( (__int64)&v13[v14] >= 2 )
      {
        v20 = *v13;
        *v13 = *(_BYTE *)i;
        std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(i, 0LL, (__int64)&v13[-i], &v20);
      }
      LOBYTE(k) = v14 + (_BYTE)--v13;
    }
    while ( (__int64)&v13[v14] >= 2 );
  }
  return k;
}
