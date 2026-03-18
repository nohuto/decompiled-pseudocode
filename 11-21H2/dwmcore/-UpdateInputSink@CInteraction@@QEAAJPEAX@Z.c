/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E0D28
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E0CA8 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800E0DB0 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800E1008 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E105C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  int v2; // ebx
  CInputSinkStruct **v3; // rdi
  CInputSinkStruct *v5; // rax
  CInputSinkStruct *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 104);
  if ( !a2 )
    goto LABEL_9;
  v5 = *v3;
  if ( !*v3 )
  {
    v6 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
    if ( !v6 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v5 = CInputSinkStruct::CInputSinkStruct(v6);
    *v3 = v5;
    if ( !v5 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x2E2u);
      NtCloseCompositionInputSink(a2);
LABEL_9:
      SAFE_DELETE<CInputSinkStruct>(v3);
      return (unsigned int)v2;
    }
  }
  v8 = CInputSinkStruct::ReplaceInputHandle(v5, a2);
  v2 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x2E6u);
  if ( v2 < 0 )
    goto LABEL_9;
  return (unsigned int)v2;
}
