/*
 * XREFs of ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x180157430
 * Callers:
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003083C (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x1800040D4 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x180067992 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r9
  size_t v8; // r8

  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  v4 = 16LL * a2;
  std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v4 + *(_QWORD *)a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( a2 != v5 - 1 )
  {
    v6 = (unsigned int)(v5 - a2);
    v7 = v4 + *(_QWORD *)a1;
    v8 = 16LL * ((int)v6 - 1);
    if ( v8 )
    {
      if ( !v7 || v7 == -16 )
      {
        *(_DWORD *)_o__errno(v6) = 22;
        goto LABEL_10;
      }
      if ( 16LL * (int)v6 < v8 )
      {
        *(_DWORD *)_o__errno(v6) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0((void *)(v4 + *(_QWORD *)a1), (const void *)(v7 + 16), v8);
    }
  }
  --*(_DWORD *)(a1 + 8);
  return 1LL;
}
