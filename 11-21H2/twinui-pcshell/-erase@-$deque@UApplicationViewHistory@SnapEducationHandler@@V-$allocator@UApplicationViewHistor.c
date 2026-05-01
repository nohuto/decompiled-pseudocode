/*
 * XREFs of ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1800204A8
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ?pop_back@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAXXZ @ 0x180020610 (-pop_back@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHis.c)
 *     ??1?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@XZ @ 0x180020660 (--1-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x18002068C (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@0@V10@00@Z @ 0x1805B2AC0 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory.c)
 */

__int64 __fastcall std::deque<SnapEducationHandler::ApplicationViewHistory>::erase(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  _BYTE v25[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v26[24]; // [rsp+68h] [rbp-18h] BYREF

  v20 = 0LL;
  v5 = *(_QWORD *)(a3 + 16);
  v21 = v5;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v23 = 0LL;
  v7 = *(_QWORD *)(a4 + 16);
  v24 = v7;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  v8 = a1[3];
  v9 = v5 - v8;
  v10 = v7 - v5;
  if ( v7 == v5 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
      a2,
      &v19);
  }
  else
  {
    if ( v9 < v8 + a1[4] - v7 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v25,
        &v22);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v26,
        &v19);
      v15 = *a1;
      v23 = 0LL;
      v24 = v16;
      v22 = v15;
      ((void (__fastcall *)(__int64 *, __int64 *, _BYTE *, _BYTE *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>)(
        &v19,
        &v22,
        v26,
        v25);
      if ( v10 )
      {
        v17 = a1[3];
        do
        {
          std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(*(_QWORD *)(a1[1] + 8 * (v17 & (a1[2] - 1))) + 16LL);
          if ( a1[4]-- == 1 )
          {
            a1[3] = 0LL;
            v17 = 0LL;
          }
          else
          {
            v17 = ++a1[3];
          }
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v26,
        &v19);
      v11 = *a1;
      v20 = 0LL;
      v19 = v11;
      v21 = v12;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v25,
        &v22);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>>(
        &v22,
        v25,
        &v19,
        v26);
      for ( ; v10; --v10 )
        std::deque<SnapEducationHandler::ApplicationViewHistory>::pop_back(a1);
    }
    v13 = a1[3];
    v23 = 0LL;
    v24 = v13;
    v22 = *a1;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      &v19,
      &v22);
    v21 += v9;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      a2,
      &v19);
  }
  return a2;
}
