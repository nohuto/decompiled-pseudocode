/*
 * XREFs of ?EndInteraction@CInteractionFrameStats@@UEAAX_K@Z @ 0x1801A56C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionFrameStats::EndInteraction(CInteractionFrameStats *this, unsigned __int64 a2)
{
  *((_BYTE *)this - 8) = 1;
  CCompFrameStats::StopCollection((CInteractionFrameStats *)((char *)this - 352), a2);
}
