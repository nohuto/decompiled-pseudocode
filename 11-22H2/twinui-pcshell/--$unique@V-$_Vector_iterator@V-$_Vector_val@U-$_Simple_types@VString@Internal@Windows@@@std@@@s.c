/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1803D4130
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18009F070 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 */

HSTRING **__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,std::equal_to<void>>(
        HSTRING **a1,
        HSTRING *a2,
        HSTRING *a3,
        char a4)
{
  HSTRING *v5; // rdi
  HSTRING *v7; // r14
  HSTRING v8; // rdx
  HSTRING v9; // rcx
  HSTRING *v10; // rsi
  HSTRING v12; // rdx
  HSTRING v13; // rcx
  INT32 result; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(result) = a4;
  v5 = a2;
  if ( a2 == a3 || (v7 = a2 + 1, a2 + 1 == a3) )
  {
LABEL_5:
    *a1 = a3;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v7;
      v9 = *v5;
      result = 0;
      WindowsCompareStringOrdinal(v9, v8, &result);
      v10 = v7 + 1;
      if ( !result )
        break;
      v5 = v7++;
      if ( v10 == a3 )
        goto LABEL_5;
    }
    while ( v10 != a3 )
    {
      v12 = *v10;
      v13 = *v5;
      result = 0;
      WindowsCompareStringOrdinal(v13, v12, &result);
      if ( result )
      {
        Windows::Internal::String::Release(++v5);
        *v5 = *v10;
        *v10 = 0LL;
      }
      ++v10;
    }
    *a1 = v5 + 1;
  }
  return a1;
}
