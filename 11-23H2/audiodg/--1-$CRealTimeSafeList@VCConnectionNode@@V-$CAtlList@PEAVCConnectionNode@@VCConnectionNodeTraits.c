/*
 * XREFs of ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x14003826C
 * Callers:
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$4 @ 0x140034433 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$4.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008EC7C (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140028128 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>(
        struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1 + 3);
  `eh vector destructor iterator'(
    (char *)a1,
    48LL,
    2LL,
    (void (*)(void *))ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::~CAtlList<CConnectionNode *,CConnectionNodeTraits>);
}
