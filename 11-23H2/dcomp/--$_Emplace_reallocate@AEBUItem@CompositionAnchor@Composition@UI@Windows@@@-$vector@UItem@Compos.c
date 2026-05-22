/*
 * XREFs of ??$_Emplace_reallocate@AEBUItem@CompositionAnchor@Composition@UI@Windows@@@?$vector@UItem@CompositionAnchor@Composition@UI@Windows@@V?$allocator@UItem@CompositionAnchor@Composition@UI@Windows@@@std@@@std@@QEAAPEAUItem@CompositionAnchor@Composition@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180068548
 * Callers:
 *     ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40 (-AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180068C78 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<Windows::UI::Composition::CompositionAnchor::Item>::_Emplace_reallocate<Windows::UI::Composition::CompositionAnchor::Item const &>(
        char *a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rdi
  void *v14; // rcx
  char *v15; // rbp
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  char *result; // rax

  v4 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3);
  v5 = 0x492492492492492LL;
  v8 = (__int64)&a2[-*(_QWORD *)a1] / 56;
  if ( v4 == 0x492492492492492LL )
    std::_Dwm_Xlength_error(a1);
  v9 = v4 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v5);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[56 * v8];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v15 + 6) = *(_QWORD *)(a3 + 48);
  v16 = (_BYTE *)*((_QWORD *)a1 + 1);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v14 = v15 + 56;
    v18 = *((_QWORD *)a1 + 1) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, 8 * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3));
  *(_QWORD *)a1 = v13;
  result = v15;
  *((_QWORD *)a1 + 1) = &v13[56 * v9];
  *((_QWORD *)a1 + 2) = &v13[56 * v5];
  return result;
}
