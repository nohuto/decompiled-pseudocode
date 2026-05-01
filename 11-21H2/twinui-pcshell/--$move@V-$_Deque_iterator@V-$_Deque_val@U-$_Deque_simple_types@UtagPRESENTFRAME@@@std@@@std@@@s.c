/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x18032A684
 * Callers:
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x18033CF30 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 */

__int64 __fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r8
  __int128 *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // r10

  v4 = *(__int64 **)a2;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = 0LL;
  if ( v4 )
    v8 = *v4;
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_QWORD *)(a4 + 16);
  if ( *(_QWORD *)a4 )
    v7 = **(_QWORD **)a4;
  while ( v6 != v9 )
  {
    v11 = *(__int128 **)(*(_QWORD *)(v8 + 8) + 8 * (v6 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v12 = *v11;
    v13 = v11[1];
    v14 = v10++ & (*(_QWORD *)(v7 + 16) - 1LL);
    ++v6;
    v15 = *(_OWORD **)(*(_QWORD *)(v7 + 8) + 8 * v14);
    *v15 = v12;
    v15[1] = v13;
  }
  *(_QWORD *)(a4 + 16) = v10;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
    a1,
    a4);
  return v16;
}
