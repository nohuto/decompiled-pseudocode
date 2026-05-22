/*
 * XREFs of ??$_Emplace_reallocate@PEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1800A7DF8
 * Callers:
 *     ?DriverSanitizePresentBuffers@CSynchronizationContext11Driver@@AEAAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1800A7EE8 (-DriverSanitizePresentBuffers@CSynchronizationContext11Driver@@AEAAXAEAV-$vector@PEAUIUnknown@@V.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ @ 0x18009932C (-_Xlength@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Calculate_growth@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x1800B8014 (-_Calculate_growth@-$vector@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2.c)
 *     ?_Change_array@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@AEAAXQEAPEAUIUnknown@@_K1@Z @ 0x1801AE7A0 (-_Change_array@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@AEAAXQEAPEAUIUnknow.c)
 */

char *__fastcall std::vector<IUnknown *>::_Emplace_reallocate<IUnknown *>(_QWORD *a1, _BYTE *a2, _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // r14
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<IUnknown *>::_Xlength((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[8 * ((a2 - v3) >> 3)];
  *(_QWORD *)v12 = *a3;
  v13 = v11;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)&a2[-*a1]);
    v13 = v12 + 8;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<IUnknown *>::_Change_array(a1, v11, v8, v9);
  return &v11[8 * ((a2 - v3) >> 3)];
}
