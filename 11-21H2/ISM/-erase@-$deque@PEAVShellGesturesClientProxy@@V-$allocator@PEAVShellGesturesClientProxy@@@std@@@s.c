/*
 * XREFs of ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180151374
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x180151104 (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E3190 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180150758 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180150800 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClient.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801508A8 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 */

_QWORD *__fastcall std::deque<ShellGesturesClientProxy *>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 *v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 *v24[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v25[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v25,
         a3);
  v5 = (__int64 *)ShellGesturesProcessor::s_clients;
  v19 = 0LL;
  v18 = (__int64 *)ShellGesturesProcessor::s_clients;
  v20 = v4[2];
  v7 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v25,
         v6);
  v22 = 0LL;
  v9 = v8 - *((_QWORD *)&xmmword_180243020 + 1);
  v21 = v5;
  v23 = v7[2];
  v10 = v23 - v8;
  if ( v23 != v8 )
  {
    if ( v9 >= *((_QWORD *)&xmmword_180243020 + 1) + qword_180243030 - v23 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v25,
        (__int64)&v18);
      v19 = 0LL;
      v20 = v14;
      v18 = v5;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v24,
        (__int64)&v21);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        (__int64)&v21,
        v24,
        &v18,
        v25);
      if ( v10 )
      {
        v15 = qword_180243030;
        v13 = *((_QWORD *)&xmmword_180243020 + 1);
        do
        {
          v16 = v13 & -(__int64)(--v15 != 0);
          v13 = v16;
          --v10;
        }
        while ( v10 );
        *((_QWORD *)&xmmword_180243020 + 1) = v16;
        qword_180243030 = v15;
        goto LABEL_16;
      }
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v24,
        (__int64)&v21);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
        v25,
        (__int64)&v18);
      v22 = 0LL;
      v23 = v11;
      v21 = v5;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        (__int64)&v18,
        &v21,
        (__int64)v25,
        (__int64)v24);
      if ( v10 )
      {
        v12 = qword_180243030;
        v13 = *((_QWORD *)&xmmword_180243020 + 1);
        do
        {
          if ( --v12 )
            ++v13;
          else
            v13 = 0LL;
          *((_QWORD *)&xmmword_180243020 + 1) = v13;
          --v10;
        }
        while ( v10 );
        qword_180243030 = v12;
        goto LABEL_16;
      }
    }
    v13 = *((_QWORD *)&xmmword_180243020 + 1);
LABEL_16:
    v22 = 0LL;
    v23 = v13;
    v21 = (__int64 *)ShellGesturesProcessor::s_clients;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
      &v18,
      (__int64)&v21);
    v20 += v9;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
      a2,
      (__int64)&v18);
    return a2;
  }
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>(
    a2,
    (__int64)&v18);
  return a2;
}
