/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x1800424A8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014AD2C (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<EffectPack>>::emplace_back<std::shared_ptr<EffectPack> &>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)(a1 + 16) )
    return std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> &>(a1, v3, a2);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v3, a2);
  result = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = result + 16;
  return result;
}
