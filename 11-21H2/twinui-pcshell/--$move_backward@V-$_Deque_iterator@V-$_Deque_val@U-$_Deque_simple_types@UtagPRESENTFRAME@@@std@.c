/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x18032A720
 * Callers:
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x18033CF30 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 */

__int64 __fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // r11
  __int64 v9; // r8
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  __int64 v14; // r10

  v4 = *(__int64 **)(a2 + 16);
  v6 = 0LL;
  v7 = a3[2];
  if ( *a3 )
    v8 = **a3;
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(a4 + 16);
  if ( *(_QWORD *)a4 )
    v6 = **(_QWORD **)a4;
  while ( v4 != v7 )
  {
    v7 = (__int64 *)((char *)v7 - 1);
    --v9;
    v10 = *(__int128 **)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v7 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v11 = *v10;
    v12 = v10[1];
    v13 = *(_OWORD **)(*(_QWORD *)(v6 + 8) + 8 * (v9 & (*(_QWORD *)(v6 + 16) - 1LL)));
    *v13 = v11;
    v13[1] = v12;
  }
  *(_QWORD *)(a4 + 16) = v9;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
    a1,
    a4);
  return v14;
}
