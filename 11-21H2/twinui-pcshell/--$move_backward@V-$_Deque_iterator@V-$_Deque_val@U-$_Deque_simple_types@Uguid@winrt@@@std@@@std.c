/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x18057A3F0
 * Callers:
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x180238C76 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // r11
  __int64 *v8; // r8
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *result; // rax

  v4 = *(__int64 **)(a2 + 16);
  v5 = 0LL;
  v6 = a3[2];
  if ( *a3 )
    v7 = **a3;
  else
    v7 = 0LL;
  v8 = a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  while ( v4 != v6 )
  {
    v6 = (__int64 *)((char *)v6 - 1);
    v8 = (__int64 *)((char *)v8 - 1);
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL))) = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v6 & (*(_QWORD *)(v7 + 16) - 1LL)));
  }
  v10 = *a4;
  a4[2] = v8;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v10 )
  {
    v11 = (__int64 *)*v10;
    if ( v11 )
      v5 = *v11;
    *a1 = v5;
  }
  result = a1;
  a1[2] = v8;
  return result;
}
