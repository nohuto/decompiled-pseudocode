/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x18007CB54
 * Callers:
 *     ??$?0PEAUVector4@Math@Utils@Spectre@@$0A@@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUVector4@Math@Utils@Spectre@@0AEBV?$allocator@UVector4@Math@Utils@Spectre@@@1@@Z @ 0x18007C6BC (--$-0PEAUVector4@Math@Utils@Spectre@@$0A@@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVe.c)
 *     ??$_Construct_n@$$V@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008EFD8 (--$_Construct_n@$$V@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@Utils@Spectre@@.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>::~_Tidy_guard<std::vector<Spectre::Utils::Math::Color>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy(v1);
}
