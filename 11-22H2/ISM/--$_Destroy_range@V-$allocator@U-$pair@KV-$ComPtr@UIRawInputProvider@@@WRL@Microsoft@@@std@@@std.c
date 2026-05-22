/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x180060320
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Emplace_reallocate_unsigned_long_const_&_IRawInputProvider___&__::_1_::catch$0 @ 0x18006046B (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IRawInputProvider____std--allocator_.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800604A4 (--$_Uninitialized_move@PEAU-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$alloca.c)
 *     ??1?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18006058C (--1-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@KV.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K1@Z @ 0x1800605D4 (-_Change_array@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$allocato.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
