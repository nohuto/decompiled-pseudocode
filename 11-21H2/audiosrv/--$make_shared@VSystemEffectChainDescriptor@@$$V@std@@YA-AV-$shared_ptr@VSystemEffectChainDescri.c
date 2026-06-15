/*
 * XREFs of ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x180049164
 * Callers:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048D14 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

_QWORD *__fastcall std::make_shared<SystemEffectChainDescriptor,>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 1;
    v3[3] = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<SystemEffectChainDescriptor>::`vftable';
    memset_0(v3 + 4, 0, 0x48uLL);
    *((_QWORD *)v4 + 3) = 0LL;
    v4[8] = 0;
    *((_BYTE *)v4 + 36) = 0;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_QWORD *)v4 + 10) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4 + 4;
  result = a1;
  a1[1] = v4;
  return result;
}
