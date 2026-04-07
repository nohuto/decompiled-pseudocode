/*
 * XREFs of ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002D7C
 * Callers:
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 * Callees:
 *     ?_DCompositionGetFrameId@CCompFrameStats@@CAJW4COMPOSITION_FRAME_ID_TYPE@@PEA_K@Z @ 0x180002E0C (-_DCompositionGetFrameId@CCompFrameStats@@CAJW4COMPOSITION_FRAME_ID_TYPE@@PEA_K@Z.c)
 */

char __fastcall CCompFrameStats::WaitForCompletedFrameStats(CCompFrameStats *this, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  CCompFrameStats *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v3 = 0;
  while ( (int)CCompFrameStats::_DCompositionGetFrameId(2LL, &v5) < 0 || (unsigned __int64)v5 < a2 )
  {
    Sleep(5u);
    v3 += 5;
    if ( v3 > 0x32 )
      return 0;
  }
  return 1;
}
