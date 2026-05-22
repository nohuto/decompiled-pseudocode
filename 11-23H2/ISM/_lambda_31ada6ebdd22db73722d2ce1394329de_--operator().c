/*
 * XREFs of _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801F1110
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x1801F06FC (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shar_ea_1801F06FC.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801F1000 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 * Callees:
 *     ?reset@?$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ @ 0x1801F32C8 (-reset@-$shared_ptr@UHotKeyInfo@@@std@@QEAAXXZ.c)
 */

char __fastcall lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(__int64 **a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a2;
  if ( (*(_WORD *)(*a2 + 24) & 0x100) == 0 )
  {
    v3 = **a1;
    if ( *(_QWORD *)(v3 + 24) != *(_QWORD *)v2 || *(_DWORD *)(v3 + 32) != *(_DWORD *)(v2 + 8) )
      return 0;
  }
  ++*(_DWORD *)a1[1];
  std::shared_ptr<HotKeyInfo>::reset(a2);
  return 1;
}
