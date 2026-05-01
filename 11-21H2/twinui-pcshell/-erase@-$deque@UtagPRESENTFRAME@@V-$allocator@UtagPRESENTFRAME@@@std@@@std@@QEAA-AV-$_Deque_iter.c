/*
 * XREFs of ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x18033CF30
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18022B9C4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x18032A684 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@s.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x18032A720 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@.c)
 */

_QWORD *__fastcall std::deque<tagPRESENTFRAME>::erase(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  _QWORD v22[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v23[3]; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0LL;
  v18 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
          v23,
          a3)[2];
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  v20 = 0LL;
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v23,
         v5)[2];
  v21 = v6;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v8 = v6 - v7;
  if ( v6 == v7 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
      a2,
      (__int64)&v16);
  }
  else
  {
    if ( v7 - a1[3] >= (unsigned __int64)(a1[3] + a1[4] - v6) )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v23,
        (__int64)&v16);
      v12 = *a1;
      v17 = 0LL;
      v16 = v12;
      v18 = v13;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v22,
        (__int64)&v19);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        &v19,
        (__int64)v22,
        (__int64)&v16,
        (__int64)v23);
      for ( ; v8; --v8 )
      {
        v11 = a1[4]-- == 1;
        if ( v11 )
          a1[3] = 0LL;
      }
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v22,
        (__int64)&v19);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v23,
        (__int64)&v16);
      v9 = *a1;
      v20 = 0LL;
      v21 = v10;
      v19 = v9;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        &v16,
        (__int64)&v19,
        v23,
        (__int64)v22);
      for ( ; v8; --v8 )
      {
        v11 = a1[4]-- == 1;
        if ( v11 )
          a1[3] = 0LL;
        else
          ++a1[3];
      }
    }
    v14 = a1[3];
    v20 = 0LL;
    v21 = v14;
    v19 = *a1;
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+((__int64)&v19);
  }
  return a2;
}
