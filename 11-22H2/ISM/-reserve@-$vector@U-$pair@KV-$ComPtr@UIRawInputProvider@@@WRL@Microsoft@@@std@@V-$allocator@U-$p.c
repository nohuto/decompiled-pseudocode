/*
 * XREFs of ?reserve@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAX_K@Z @ 0x18006071C
 * Callers:
 *     ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x1800DB6A0 (-SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAX_K@Z @ 0x180060650 (-_Reallocate_exactly@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$al.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate_exactly(
      (char **)a1,
      a2);
  }
}
