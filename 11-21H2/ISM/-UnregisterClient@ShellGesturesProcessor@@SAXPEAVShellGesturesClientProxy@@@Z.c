/*
 * XREFs of ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x180151104
 * Callers:
 *     ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F930 (-OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E3190 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1801508A8 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180151374 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 */

void __fastcall ShellGesturesProcessor::UnregisterClient(struct ShellGesturesClientProxy *a1)
{
  __int64 v1; // rdx
  unsigned __int64 i; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+7h]
  _QWORD v11[3]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v12[3]; // [rsp+70h] [rbp+27h] BYREF
  _BYTE v13[24]; // [rsp+88h] [rbp+3Fh] BYREF

  v1 = 0LL;
  v9[1] = 0LL;
  v10 = *((_QWORD *)&xmmword_180243020 + 1);
  v9[0] = ShellGesturesProcessor::s_clients;
  if ( (_QWORD)ShellGesturesProcessor::s_clients )
    v1 = *(_QWORD *)ShellGesturesProcessor::s_clients;
  v8[1] = *((_QWORD *)&xmmword_180243020 + 1);
  v8[0] = v1;
  for ( i = *((_QWORD *)&xmmword_180243020 + 1);
        i != *((_QWORD *)&xmmword_180243020 + 1) + qword_180243030
     && *(struct ShellGesturesClientProxy **)(*(_QWORD *)(*(_QWORD *)(v1 + 8)
                                                        + 8 * ((i >> 1) & (*(_QWORD *)(v1 + 16) - 1LL)))
                                            + 8 * (i & 1)) != a1;
        ++i )
  {
    ;
  }
  v10 = i;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>(
    v8,
    (__int64)v9);
  v3 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>(
         v11,
         (__int64)v8);
  v4 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v8,
         (__int64)v3);
  ++v4[2];
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
    v9,
    (__int64)v4);
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
         v12,
         v5);
  std::deque<ShellGesturesClientProxy *>::erase(v7, v13, v6, v9);
}
