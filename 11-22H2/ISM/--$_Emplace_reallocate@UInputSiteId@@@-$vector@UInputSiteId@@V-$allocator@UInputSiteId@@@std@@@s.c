/*
 * XREFs of ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@QEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180002D40
 * Callers:
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x180070BB8 (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAXQEAUInputSiteId@@_K1@Z @ 0x180002E2C (-_Change_array@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAXQEAUInputSiteI.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18001B4B4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 */

char *__fastcall std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>(const void **a1, _BYTE *a2, _OWORD *a3)
{
  signed __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  char *v13; // r14
  char *v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8

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
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_OWORD *)v14 = *a3;
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = v14 + 16;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  std::vector<InputSiteId>::_Change_array(a1, v13, v9, v8);
  return v14;
}
