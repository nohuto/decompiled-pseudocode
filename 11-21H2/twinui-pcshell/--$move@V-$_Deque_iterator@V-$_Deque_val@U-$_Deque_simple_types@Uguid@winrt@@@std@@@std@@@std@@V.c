/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x18057A334
 * Callers:
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x180238C76 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 *v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rsi
  __int64 *v10; // r8
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rax
  _QWORD *result; // rax

  v4 = *(__int64 **)a2;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = 0LL;
  if ( v4 )
    v8 = *v4;
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(a3 + 16);
  v10 = a4[2];
  if ( *a4 )
    v11 = **a4;
  else
    v11 = 0LL;
  while ( v6 != v9 )
  {
    v12 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v6 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v13 = (unsigned __int64)v10 & (*(_QWORD *)(v11 + 16) - 1LL);
    v10 = (__int64 *)((char *)v10 + 1);
    ++v6;
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v13) = v12;
  }
  v14 = *a4;
  a4[2] = v10;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v14 )
  {
    v15 = (__int64 *)*v14;
    if ( v15 )
      v7 = *v15;
    *a1 = v7;
  }
  result = a1;
  a1[2] = v10;
  return result;
}
