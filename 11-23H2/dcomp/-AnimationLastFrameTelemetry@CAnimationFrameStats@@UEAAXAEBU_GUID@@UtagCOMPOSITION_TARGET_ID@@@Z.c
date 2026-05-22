/*
 * XREFs of ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXAEBU_GUID@@UtagCOMPOSITION_TARGET_ID@@@Z @ 0x180003410
 * Callers:
 *     <none>
 * Callees:
 *     GetAnimationScenarioNameFromGUID @ 0x180003470 (GetAnimationScenarioNameFromGUID.c)
 */

__int64 __fastcall CAnimationFrameStats::AnimationLastFrameTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // xmm1_8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 - 148) )
  {
    v4 = *(_DWORD *)(a3 + 24);
    v5 = *(_QWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = v5;
    *(_DWORD *)(a1 + 32) = v4;
    result = GetAnimationScenarioNameFromGUID(a2, a1 + 1076, 260LL);
    *(_BYTE *)(a1 + 2644) = 1;
  }
  return result;
}
