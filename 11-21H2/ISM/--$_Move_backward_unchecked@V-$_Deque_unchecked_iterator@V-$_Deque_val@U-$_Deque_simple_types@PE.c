/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x1801504FC
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180150800 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClient.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  for ( i = a3[1];
        v4 != i;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((v9 >> 1) & (*(_QWORD *)(v8 + 16) - 1LL))) + 8 * (v9 & 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v10) + 8 * (i & 1)) )
  {
    v7 = *a3;
    --i;
    v8 = *a4;
    v9 = a4[1] - 1;
    a3[1] = i;
    v10 = (i >> 1) & (*(_QWORD *)(v7 + 16) - 1LL);
    a4[1] = v9;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
