/*
 * XREFs of ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14005EAA0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008ECCC (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140028128 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRealTimeSafeStruct<CProcessingData,1>::~CRealTimeSafeStruct<CProcessingData,1>(char *a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  `eh vector destructor iterator'(a1, 144LL, 2LL, (void (*)(void *))CProcessingData::~CProcessingData);
}
