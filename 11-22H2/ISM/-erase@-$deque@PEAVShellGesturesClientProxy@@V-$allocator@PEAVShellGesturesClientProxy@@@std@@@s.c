/*
 * XREFs of ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x18017E1E4
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18017DF78 (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18017C7CC (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18017C87C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClient.c)
 */

_QWORD *__fastcall std::deque<ShellGesturesClientProxy *>::erase(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v6; // r8
  unsigned __int64 v7; // r14
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v14[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v15[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 *v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-20h]
  _QWORD v19[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  v6 = *(__int64 **)(a4 + 16);
  v7 = (unsigned __int64)v5 - *((_QWORD *)&xmmword_180278530 + 1);
  v8 = (char *)((char *)v6 - (char *)v5);
  if ( v6 == v5 )
  {
    *a2 = ShellGesturesProcessor::s_clients;
    a2[2] = v5;
  }
  else
  {
    v14[1] = 0LL;
    v15[1] = 0LL;
    v17[1] = 0LL;
    v14[0] = (__int64 *)ShellGesturesProcessor::s_clients;
    v14[2] = v6;
    v15[0] = (__int64 *)ShellGesturesProcessor::s_clients;
    v17[0] = (__int64 *)ShellGesturesProcessor::s_clients;
    if ( v7 >= *((_QWORD *)&xmmword_180278530 + 1) + qword_180278540 - (__int64)v6 )
    {
      v18 = v5;
      v16 = *((_QWORD *)&xmmword_180278530 + 1) + qword_180278540;
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        v19,
        v14,
        v15,
        (__int64)v17);
      v11 = qword_180278540;
      v10 = *((_QWORD *)&xmmword_180278530 + 1);
      do
      {
        v12 = v10 & -(__int64)(--v11 != 0);
        v10 = v12;
        --v8;
      }
      while ( v8 );
      *((_QWORD *)&xmmword_180278530 + 1) = v12;
      qword_180278540 = v11;
    }
    else
    {
      v16 = (__int64)v5;
      v18 = (__int64 *)*((_QWORD *)&xmmword_180278530 + 1);
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        v19,
        v17,
        v15,
        (__int64)v14);
      v9 = qword_180278540;
      v10 = *((_QWORD *)&xmmword_180278530 + 1);
      do
      {
        if ( --v9 )
          ++v10;
        else
          v10 = 0LL;
        *((_QWORD *)&xmmword_180278530 + 1) = v10;
        --v8;
      }
      while ( v8 );
      qword_180278540 = v9;
    }
    *a2 = ShellGesturesProcessor::s_clients;
    a2[2] = v10 + v7;
  }
  a2[1] = 0LL;
  return a2;
}
