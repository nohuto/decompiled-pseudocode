/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x1800D4CC8
 * Callers:
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800D672C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180004324 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800C2128 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800D4BE4 (--$_Buynode@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_List_buy@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r10
  _WORD *v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD **v14; // rax
  _QWORD **v15; // r13
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  _WORD *v20; // r9
  int v21; // eax
  _QWORD *v22; // rax
  _WORD *v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rdx
  __int64 result; // rax
  __int64 v27; // rbx
  void **v28; // rdx
  __int64 v29; // rax
  _QWORD ***v30; // rcx
  _QWORD **v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD **v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *iter; // rax
  __int64 v43[7]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v45; // [rsp+70h] [rbp+18h] BYREF

  v5 = (unsigned __int64)a3[2];
  v6 = 2 * v5;
  if ( (unsigned __int64)a3[3] < 8 )
    v7 = a3;
  else
    v7 = *a3;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v6; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ v8);
  v10 = (HIDWORD(v8) ^ v8) & a1[5];
  v11 = -1LL;
  if ( a1[6] <= v10 )
    v10 += -1LL - (a1[5] >> 1);
  v12 = 2 * v10;
  v13 = a1[2];
  v14 = (_QWORD **)*a1;
  v45 = v14;
  v15 = *(_QWORD ***)(v13 + 8 * v12);
  if ( v15 == v14 )
    v16 = v14;
  else
    v16 = **(_QWORD ***)(v13 + 8 * v12 + 8);
  while ( v16 != v15 )
  {
    v16 = (_QWORD *)v16[1];
    v17 = v16 + 2;
    v18 = v16[4];
    if ( v16[5] >= 8uLL )
      v17 = (_QWORD *)*v17;
    v19 = v16[4];
    if ( v5 < v18 )
      v19 = v5;
    if ( (unsigned __int64)a3[3] < 8 )
      v20 = a3;
    else
      v20 = *a3;
    if ( v19 )
    {
      while ( *v20 == *(_WORD *)v17 )
      {
        ++v20;
        v17 = (_QWORD *)((char *)v17 + 2);
        if ( !--v19 )
          goto LABEL_22;
      }
      v21 = *v20 < *(_WORD *)v17 ? -1 : 1;
    }
    else
    {
LABEL_22:
      if ( v5 >= v18 )
        v21 = v5 != v18;
      else
        v21 = -1;
    }
    if ( !v21 )
    {
      v22 = v16 + 2;
      if ( (unsigned __int64)a3[3] < 8 )
        v23 = a3;
      else
        v23 = *a3;
      v24 = v16[4];
      v25 = v5;
      if ( v24 < v5 )
        v25 = v16[4];
      if ( v16[5] >= 8uLL )
        v22 = (_QWORD *)*v22;
      if ( v25 )
      {
        while ( *(_WORD *)v22 == *v23 )
        {
          v22 = (_QWORD *)((char *)v22 + 2);
          ++v23;
          if ( !--v25 )
            goto LABEL_37;
        }
        v11 = *(_WORD *)v22 < *v23 ? -1 : 1;
      }
      else
      {
LABEL_37:
        if ( v24 >= v5 )
          v11 = v24 != v5;
      }
      if ( !(_DWORD)v11 )
      {
        *(_QWORD *)a2 = v16;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      v16 = (_QWORD *)*v16;
      break;
    }
  }
  v27 = (__int64)*v45;
  v28 = std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(v11, *v45, (_QWORD *)(*v45)[1], a3);
  v29 = a1[1];
  if ( v29 == 0x555555555555554LL )
    std::_Xlength_error("list<T> too long");
  a1[1] = v29 + 1;
  *(_QWORD *)(v27 + 8) = v28;
  *(_QWORD *)v28[1] = v28;
  v30 = (_QWORD ***)*a1;
  v31 = *(_QWORD ***)*a1;
  v45 = v31;
  v32 = *v31;
  if ( v16 != *v31 )
  {
    *v31[1] = v32;
    *(_QWORD *)v32[1] = v16;
    *(_QWORD *)v16[1] = v31;
    v33 = (_QWORD *)v16[1];
    v16[1] = v32[1];
    v32[1] = v31[1];
    v31[1] = v33;
    v30 = (_QWORD ***)*a1;
  }
  v34 = a1[2];
  if ( *(_QWORD ****)(v34 + 8 * v12) == v30 )
  {
    *(_QWORD *)(v34 + 8 * v12) = v31;
    v35 = a1[2];
    *(_QWORD *)(v35 + 8 * v12 + 8) = v31;
  }
  else if ( *(_QWORD **)(v34 + 8 * v12) == v16 )
  {
    *(_QWORD *)(v34 + 8 * v12) = v31;
  }
  else
  {
    v36 = *(_QWORD **)(v34 + 8 * v12 + 8);
    v37 = (_QWORD **)*v36;
    *(_QWORD *)(v34 + 8 * v12 + 8) = *v36;
    if ( v37 != v31 )
    {
      v38 = a1[2];
      v39 = *(_QWORD *)(v38 + 8 * v12 + 8);
      v40 = *(_QWORD *)(v39 + 8);
      *(_QWORD *)(v38 + 8 * v12 + 8) = v40;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size((__int64)a1);
    *(_QWORD *)a2 = v31;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Make_iter(
             v41,
             &v45,
             (__int64)v45);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      a1,
      v43,
      (_QWORD *)*iter);
    throw;
  }
  return result;
}
