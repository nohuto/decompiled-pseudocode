/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18007BA24
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18007C2C4 (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180068B34 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069BC8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

char *__fastcall std::wstring::append(char *a1, char *a2, unsigned __int64 a3)
{
  char *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  char *v11; // rax

  v5 = a1;
  if ( !a2 )
    goto LABEL_13;
  v6 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  if ( &a1[2 * *((_QWORD *)v5 + 2)] > a2 )
  {
    if ( *((_QWORD *)v5 + 3) < 8uLL )
      v7 = v5;
    else
      v7 = *(char **)v5;
    return (char *)std::wstring::append(v5, v5, (a2 - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( ~*((_QWORD *)v5 + 2) <= a3 )
      std::wstring::_Xlen();
    if ( a3 )
    {
      v9 = *((_QWORD *)v5 + 2) + a3;
      if ( std::wstring::_Grow((__int64)v5, v9, 0) )
      {
        if ( *((_QWORD *)v5 + 3) < 8uLL )
          v10 = v5;
        else
          v10 = *(_QWORD **)v5;
        memcpy_0((char *)v10 + 2 * *((_QWORD *)v5 + 2), a2, 2 * a3);
        if ( *((_QWORD *)v5 + 3) < 8uLL )
          v11 = v5;
        else
          v11 = *(char **)v5;
        *((_QWORD *)v5 + 2) = v9;
        *(_WORD *)&v11[2 * v9] = 0;
      }
    }
    return v5;
  }
}
