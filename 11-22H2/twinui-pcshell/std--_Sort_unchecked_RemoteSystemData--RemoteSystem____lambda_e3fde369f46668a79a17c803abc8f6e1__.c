/*
 * XREFs of std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 *     _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x18070EFFC (_lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator().c)
 * Callees:
 *     std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070A904 (std--_Insertion_sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803.c)
 *     std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AB68 (std--_Make_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AC90 (std--_Partition_by_median_guess_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f4666.c)
 *     std::_Sort_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B03C (std--_Sort_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 */

void __fastcall std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v5; // rax
  __int64 *v7; // rdi
  unsigned __int64 i; // rsi
  __int64 v9; // r9
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v5 = (unsigned __int64)a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = (unsigned __int64)v7 - i )
  {
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFE0uLL) <= 1024 )
    {
      std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(i, v7);
      return;
    }
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
      (unsigned __int64 *)&v10,
      i,
      (unsigned __int64)v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)(((unsigned __int64)v10 - i) & 0xFFFFFFFFFFFFFFE0uLL) >= (__int64)(((unsigned __int64)v7 - v11) & 0xFFFFFFFFFFFFFFE0uLL) )
    {
      std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(v11, v7, a3, v9);
      v7 = v10;
    }
    else
    {
      std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(i, v10, a3, v9);
      i = v11;
    }
  }
  std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
    i,
    (__int64)v7,
    a4);
  std::_Sort_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(i, (__int64)v7);
}
