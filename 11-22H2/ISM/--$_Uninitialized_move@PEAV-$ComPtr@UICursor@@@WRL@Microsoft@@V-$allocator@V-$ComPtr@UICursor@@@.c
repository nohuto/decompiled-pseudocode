/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1801C5274
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801C4DF4 (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x18010C644 (--$_Destroy_range@V-$allocator@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@U.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
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
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(a3, a3);
  return a3;
}
