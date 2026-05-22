/*
 * XREFs of std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFD30
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFD30 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800F06CC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EEFCC (std--_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF0D8 (std--_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF4A4 (std--_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e71.c)
 *     std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFAE4 (std--_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFD30 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

__int64 __fastcall std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned int *a1,
        unsigned int *a2,
        __int64 a3,
        char a4)
{
  unsigned int *v6; // rdi
  unsigned int *v7; // rsi
  __int64 v8; // r9
  __int64 result; // rax
  unsigned int *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int *v11; // [rsp+28h] [rbp-10h]

  v6 = a2;
  v7 = a1;
  if ( (char *)a2 - (char *)a1 < 2376 )
    return std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
             (__int64)v7,
             (__int64)v6);
  while ( a3 > 0 )
  {
    std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      &v10,
      v7,
      (unsigned __int64)v6);
    LOBYTE(v8) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(0x8E38E38E38E38E39uLL * (((char *)v10 - (char *)v7) >> 3)) >= (__int64)(0x8E38E38E38E38E39uLL
                                                                                         * (((char *)v6 - (char *)v11) >> 3)) )
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v11, v6, a3, v8);
      v6 = v10;
    }
    else
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v7, v10, a3, v8);
      v7 = v11;
    }
    if ( (char *)v6 - (char *)v7 < 2376 )
      return std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
               (__int64)v7,
               (__int64)v6);
  }
  std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
    (__int64)v7,
    (__int64)v6,
    a4);
  while ( 1 )
  {
    result = (char *)v6 - (char *)v7;
    if ( (char *)v6 - (char *)v7 < 144 )
      break;
    std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___((__int64)v7, (__int64)v6);
    v6 -= 18;
  }
  return result;
}
