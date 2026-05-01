/*
 * XREFs of ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x180238C76
 * Callers:
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x180238E36 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_i_ea_180238E36.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18022B9C4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x18057A334 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x18057A3F0 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std.c)
 */

_QWORD *__fastcall std::deque<winrt::guid>::erase(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 **v8; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // r11
  bool v12; // zf
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  _QWORD v21[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = 0LL;
  v16 = 0LL;
  v17 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
          v22,
          a3)[2];
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  v19 = 0LL;
  v7 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v22,
         v6)[2];
  v20 = v7;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  v10 = v7 - v9;
  if ( v7 == v9 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v8 )
    {
      if ( *v8 )
        v5 = **v8;
      *a2 = v5;
    }
    a2[2] = v9;
  }
  else
  {
    if ( v9 - a1[3] >= (unsigned __int64)(a1[3] + a1[4] - v7) )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v22,
        (__int64)&v15);
      v15 = *a1;
      v16 = 0LL;
      v17 = v13;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v21,
        (__int64)&v18);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        &v18,
        v21,
        &v15,
        v22);
      for ( ; v10; --v10 )
      {
        v12 = a1[4]-- == 1;
        if ( v12 )
          a1[3] = 0LL;
      }
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v21,
        (__int64)&v18);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v22,
        (__int64)&v15);
      v18 = *a1;
      v19 = 0LL;
      v20 = v11;
      ((void (__fastcall *)(__int64 *, __int64 *, _QWORD *, _QWORD *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>)(
        &v15,
        &v18,
        v22,
        v21);
      for ( ; v10; --v10 )
      {
        v12 = a1[4]-- == 1;
        if ( v12 )
          a1[3] = 0LL;
        else
          ++a1[3];
      }
    }
    v20 = a1[3];
    v18 = *a1;
    v19 = 0LL;
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+((__int64)&v18);
  }
  return a2;
}
