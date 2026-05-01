/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800C2B98
 * Callers:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1800C4254 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1803920F4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

char *__fastcall std::wstring::insert(char *Src, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 v9; // r14
  __int64 v10; // r13
  char *v11; // rax
  size_t v12; // r8
  char *v13; // rsi
  size_t v14; // r14
  char *v15; // r15
  void *v16; // rbx
  unsigned __int64 v17; // rdx
  char *v19; // r14
  __int64 v20; // rsi
  void *v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v4 = *((_QWORD *)Src + 3);
  v6 = *((_QWORD *)Src + 2);
  if ( a4 <= v4 - v6 )
  {
    v19 = Src;
    *((_QWORD *)Src + 2) = v6 + a4;
    if ( v4 >= 8 )
      v19 = *(char **)Src;
    if ( &a3[2 * a4] <= v19 || a3 > &v19[2 * v6] )
    {
      v20 = a4;
    }
    else if ( v19 > a3 )
    {
      v20 = (v19 - a3) >> 1;
    }
    else
    {
      v20 = 0LL;
    }
    memmove_0(&v19[2 * a4], v19, 2 * v6 + 2);
    memcpy_0(v19, a3, 2 * v20);
    memcpy_0(&v19[2 * v20], &a3[2 * v20 + 2 * a4], 2 * (a4 - v20));
  }
  else
  {
    if ( 0x7FFFFFFFFFFFFFFELL - v6 < a4 )
      std::_Xlen_string();
    v9 = v6 + a4;
    v10 = std::wstring::_Calculate_growth(v6 + a4, *((_QWORD *)Src + 3));
    if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v10 + 1));
    *((_QWORD *)Src + 2) = v9;
    v12 = 2 * a4;
    *((_QWORD *)Src + 3) = v10;
    v13 = v11;
    v14 = 2 * v6 + 2;
    v15 = &v11[2 * a4];
    if ( v4 < 8 )
    {
      memcpy_0(v11, a3, v12);
      memcpy_0(v15, Src, 2 * v6 + 2);
    }
    else
    {
      v16 = *(void **)Src;
      memcpy_0(v11, a3, v12);
      memcpy_0(v15, v16, v14);
      v17 = 2 * v4 + 2;
      v21 = v16;
      v22 = v17;
      if ( v17 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v21, &v22);
        v17 = v22;
        v16 = v21;
      }
      operator delete(v16, v17);
    }
    *(_QWORD *)Src = v13;
  }
  return Src;
}
