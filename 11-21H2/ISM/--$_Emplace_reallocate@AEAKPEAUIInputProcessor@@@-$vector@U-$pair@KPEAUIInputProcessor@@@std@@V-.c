/*
 * XREFs of ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x18003CC7C
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003C8C0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
        char **a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v5; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  size_t v14; // rsi
  char *v15; // r14
  char *v16; // r12
  char *v17; // rcx
  char *v18; // rax
  _OWORD *v19; // rdx
  char *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  void *v25; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp+18h]

  v26 = a3;
  v5 = a2;
  v7 = a2 - *a1;
  v8 = (a1[1] - *a1) >> 4;
  v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = (a1[2] - *a1) >> 4;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v12 = (v11 >> 1) + v11;
    v13 = v10;
    if ( v12 >= v10 )
      v13 = v12;
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v9 = v13;
  }
  v24 = v9;
  v14 = 16 * v9;
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v25 = v15;
  v16 = &v15[v7 & 0xFFFFFFFFFFFFFFF0uLL];
  *(_DWORD *)v16 = *v26;
  *((_QWORD *)v16 + 1) = *a4;
  v17 = a1[1];
  v18 = *a1;
  v19 = v15;
  if ( v5 == v17 )
  {
    while ( v18 != v17 )
    {
      *v19++ = *(_OWORD *)v18;
      v18 += 16;
    }
  }
  else
  {
    if ( v18 != v5 )
    {
      do
      {
        *v19++ = *(_OWORD *)v18;
        v18 += 16;
      }
      while ( v18 != v5 );
      v17 = a1[1];
    }
    if ( v5 != v17 )
    {
      v23 = v16 + 16 - v5;
      do
      {
        *(_OWORD *)&v5[v23] = *(_OWORD *)v5;
        v5 += 16;
      }
      while ( v5 != v17 );
    }
  }
  v20 = *a1;
  if ( *a1 )
  {
    v21 = (a1[2] - v20) & 0xFFFFFFFFFFFFFFF0uLL;
    v24 = v21;
    v25 = v20;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, &v24);
      v21 = v24;
      v20 = (char *)v25;
    }
    operator delete(v20, v21);
  }
  *a1 = v15;
  a1[1] = &v15[16 * v10];
  a1[2] = &v15[v14];
  return v16;
}
