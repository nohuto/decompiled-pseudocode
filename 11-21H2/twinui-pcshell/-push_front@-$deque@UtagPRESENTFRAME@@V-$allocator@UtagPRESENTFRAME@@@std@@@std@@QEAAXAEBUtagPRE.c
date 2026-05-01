/*
 * XREFs of ?push_front@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAAXAEBUtagPRESENTFRAME@@@Z @ 0x18033D4C4
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z @ 0x18033C284 (-_Growmap@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z.c)
 */

_OWORD *__fastcall std::deque<tagPRESENTFRAME>::push_front(_QWORD *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  bool v5; // zf
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  _OWORD *result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<tagPRESENTFRAME>::_Growmap(a1);
    v4 = a1[2];
  }
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  v7 = a1[1];
  if ( v5 )
    v6 = v4;
  v8 = v6 - 1;
  v9 = v8 & (v4 - 1);
  if ( !*(_QWORD *)(v7 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v7 = a1[1];
  }
  result = *(_OWORD **)(v7 + 8 * v9);
  *result = *a2;
  result[1] = a2[1];
  a1[3] = v8;
  ++a1[4];
  return result;
}
