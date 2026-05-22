/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180150758
 * Callers:
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180151374 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 * Callees:
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x1801505AC (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGe.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801508A8 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 */

__int64 __fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        __int64 a1,
        __int64 **a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 v4; // rax
  __int64 *v5; // r11
  __int64 v8; // r9
  __int64 *v9; // r10
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = a2[2];
  if ( *a2 )
    v8 = **a2;
  else
    v8 = 0LL;
  v9 = a3[2];
  if ( *a3 )
    v10 = **a3;
  else
    v10 = 0LL;
  if ( *a4 )
    v4 = **a4;
  v12[1] = a4[2];
  v13[0] = v10;
  v14[0] = v8;
  v12[0] = v4;
  v13[1] = v9;
  v14[1] = v5;
  a4[2] = (__int64 *)*((_QWORD *)std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
                                   &v15,
                                   v14,
                                   (__int64)v13,
                                   v12)
                     + 1);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>(
    a1,
    a4);
  return a1;
}
