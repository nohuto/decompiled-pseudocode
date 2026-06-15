/*
 * XREFs of ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x180155598
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180155C18 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800D32C8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Change_array@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_tagpropertykey@@_K1@Z @ 0x180155DF8 (-_Change_array@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@AEAAXQEAU_t.c)
 */

char *__fastcall std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  char *result; // rax
  __int64 v20; // [rsp+50h] [rbp+8h]
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    v20 = v11;
    if ( v11 > 0xCCCCCCCCCCCCCCCLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0xCCCCCCCCCCCCCCCLL;
    v20 = 0xCCCCCCCCCCCCCCCLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(20 * v11);
  v13 = v12;
  v21 = v12;
  try
  {
    v14 = &v12[20 * v6];
    *(_OWORD *)v14 = *(_OWORD *)a3;
    *((_DWORD *)v14 + 4) = *(_DWORD *)(a3 + 16);
    v15 = a1[1];
    v16 = *a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, a2 - (_BYTE *)*a1);
      v17 = v14 + 20;
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<_tagpropertykey>::_Change_array(a1, v13, v8, v11);
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, 20 * v20);
    throw;
  }
  return result;
}
