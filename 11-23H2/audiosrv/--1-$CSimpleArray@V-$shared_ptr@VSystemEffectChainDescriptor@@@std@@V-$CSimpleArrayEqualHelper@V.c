/*
 * XREFs of ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801544F4
 * Callers:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x18007AFD0 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$1.c)
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x1800040D4 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(
        __int64 a1)
{
  _DWORD *v1; // rdi
  int i; // esi

  v1 = (_DWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *v1; ++i )
      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(*(_QWORD *)a1 + 16LL * i);
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
