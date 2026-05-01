/*
 * XREFs of ??$_Emplace_reallocate@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x1805B68F0
 * Callers:
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805B6A34 (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Change_array@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1805B6ED0 (-_Change_array@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rdi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5;
  v8 = 0x7FFFFFFFFFFFFFFLL;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
    *(_OWORD *)v15 = *a3;
    *((_OWORD *)v15 + 1) = a3[1];
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = v15 + 32;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 32 * v8);
    throw;
  }
  return result;
}
