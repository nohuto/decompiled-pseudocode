/*
 * XREFs of ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18019E4E4
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019EAD4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x180080E88 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x18012EDC8 (--$_Get_size_of_n@$0LA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEBA_K_K@Z @ 0x18012FF60 (-_Calculate_growth@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 *     ?_Change_array@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXQEAUDisplayOcclusionRect@@_K1@Z @ 0x18012FFA8 (-_Change_array@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@A.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  size_t size_of; // rax
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // r12
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 176;
  v7 = 0x2E8BA2E8BA2E8BA3LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4);
  if ( v7 == 0x1745D1745D1745DLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<DisplayOcclusionRect>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<176>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v19 = v11;
  try
  {
    v13 = &v11[176 * v6];
    *(_OWORD *)v13 = *a3;
    *((_OWORD *)v13 + 1) = a3[1];
    *((_OWORD *)v13 + 2) = a3[2];
    *((_OWORD *)v13 + 3) = a3[3];
    *((_OWORD *)v13 + 4) = a3[4];
    *((_OWORD *)v13 + 5) = a3[5];
    *((_OWORD *)v13 + 6) = a3[6];
    *((_OWORD *)v13 + 7) = a3[7];
    *((_OWORD *)v13 + 8) = a3[8];
    *((_OWORD *)v13 + 9) = a3[9];
    *((_OWORD *)v13 + 10) = a3[10];
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 176;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<DisplayOcclusionRect>::_Change_array((__int64)a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, 176 * v9);
    throw;
  }
  return result;
}
