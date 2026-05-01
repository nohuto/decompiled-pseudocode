/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008AC74
 * Callers:
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18008A918 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800E6510 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

char **__fastcall std::wstring::insert(char **Src, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13
  char *v6; // rbp
  __int64 v9; // rbx
  char *v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  size_t v13; // rcx
  char *v14; // rdi
  char *v15; // rax
  size_t v16; // r8
  size_t v17; // rbp
  char *v18; // rbx
  unsigned __int64 v19; // rdx
  char *v21; // r14
  __int64 v22; // rdi
  void *v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v24 = a2;
  v4 = (unsigned __int64)Src[3];
  v6 = Src[2];
  if ( a4 > v4 - (unsigned __int64)v6 )
  {
    v9 = 0x7FFFFFFFFFFFFFFELL;
    if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a4 )
      std::_Xlen_string();
    v10 = &v6[a4];
    v11 = (unsigned __int64)&v6[a4] | 7;
    if ( v11 > 0x7FFFFFFFFFFFFFFELL || (v12 = v4 >> 1, v4 > 0x7FFFFFFFFFFFFFFELL - (v4 >> 1)) )
    {
      v13 = -2LL;
    }
    else
    {
      v9 = v12 + v4;
      if ( v11 >= v12 + v4 )
        v9 = (unsigned __int64)&v6[a4] | 7;
      if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v13 = 2 * (v9 + 1);
      if ( v13 < 0x1000 )
      {
        v14 = 0LL;
        if ( !v13 )
        {
LABEL_12:
          Src[2] = v10;
          v16 = 2 * a4;
          Src[3] = (char *)v9;
          v17 = 2LL * (_QWORD)v6 + 2;
          if ( v4 < 8 )
          {
            memcpy_0(v14, a3, v16);
            memcpy_0(&v14[2 * a4], Src, v17);
          }
          else
          {
            v18 = *Src;
            memcpy_0(v14, a3, v16);
            memcpy_0(&v14[2 * a4], v18, v17);
            v19 = 2 * v4 + 2;
            v23 = v18;
            v24 = v19;
            if ( v19 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v23, &v24);
              v19 = v24;
              v18 = (char *)v23;
            }
            operator delete(v18, v19);
          }
          *Src = v14;
          return Src;
        }
        v15 = (char *)operator new(v13);
LABEL_11:
        v14 = v15;
        goto LABEL_12;
      }
    }
    v15 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v13);
    goto LABEL_11;
  }
  v21 = (char *)Src;
  Src[2] = &v6[a4];
  if ( v4 >= 8 )
    v21 = *Src;
  if ( &a3[2 * a4] <= v21 || a3 > &v21[2 * (_QWORD)v6] )
  {
    v22 = a4;
  }
  else if ( v21 > a3 )
  {
    v22 = (v21 - a3) >> 1;
  }
  else
  {
    v22 = 0LL;
  }
  memmove_0(&v21[2 * a4], v21, 2LL * (_QWORD)v6 + 2);
  memcpy_0(v21, a3, 2 * v22);
  memcpy_0(&v21[2 * v22], &a3[2 * v22 + 2 * a4], 2 * (a4 - v22));
  return Src;
}
