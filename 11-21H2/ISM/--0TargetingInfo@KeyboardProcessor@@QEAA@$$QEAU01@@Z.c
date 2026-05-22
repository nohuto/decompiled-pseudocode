/*
 * XREFs of ??0TargetingInfo@KeyboardProcessor@@QEAA@$$QEAU01@@Z @ 0x180192E90
 * Callers:
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x180192BEC (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180192C44 (--$emplace@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardProcessor@@V-$a.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardProcessor::TargetingInfo::TargetingInfo(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rax
  __int64 v4; // rcx
  _OWORD *v5; // r8
  __int128 v6; // xmm1
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  v3 = (_OWORD *)a1;
  v4 = 2LL;
  v5 = (_OWORD *)a2;
  do
  {
    *v3 = *v5;
    v3[1] = v5[1];
    v3[2] = v5[2];
    v3[3] = v5[3];
    v3[4] = v5[4];
    v3[5] = v5[5];
    v3[6] = v5[6];
    v3 += 8;
    v6 = v5[7];
    v5 += 8;
    *(v3 - 1) = v6;
    --v4;
  }
  while ( v4 );
  v7 = (_QWORD *)(a2 + 368);
  *v3 = *v5;
  v3[1] = v5[1];
  v3[2] = v5[2];
  v3[3] = v5[3];
  v3[4] = v5[4];
  v3[5] = v5[5];
  v3[6] = v5[6];
  *(_QWORD *)(a1 + 368) = 0LL;
  if ( a1 + 368 != a2 + 368 )
  {
    *(_QWORD *)(a1 + 368) = *v7;
    *v7 = 0LL;
  }
  v8 = (_QWORD *)(a2 + 376);
  *(_QWORD *)(a1 + 376) = 0LL;
  if ( (_QWORD *)(a1 + 376) != v8 )
  {
    *(_QWORD *)(a1 + 376) = *v8;
    *v8 = 0LL;
  }
  return a1;
}
