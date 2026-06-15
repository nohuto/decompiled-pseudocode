/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180047698
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180047568 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x180162890 (--$_Uninitialized_move@PEAV-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCCo.c)
 */

void ***__fastcall std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorFormatCharacteristics>>(
        void ****a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  void ***v13; // rax
  unsigned __int64 v14; // rsi
  void ***v15; // r12
  void **v16; // rcx
  void ***v17; // r8
  void ***v18; // rcx
  void ***v19; // rdx
  void **v20; // rax
  void ***v21; // rbx
  void ***v22; // r15
  void **v23; // r14
  unsigned __int64 v24; // rdx
  void *v26; // rcx
  unsigned __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  void *v28; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h]

  v6 = (void ***)a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v29 = v7 + 1;
  v9 = a1[2] - *a1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = 0x1FFFFFFFFFFFFFFFLL;
    v28 = (void *)0x1FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v10 = (v9 >> 1) + v9;
    v11 = v8;
    if ( v10 >= v8 )
      v11 = v10;
    v28 = (void *)v11;
    if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  v12 = 8 * v11;
  v13 = (void ***)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v11);
  v14 = (unsigned __int64)v13;
  v15 = &v13[v6];
  v16 = (void **)*a3;
  *a3 = 0LL;
  *v15 = v16;
  v27 = (unsigned __int64)v15;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v13;
    while ( v18 != v17 )
    {
      v20 = *v18;
      *v18 = 0LL;
      *v19++ = v20;
      ++v18;
    }
  }
  else
  {
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      v18,
      a2,
      v13);
    v27 = v14;
    std::_Uninitialized_move<std::unique_ptr<CConnectorFormatCharacteristics> *,std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
      a2,
      a1[1],
      v15 + 1);
  }
  v21 = *a1;
  if ( *a1 )
  {
    v22 = a1[1];
    if ( v21 != v22 )
    {
      do
      {
        v23 = *v21;
        if ( *v21 )
        {
          v26 = *v23;
          *v23 = 0LL;
          if ( v26 )
            CoTaskMemFree(v26);
          operator delete(v23, 0x20uLL);
        }
        ++v21;
      }
      while ( v21 != v22 );
      v21 = *a1;
    }
    v24 = ((char *)a1[2] - (char *)v21) & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = v24;
    v28 = v21;
    if ( v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v28, &v27);
      v24 = v27;
      v21 = (void ***)v28;
    }
    operator delete(v21, v24);
  }
  *a1 = (void ***)v14;
  a1[1] = (void ***)(v14 + 8 * v29);
  a1[2] = (void ***)(v14 + v12);
  return v15;
}
