/*
 * XREFs of ?SetMegaRectPrimitive@CMegaRectBatchCommand@@QEAAX$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@AEBVCMILMatrix@@@Z @ 0x180034DD8
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180035198 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCDrawListPrimitive@@@std@@$0A@@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180034E2C (--$-4U-$default_delete@VCDrawListPrimitive@@@std@@$0A@@-$unique_ptr@VCDrawListPrimitive@@U-$defa.c)
 */

__int64 __fastcall CMegaRectBatchCommand::SetMegaRectPrimitive(__int64 a1)
{
  __int64 result; // rax

  std::unique_ptr<CDrawListPrimitive>::operator=<std::default_delete<CDrawListPrimitive>,0>(a1 + 96);
  *(_OWORD *)(a1 + 16) = CMILMatrix::Identity;
  *(_OWORD *)(a1 + 32) = xmmword_1803E4F10;
  *(_OWORD *)(a1 + 48) = xmmword_1803E4F20;
  *(_OWORD *)(a1 + 64) = xmmword_1803E4F30;
  result = unk_1803E4F40;
  *(_DWORD *)(a1 + 80) = unk_1803E4F40;
  return result;
}
