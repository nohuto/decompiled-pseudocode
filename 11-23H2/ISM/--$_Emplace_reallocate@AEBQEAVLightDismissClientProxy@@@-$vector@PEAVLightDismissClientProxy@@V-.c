/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801722D8
 * Callers:
 *     ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x180171F60 (-OnConnected@LightDismissClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003E448 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Change_array@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAXQEAPEAVLightDismissClientProxy@@_K1@Z @ 0x18017271C (-_Change_array@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@.c)
 */

char *__fastcall std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rsi
  const void *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v5 = (a2 - (_BYTE *)LightDismissProcessor::s_clients) >> 3;
  v6 = (qword_180268DE0 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (qword_180268DE8 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = &v12[8 * v5];
    *(_QWORD *)v14 = *a3;
    v15 = LightDismissProcessor::s_clients;
    v16 = v12;
    if ( a2 == (_BYTE *)qword_180268DE0 )
    {
      v17 = qword_180268DE0 - (_QWORD)LightDismissProcessor::s_clients;
    }
    else
    {
      memmove_0(v12, LightDismissProcessor::s_clients, a2 - (_BYTE *)LightDismissProcessor::s_clients);
      v16 = v14 + 8;
      v17 = qword_180268DE0 - (_QWORD)a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<LightDismissClientProxy *>::_Change_array(v18, v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, 8 * v7);
    throw;
  }
  return result;
}
