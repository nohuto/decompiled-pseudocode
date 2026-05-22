/*
 * XREFs of ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4
 * Callers:
 *     ?AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IPEAI@Z @ 0x1800E6640 (-AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IP.c)
 *     ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@QEAAJPEBUInkTrailPoint@Composition@UI@Windows@@I0IPEAI@Z @ 0x1800E67EC (-AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@QEAAJPEBUInkTrailPoint@C.c)
 *     ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@I0IPEAI@Z @ 0x1800E68B0 (-AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInk.c)
 *     ?AddTrailPoints@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@PEAI@Z @ 0x18011B130 (-AddTrailPoints@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJIPEAUInkTrailPoint@345@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@_N@1@AEAIAEAUSuperWetInkBallpointPenPoint@@@Z @ 0x1800E61CC (--$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBall.c)
 *     ?DCompAddTipPoints@CDelegatedInkTrailImpl@DirectComposition@@AEAAJAEBV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@PEAI@Z @ 0x1800E6A48 (-DCompAddTipPoints@CDelegatedInkTrailImpl@DirectComposition@@AEAAJAEBV-$vector@USuperWetInkBallp.c)
 *     ?at@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAAEAUSuperWetInkBallpointPenPoint@@_K@Z @ 0x1800E74F0 (-at@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPoint@@@std@@@s.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsPrivate(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  bool v9; // zf
  _QWORD *v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebp
  int v15; // eax
  unsigned int v16; // esi
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a2[1];
  if ( *a2 != v6 || a3 && *a3 != a3[1] )
  {
    if ( *(_BYTE *)(a1 + 128) )
    {
      v9 = *a2 == v6;
      v10 = a3;
      if ( !v9 )
        v10 = a2;
      *(_DWORD *)(std::vector<SuperWetInkBallpointPenPoint>::at(v10) + 40) = 1;
      *(_BYTE *)(a1 + 128) = 0;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v11 = 0LL;
      if ( *a2 != a2[1] )
      {
        v12 = DirectComposition::CDelegatedInkTrailImpl::DCompAddTipPoints(a1, a2, a4, 0LL);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16B,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
            (const char *)(unsigned int)v12);
          return v13;
        }
        v11 = a2[1] - 56LL;
      }
      if ( a3 )
      {
        if ( *a3 != a3[1] )
        {
          v15 = DirectComposition::CDelegatedInkTrailImpl::DCompAddTipPoints(a1, a3, a4, v11);
          v16 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x176,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\delegatedinktrailimpl.cpp",
              (const char *)(unsigned int)v15);
            return v16;
          }
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Emplace<unsigned int &,SuperWetInkBallpointPenPoint &>(
        (__int64 *)(a1 + 48),
        (__int64)v17);
    }
  }
  return 0LL;
}
