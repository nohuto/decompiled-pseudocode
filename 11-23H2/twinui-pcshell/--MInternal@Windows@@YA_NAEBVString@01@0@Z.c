/*
 * XREFs of ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC
 * Callers:
 *     ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x1803D325C (--$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAPEAVString@Inte.c)
 *     ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1803D3344 (--$_Med3_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3470 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803D36FC (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 *     ??$binary_search@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@VString@Internal@Windows@@U?$less@X@2@@std@@YA_NV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@0AEBVString@Internal@Windows@@U?$less@X@0@@Z @ 0x1803D3E34 (--$binary_search@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@VString@Internal@Wind.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::operator<(HSTRING *a1, HSTRING *a2)
{
  HSTRING v2; // rdx
  HSTRING v3; // rcx
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *a1;
  result = 0;
  WindowsCompareStringOrdinal(v3, v2, &result);
  return result == -1;
}
