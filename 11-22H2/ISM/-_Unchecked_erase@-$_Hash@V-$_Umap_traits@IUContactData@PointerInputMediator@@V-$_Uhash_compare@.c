/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18010BF18
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18010C0CC (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18010BB58 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhas.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  unsigned __int64 appended; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // r11
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r13
  bool v17; // bl
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // r13
  bool v26; // bl
  _QWORD *v27; // rax
  _QWORD *v29; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v30; // [rsp+28h] [rbp-18h]
  __int64 v31; // [rsp+30h] [rbp-10h]
  __int64 v33; // [rsp+88h] [rbp+48h]
  _QWORD *v34; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = a1[3];
    v7 = (_QWORD *)a1[1];
    v29 = a1 + 1;
    v8 = *(_QWORD **)(a2 + 8);
    v31 = a2;
    v34 = v8;
    v30 = v8;
    appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a2 + 16), 4uLL);
    v14 = 2 * (a1[6] & appended);
    v15 = *(_QWORD *)(v6 + 16 * (a1[6] & appended) + 8);
    v16 = *(_QWORD *)(v6 + 8 * v14);
    v33 = *(_QWORD *)(v6 + 8 * v14 + 8);
    while ( 1 )
    {
      v17 = i == v15;
      std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Range_eraser::_Bump_erased(
        &v29,
        v10,
        v11,
        v12);
      if ( v17 )
        break;
      i = v31;
      v15 = v33;
      if ( v31 == a3 )
      {
        if ( v16 == a2 )
          *(_QWORD *)(v6 + 8 * v14) = v31;
        goto LABEL_15;
      }
    }
    if ( v16 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v14) = v7;
      v19 = v7;
    }
    else
    {
      v19 = v34;
    }
    *(_QWORD *)(v6 + 8 * v14 + 8) = v19;
    for ( i = v31; i != a3; *(_QWORD *)(v6 + 8 * v24 + 8) = v7 )
    {
      v20 = std::_Fnv1a_append_bytes(v18, (const unsigned __int8 *const)(i + 16), 4uLL);
      v24 = 2 * (a1[6] & v20);
      v25 = *(_QWORD *)(v6 + 16 * (a1[6] & v20) + 8);
      while ( 1 )
      {
        v26 = i == v25;
        std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Range_eraser::_Bump_erased(
          &v29,
          v21,
          v22,
          v23);
        i = v31;
        if ( v26 )
          break;
        if ( v31 == a3 )
        {
          *(_QWORD *)(v6 + 8 * v24) = v31;
          goto LABEL_15;
        }
      }
      *(_QWORD *)(v6 + 8 * v24) = v7;
    }
LABEL_15:
    v27 = v30;
    *v30 = i;
    *(_QWORD *)(i + 8) = v27;
  }
  return a3;
}
