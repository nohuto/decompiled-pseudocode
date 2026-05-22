/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@?$vector@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@V?$allocator@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@QEAPEAV23456@AEBQEAV23456@@Z @ 0x180085EDC
 * Callers:
 *     ?RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@345@@Z @ 0x1800854B4 (-RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@V?$allocator@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@@std@@@std@@AEAAXQEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@_K1@Z @ 0x180085FD0 (-_Change_array@-$vector@PEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@V-$allocator@PEA.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<Windows::UI::Composition::Desktop::DesktopWindowTarget *>::_Emplace_reallocate<Windows::UI::Composition::Desktop::DesktopWindowTarget * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[8 * v5];
  *(_QWORD *)v14 = *a3;
  v15 = v13;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v14 + 8;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<Windows::UI::Composition::Desktop::DesktopWindowTarget *>::_Change_array(a1, v13, v9, v3);
  return v14;
}
