/*
 * XREFs of _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x1801D2364
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_2e17bef57c72db371333aa9a3de53833___ @ 0x1801D1540 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801D0F28 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___ @ 0x1801D1668 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_1801D1668.c)
 *     _lambda_116eb2b29a456c26711f063c826cbee8_::operator() @ 0x1801D2198 (_lambda_116eb2b29a456c26711f063c826cbee8_--operator().c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_2e17bef57c72db371333aa9a3de53833_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // bl
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( (*(_WORD *)(*a2 + 24LL) & 0x200) == 0 )
  {
LABEL_12:
    v8 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)v8 != *(_QWORD *)*v2 || *(_DWORD *)(v8 + 8) != *(_DWORD *)(*v2 + 8LL) )
    {
      v6 = 0;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( (**(_DWORD **)a1 & 0x200) == 0 )
  {
    std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_e6b13cfb47d3ffa5cec02fcc449cf4aa___(
      &v16,
      **(_QWORD ***)(v4 + 40),
      *(_QWORD **)(v4 + 40),
      v5);
    if ( v16 == *(_QWORD *)(*v2 + 40LL) )
    {
      lambda_116eb2b29a456c26711f063c826cbee8_::operator()(*(__int64 ***)(v3 + 32));
      try
      {
        std::list<std::shared_ptr<HotKeyInfo>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
          *v2 + 40LL,
          *(_QWORD *)(*v2 + 40LL),
          *(_QWORD **)(v3 + 40));
      }
      catch ( std::bad_alloc )
      {
        v10 = *(_DWORD **)(a1 + 48);
        *v10 = -2147024882;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
          McTemplateU0sqq_EventWriteTransfer(
            (__int64)v10,
            (__int64)&v11,
            "HotKeyProcessor::RegisterHotKey::<lambda_2e17bef57c72db371333aa9a3de53833>::operator ()",
            268LL,
            14);
        v3 = a1;
        v2 = a2;
        goto LABEL_12;
      }
    }
LABEL_14:
    v6 = 1;
    goto LABEL_16;
  }
  if ( (*(_WORD *)(v4 + 24) & 0x100) != 0 )
  {
    *(_WORD *)(v4 + 24) = **(_WORD **)a1 & 0x7A00;
    *(_OWORD *)*a2 = *(_OWORD *)v5;
    *(_DWORD *)(*a2 + 16LL) = **(_DWORD **)(a1 + 16);
    v6 = 1;
    **(_BYTE **)(a1 + 24) = 1;
LABEL_16:
    v7 = (std::_Ref_count_base *)v2[1];
    goto LABEL_17;
  }
  v6 = *(_QWORD *)v5 == *(_QWORD *)v4 && *(_DWORD *)(v5 + 8) == *(_DWORD *)(v4 + 8);
  v7 = (std::_Ref_count_base *)a2[1];
LABEL_17:
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v6;
}
