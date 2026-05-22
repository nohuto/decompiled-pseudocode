/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x18003FF40
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180040590 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18001B4B4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180040C1C (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ?_Change_array@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEAAXQEAU?$pair@KPEAUIInputProcessor@@@2@_K1@Z @ 0x180041A58 (-_Change_array@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInputProc.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        char **a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  size_t size_of; // rax
  _OWORD *v13; // r10
  char *v14; // rdi
  char *v15; // rdx
  char *v16; // rax
  _OWORD *v17; // rcx
  char *v19; // rcx
  __int64 v20; // rax

  v6 = a2;
  v8 = a2 - *a1;
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v9 + 1;
  v11 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<16>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (char *)v13 + (v8 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_DWORD *)v14 = *a3;
  *((_QWORD *)v14 + 1) = *a4;
  v15 = a1[1];
  v16 = *a1;
  v17 = v13;
  if ( v6 == v15 )
  {
    while ( v16 != v15 )
    {
      *v17++ = *(_OWORD *)v16;
      v16 += 16;
    }
  }
  else
  {
    while ( v16 != v6 )
    {
      *v17++ = *(_OWORD *)v16;
      v16 += 16;
    }
    v19 = a1[1];
    if ( v6 != v19 )
    {
      v20 = v14 + 16 - v6;
      do
      {
        *(_OWORD *)&v6[v20] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v19 );
    }
  }
  std::vector<std::pair<unsigned long,IInputProcessor *>>::_Change_array(a1, v13, v10, v11);
  return v14;
}
