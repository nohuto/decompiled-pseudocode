/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800466A0
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003C8C0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180011EC4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800467B4 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        char **a1,
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
  char *v12; // rsi
  char *v13; // r12
  char *v14; // rcx
  char *v15; // rax
  _OWORD *v16; // rdx
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v5 = a2;
  v7 = a2 - *a1;
  v8 = (a1[1] - *a1) >> 4;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v9);
  v21 = v10;
  size_of = std::_Get_size_of_n<16>(v10);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v22 = v12;
  v13 = &v12[v7 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_DWORD *)v13 = *v23;
  *((_QWORD *)v13 + 1) = *a4;
  v14 = a1[1];
  v15 = *a1;
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
    if ( v15 != v5 )
    {
      do
      {
        *v16++ = *(_OWORD *)v15;
        v15 += 16;
      }
      while ( v15 != v5 );
      v14 = a1[1];
    }
    if ( v5 != v14 )
    {
      v20 = v13 + 16 - v5;
      do
      {
        *(_OWORD *)&v5[v20] = *(_OWORD *)v5;
        v5 += 16;
      }
      while ( v5 != v14 );
    }
  }
  v17 = *a1;
  if ( *a1 )
  {
    v18 = (a1[2] - v17) & 0xFFFFFFFFFFFFFFF0uLL;
    v21 = v18;
    v22 = v17;
    if ( v18 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v22, &v21);
      v18 = v21;
      v17 = (char *)v22;
    }
    operator delete(v17, v18);
  }
  *a1 = v12;
  a1[1] = &v12[16 * v9];
  a1[2] = &v12[16 * v10];
  return v13;
}
