/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x1801505AC
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180150758 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  v5 = a2[1];
  while ( v5 != v4 )
  {
    v7 = a4[1];
    v8 = *(_QWORD *)(*a4 + 8LL);
    v9 = (v7 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v5 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)))
                    + 8 * (v5 & 1));
    a2[1] = ++v5;
    *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8 * (v7 & 1)) = v10;
    a4[1] = v7 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
