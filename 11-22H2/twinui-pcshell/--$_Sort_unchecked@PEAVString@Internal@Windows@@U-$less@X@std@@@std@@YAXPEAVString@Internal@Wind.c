/*
 * XREFs of ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x1803D325C (--$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAPEAVString@Inte.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3470 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803D36FC (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 *     ??$_Sort_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803D3B70 (--$_Sort_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 */

int __fastcall std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String *a1,
        Windows::Internal::String *a2,
        __int64 a3,
        char a4)
{
  signed __int64 v5; // rax
  Windows::Internal::String *v7; // rsi
  Windows::Internal::String *i; // rdi
  Windows::Internal::String *v9; // r15
  Windows::Internal::String *v10; // r14
  __int64 v11; // r9
  __int64 v13; // rbp
  HSTRING *v14; // r15
  HSTRING v15; // rax
  Windows::Internal::String *v16; // [rsp+30h] [rbp-28h] BYREF
  Windows::Internal::String *v17; // [rsp+38h] [rbp-20h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2 - a1;
  v7 = a2;
  for ( i = a1; ; v5 = v7 - i )
  {
    if ( (__int64)(v5 & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
      return (unsigned int)std::_Insertion_sort_unchecked<Windows::Internal::String *,std::less<void>>(i, v7);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<Windows::Internal::String *,std::less<void>>(&v16, i, (HSTRING *)v7);
    v9 = v16;
    v10 = v17;
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v11) = a4;
    if ( (__int64)((v16 - i) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((v7 - v17) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(v17, v7, a3, v11);
      v7 = v9;
    }
    else
    {
      std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(i, v16, a3, v11);
      i = v10;
    }
  }
  v13 = (v7 - i) >> 4;
  if ( v13 > 0 )
  {
    v14 = (HSTRING *)((char *)i + 8 * v13 - 8);
    do
    {
      v15 = *v14;
      *v14 = 0LL;
      string = v15;
      std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
        (__int64)i,
        --v13,
        (v7 - i) >> 3,
        &string);
      if ( string )
        WindowsDeleteString(string);
      --v14;
    }
    while ( v13 > 0 );
  }
  return std::_Sort_heap_unchecked<Windows::Internal::String *,std::less<void>>((HSTRING *)i, (__int64)v7);
}
