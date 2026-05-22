/*
 * XREFs of ?CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180008080
 * Callers:
 *     ?CurrentFrameId@CInteractionFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180008070 (-CurrentFrameId@CInteractionFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 */

__int64 __fastcall CCompFrameStats::CurrentFrameId(__int64 a1, unsigned int a2)
{
  int FrameId; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  FrameId = NtDCompositionGetFrameId(a2, &v6);
  v3 = DirectComposition::CDevice::HRESULTFromNTSTATUS(FrameId);
  v4 = v6;
  if ( v3 < 0 )
    return 0LL;
  return v4;
}
