/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1803D2E80
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Windows::Internal::String__std::allocator_std::pair_unsigned_long_Windows::Internal::String_____::_Emplace_reallocate_std::pair_unsigned_long_Windows::Internal::String____::_1_::catch$1 @ 0x1803D301F (_std--vector_std--pair_unsigned_long_Windows--Internal--String__std--allocator_std--pair_unsigne.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1803D3D78 (--$_Uninitialized_move@PEAU-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString.c)
 *     ?_Change_array@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXQEAU?$pair@KVString@Internal@Windows@@@2@_K1@Z @ 0x1803DC72C (-_Change_array@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@I.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x1803DCEB4 (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  HSTRING v4; // rcx
  HRESULT result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(HSTRING *)(v3 + 8);
      if ( v4 )
        result = WindowsDeleteString(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
