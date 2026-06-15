/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003078C
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // edi
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v9; // rcx
  bool v10; // sf

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != *(_DWORD *)(a1 + 12) )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v10 = (v2 & 0x40000000) != 0;
    v5 = 2 * v2;
    if ( v10 )
      return 0LL;
  }
  else
  {
    v5 = 1;
  }
  if ( v5 > 0x7FFFFFFuLL )
    return 0LL;
  v6 = _o__recalloc(*(_QWORD *)a1, v5, 16LL);
  if ( !v6 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = v5;
  *(_QWORD *)a1 = v6;
LABEL_7:
  v7 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v9 = a2[1];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *v7 = *a2;
    v7[1] = a2[1];
  }
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
