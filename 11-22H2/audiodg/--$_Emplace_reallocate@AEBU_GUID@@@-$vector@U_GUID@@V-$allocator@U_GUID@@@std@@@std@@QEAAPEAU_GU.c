/*
 * XREFs of ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1400643AC
 * Callers:
 *     ?GetClsidsFromVar@@YAXAEBUtagPROPVARIANT@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAG@Z @ 0x140065038 (-GetClsidsFromVar@@YAXAEBUtagPROPVARIANT@@AEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x14002F1D4 (memmove_0.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1400644E8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXQEAU_GUID@@_K1@Z @ 0x140065F00 (-_Change_array@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXQEAU_GUID@@_K1@Z.c)
 */

char *__fastcall std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(const void **a1, _BYTE *a2, _OWORD *a3)
{
  signed __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_OWORD *)v15 = *a3;
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
      v18 = v15 + 16;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<_GUID>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 16 * v8);
    throw;
  }
  return result;
}
