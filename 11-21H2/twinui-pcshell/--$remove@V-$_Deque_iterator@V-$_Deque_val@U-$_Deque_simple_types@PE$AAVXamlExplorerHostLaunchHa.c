/*
 * XREFs of ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180423D18
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_QWORD *__fastcall std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx

  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v4 = **(_QWORD **)a2;
  v9 = *(_QWORD *)(a3 + 16);
  while ( v5 != v9
       && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * ((*(_QWORD *)(v4 + 16) - 1LL) & (v5 >> 1))) + 8 * (v5 & 1)) != *a4 )
    ++v5;
  v10 = v5;
  if ( v5 != v9 )
  {
    while ( ++v5 != v9 )
    {
      v11 = *(_QWORD *)(v4 + 8);
      v12 = *(_QWORD *)(v4 + 16) - 1LL;
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * (v12 & (v5 >> 1))) + 8 * (v5 & 1));
      if ( v13 != *a4 )
      {
        __abi_winrt_ptr_assign((__int64 *)(*(_QWORD *)(v11 + 8 * (v12 & (v10 >> 1))) + 8 * (v10 & 1)), v13);
        ++v10;
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v10;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
    a1,
    a2);
  return a1;
}
