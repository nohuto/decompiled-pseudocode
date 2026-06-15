/*
 * XREFs of ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x1400221BC
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140022288 (--1CAudioProcessor@@QEAA@XZ.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$4 @ 0x140038F3C (_CAudioProcessor--CAudioProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14002F8A8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>(
        struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1 + 3);
  `eh vector destructor iterator'(
    a1,
    0x30uLL,
    2uLL,
    (void (*)(void *))ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::~CAtlList<CConnectionNode *,CConnectionNodeTraits>);
}
