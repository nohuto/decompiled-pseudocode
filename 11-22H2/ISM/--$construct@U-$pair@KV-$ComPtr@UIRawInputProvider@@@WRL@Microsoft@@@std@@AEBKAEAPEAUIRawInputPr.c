/*
 * XREFs of ??$construct@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@AEBKAEAPEAUIRawInputProvider@@@?$_Default_allocator_traits@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@1@QEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18006050C
 * Callers:
 *     ??$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@QEAU21@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18006035C (--$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProv.c)
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?A_TAEBKAEAPEAUIRawInputProvider@@@Z @ 0x180060548 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>::construct<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>,unsigned long const &,IRawInputProvider * &>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *a3;
  *(_DWORD *)a2 = result;
  v5 = *a4;
  *(_QWORD *)(a2 + 8) = *a4;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return result;
}
