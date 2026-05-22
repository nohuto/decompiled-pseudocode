/*
 * XREFs of ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?A_TAEBKAEAPEAUIRawInputProvider@@@Z @ 0x180060548
 * Callers:
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x1800DB6A0 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ??$construct@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@AEBKAEAPEAUIRawInputProvider@@@?$_Default_allocator_traits@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@1@QEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18006050C (--$construct@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@AEBKAEAPEAUIRawInputPr.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        __int64 *a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 v4; // rdx
  char *result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Emplace_reallocate<unsigned long const &,IRawInputProvider * &>(
             a1,
             v4,
             (__int64)a2,
             (__int64)a3);
  std::_Default_allocator_traits<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>::construct<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>,unsigned long const &,IRawInputProvider * &>(
    (__int64)a1,
    v4,
    a2,
    a3);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 16);
  return result;
}
