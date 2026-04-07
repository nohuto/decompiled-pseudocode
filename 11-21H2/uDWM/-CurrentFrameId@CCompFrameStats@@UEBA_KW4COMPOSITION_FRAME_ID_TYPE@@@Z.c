/*
 * XREFs of ?CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180002DE0
 * Callers:
 *     ?CurrentFrameId@CAnimationFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180002D70 (-CurrentFrameId@CAnimationFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 * Callees:
 *     ?_DCompositionGetFrameId@CCompFrameStats@@CAJW4COMPOSITION_FRAME_ID_TYPE@@PEA_K@Z @ 0x180002E0C (-_DCompositionGetFrameId@CCompFrameStats@@CAJW4COMPOSITION_FRAME_ID_TYPE@@PEA_K@Z.c)
 */

__int64 __fastcall CCompFrameStats::CurrentFrameId(__int64 a1, unsigned int a2)
{
  int FrameId; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  FrameId = CCompFrameStats::_DCompositionGetFrameId(a2, &v5);
  v3 = v5;
  if ( FrameId < 0 )
    return 0LL;
  return v3;
}
