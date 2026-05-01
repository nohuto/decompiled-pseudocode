/*
 * XREFs of ?erase@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@2@0@Z @ 0x18012075C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@0@V10@00@Z @ 0x18057796C (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@0@V10@00@Z @ 0x180577A14 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@V12.c)
 */

_QWORD *__fastcall std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 **v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 **v14; // rax
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // r10
  __int64 **v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 **v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  _QWORD v24[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0LL;
  v6 = *(_QWORD *)(a3 + 16);
  v20 = v6;
  v19 = 0LL;
  if ( a1 )
  {
    v8 = *(__int64 ***)a1;
    v18 = v8;
  }
  else
  {
    v8 = 0LL;
    v18 = 0LL;
  }
  v9 = *(_QWORD *)(a4 + 16);
  v23 = v9;
  v22 = 0LL;
  if ( a1 )
    v21 = *(__int64 ***)a1;
  else
    v21 = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v6 - v10;
  v12 = v9 - v6;
  if ( v9 == v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v8 )
    {
      if ( *v8 )
        v4 = **v8;
      *a2 = v4;
    }
    a2[2] = v6;
  }
  else
  {
    if ( v11 >= v10 + *(_QWORD *)(a1 + 32) - v9 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v25,
        (__int64)&v18);
      v18 = *(__int64 ***)a1;
      v19 = 0LL;
      v20 = v17;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v24,
        (__int64)&v21);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
        &v21,
        v24,
        &v18,
        v25);
      for ( ; v12; --v12 )
      {
        v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
        if ( v16 )
          *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v24,
        (__int64)&v21);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v25,
        (__int64)&v18);
      v14 = *(__int64 ***)a1;
      v23 = v15;
      v21 = v14;
      v22 = 0LL;
      ((void (__fastcall *)(__int64 ***, __int64 ***, _QWORD *, _QWORD *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>)(
        &v18,
        &v21,
        v25,
        v24);
      for ( ; v12; --v12 )
      {
        v16 = (*(_QWORD *)(a1 + 32))-- == 1LL;
        if ( v16 )
          *(_QWORD *)(a1 + 24) = 0LL;
        else
          ++*(_QWORD *)(a1 + 24);
      }
    }
    v23 = *(_QWORD *)(a1 + 24);
    v21 = *(__int64 ***)a1;
    v22 = 0LL;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      &v18,
      (__int64)&v21);
    v20 += v11;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      a2,
      (__int64)&v18);
  }
  return a2;
}
