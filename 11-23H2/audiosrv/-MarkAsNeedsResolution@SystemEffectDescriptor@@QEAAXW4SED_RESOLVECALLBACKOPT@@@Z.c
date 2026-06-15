/*
 * XREFs of ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800302B0
 * Callers:
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800301F4 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180032188 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0F78 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

void __fastcall SystemEffectDescriptor::MarkAsNeedsResolution(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // edx
  int v6; // ebx
  __int64 v7; // r14

  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v6 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v7 = 0LL;
      do
      {
        if ( v6 < 0 || v6 >= *(_DWORD *)(a1 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v5);
          JUMPOUT(0x18003035FLL);
        }
        if ( (a2 & *(_DWORD *)(*(_QWORD *)(v7 + *(_QWORD *)(a1 + 32)) + 16LL)) != 0 )
          *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                  a1 + 32,
                                  (unsigned int)v6)
                   + 20LL) = 1;
        ++v6;
        v7 += 16LL;
      }
      while ( v6 < *(_DWORD *)(a1 + 40) );
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
