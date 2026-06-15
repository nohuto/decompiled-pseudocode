/*
 * XREFs of ??0?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140006864
 * Callers:
 *     ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140003E08 (--0CDeviceGraphObjectCache@@QEAA@XZ.c)
 *     ??0CAudioProcessor@@QEAA@XZ @ 0x14000418C (--0CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400068BC (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x140028530 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>(
        __int64 a1)
{
  `eh vector constructor iterator'(
    (void *)a1,
    0x30uLL,
    2uLL,
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::`default constructor closure',
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::~CAtlList<CConnectionNode *,CConnectionNodeTraits>);
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 120));
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 96) = a1;
  *(_QWORD *)(a1 + 104) = 0LL;
  return a1;
}
