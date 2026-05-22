/*
 * XREFs of ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x18003F440
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003EF30 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18001AB84 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x18003F53C (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v5; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  size_t size_of; // rax
  _OWORD *v12; // rsi
  char *v13; // r12
  char *v14; // rdx
  char *v15; // rax
  _OWORD *v16; // rcx
  char *v18; // rcx
  __int64 v19; // rax

  v5 = a2;
  v7 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v9);
  size_of = std::_Get_size_of_n<16>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (char *)v12 + (v7 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_DWORD *)v13 = *a3;
  *((_QWORD *)v13 + 1) = *a4;
  v14 = *(char **)(a1 + 8);
  v15 = *(char **)a1;
  v16 = v12;
  if ( v5 == v14 )
  {
    while ( v15 != v14 )
    {
      *v16++ = *(_OWORD *)v15;
      v15 += 16;
    }
  }
  else
  {
    while ( v15 != v5 )
    {
      *v16++ = *(_OWORD *)v15;
      v15 += 16;
    }
    v18 = *(char **)(a1 + 8);
    if ( v5 != v18 )
    {
      v19 = v13 + 16 - v5;
      do
      {
        *(_OWORD *)&v5[v19] = *(_OWORD *)v5;
        v5 += 16;
      }
      while ( v5 != v18 );
    }
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = &v12[v9];
  *(_QWORD *)(a1 + 16) = &v12[v10];
  return v13;
}
