/*
 * XREFs of _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801F1000
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801F064C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x1801F06FC (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shar_ea_1801F06FC.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801F1110 (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801F31E0 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

char __fastcall lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int128 v7; // xmm0
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  char v14; // al
  std::_Ref_count_base *v15; // rcx
  char v16; // bl
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = a2;
  if ( (*(_WORD *)(*a2 + 24LL) & 0x200) == 0 )
  {
    v11 = a1[2];
    goto LABEL_13;
  }
  v5 = **a1;
  if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)v2 && *(_DWORD *)(v5 + 32) == *(_DWORD *)(v2 + 8) )
  {
    v6 = a1[1];
    *(_QWORD *)&v17 = 0LL;
    DWORD2(v17) = 0;
    v7 = v17;
    ++*(_DWORD *)v6;
    *(_OWORD *)*a2 = v7;
    *(_DWORD *)(*a2 + 16LL) = 0;
    *(_WORD *)(*a2 + 24LL) |= 0x100u;
  }
  else
  {
    v8 = *(_QWORD **)(v2 + 40);
    v9 = (_QWORD *)*v8;
    v17 = *(_OWORD *)a1[2];
    v10 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___(
            &v18,
            v9,
            v8,
            (__int64)&v17);
    std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(v2 + 40, *v10, v8);
  }
  if ( (*(_WORD *)(*v3 + 24LL) & 0x100) != 0 && !*(_QWORD *)(*v3 + 48LL) )
  {
    v11 = a1[2];
    a2 = v3;
LABEL_13:
    v14 = lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v11, a2);
    v15 = (std::_Ref_count_base *)v3[1];
    v16 = v14;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return v16;
  }
  v12 = (std::_Ref_count_base *)v3[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return 0;
}
