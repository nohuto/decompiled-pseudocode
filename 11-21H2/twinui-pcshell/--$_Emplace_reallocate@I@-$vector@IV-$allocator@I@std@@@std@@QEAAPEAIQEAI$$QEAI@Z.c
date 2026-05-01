/*
 * XREFs of ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x1801D7134
 * Callers:
 *     ?push_back@?$vector@IV?$allocator@I@std@@@std@@QEAAX$$QEAI@Z @ 0x1801E808C (-push_back@-$vector@IV-$allocator@I@std@@@std@@QEAAX$$QEAI@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801B199C (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18031AEE0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(const void **a1, _BYTE *a2, _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  __int64 v20; // rcx
  char *result; // rax
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v22 = v13;
  try
  {
    v15 = &v13[4 * v6];
    *(_DWORD *)v15 = *a3;
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
      v18 = v15 + 4;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<unsigned int>::_Change_array((__int64)a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::allocator<unsigned int>::deallocate(v20, v22, v8);
    throw;
  }
  return result;
}
