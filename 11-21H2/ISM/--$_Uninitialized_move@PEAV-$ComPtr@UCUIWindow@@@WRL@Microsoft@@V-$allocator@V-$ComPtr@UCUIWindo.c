/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18008425C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800840B8 (--$_Emplace_reallocate@AEBV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UCUIWindow@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18008402C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<CUIWindow> *,std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(a3, a3);
  return a3;
}
