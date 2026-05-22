/*
 * XREFs of ??$?0AEAIAEAUSuperWetInkBallpointPenPoint@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@AEAIAEAUSuperWetInkBallpointPenPoint@@@Z @ 0x1800E5F1C
 * Callers:
 *     ??$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@_N@1@AEAIAEAUSuperWetInkBallpointPenPoint@@@Z @ 0x1800E61CC (--$_Emplace@AEAIAEAUSuperWetInkBallpointPenPoint@@@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBall.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  a1[1] = v8;
  *(_DWORD *)(v8 + 32) = *a4;
  *(_OWORD *)(v8 + 40) = *(_OWORD *)a5;
  *(_OWORD *)(v8 + 56) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(v8 + 72) = *(_OWORD *)(a5 + 32);
  v9 = 0LL;
  *(_QWORD *)(v8 + 88) = *(_QWORD *)(a5 + 48);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v9++ + 24) = 0;
  while ( v9 < 2 );
  return a1;
}
