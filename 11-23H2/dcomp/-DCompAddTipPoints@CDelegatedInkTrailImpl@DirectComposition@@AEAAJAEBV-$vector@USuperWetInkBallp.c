/*
 * XREFs of ?DCompAddTipPoints@CDelegatedInkTrailImpl@DirectComposition@@AEAAJAEBV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@PEAI@Z @ 0x1800E6A48
 * Callers:
 *     ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4 (-AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV-$vector@USuperWetInkB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z @ 0x1800FC1AC (-AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::DCompAddTipPoints(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = DirectComposition::CSynchronousSuperWetInk::AddTipPoints(
         *(DirectComposition::CSynchronousSuperWetInk **)(a1 + 24),
         *(const unsigned __int8 **)a2,
         -1227133513 * (unsigned int)((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3),
         0xB6DB6DB7,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x141,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
