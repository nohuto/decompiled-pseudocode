/*
 * XREFs of ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@QEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x180171A60
 * Callers:
 *     ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x1801718A8 (-SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18001AB84 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Change_array@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAXQEAUSystemButtonEventInfo@@_K1@Z @ 0x180171BF8 (-_Change_array@-$vector@USystemButtonEventInfo@@V-$allocator@USystemButtonEventInfo@@@std@@@std@.c)
 */

char *__fastcall std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  signed __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
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
    std::vector<SystemButtonEventInfo>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 16 * v8);
    throw;
  }
  return result;
}
