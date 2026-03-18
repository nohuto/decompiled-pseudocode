/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E2664
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E2124 (--1CInteraction@@MEAA@XZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E25E0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x1800E2860 (-SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE<CInputSinkStruct>(CInputSinkStruct **a1)
{
  CInputSinkStruct *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CInputSinkStruct::SetCompositionInputHandle(*a1, 0LL);
    operator delete(v1);
    *a1 = 0LL;
  }
}
