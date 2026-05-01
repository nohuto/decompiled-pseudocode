/*
 * XREFs of ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x180427794
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x180423BC8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x180423C70 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 *     ?pop_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x180427BBC (-pop_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 *     ?pop_front@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x180427C34 (-pop_front@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@.c)
 */

_QWORD *__fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 *v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 *v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 *v20[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-18h] BYREF

  v15 = 0LL;
  v16 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
          v21,
          a3)[2];
  if ( a1 )
    v14 = *(__int64 **)a1;
  else
    v14 = 0LL;
  v18 = 0LL;
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
         v21,
         v5)[2];
  v19 = v6;
  if ( a1 )
    v17 = *(__int64 **)a1;
  else
    v17 = 0LL;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v7 - v8;
  v10 = v6 - v7;
  if ( v6 == v7 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
      a2,
      (__int64)&v14);
  }
  else
  {
    if ( v9 >= v8 + *(_QWORD *)(a1 + 32) - v6 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v21,
        (__int64)&v14);
      v15 = 0LL;
      v16 = v12;
      v14 = *(__int64 **)a1;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v20,
        (__int64)&v17);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        &v17,
        v20,
        &v14,
        (__int64)v21);
      for ( ; v10; --v10 )
        std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_back(a1);
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v20,
        (__int64)&v17);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v21,
        (__int64)&v14);
      v18 = 0LL;
      v19 = v11;
      v17 = *(__int64 **)a1;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        &v14,
        &v17,
        (__int64)v21,
        (__int64)v20);
      for ( ; v10; --v10 )
        std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_front(a1);
    }
    v18 = 0LL;
    v19 = *(_QWORD *)(a1 + 24);
    v17 = *(__int64 **)a1;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      &v14,
      (__int64)&v17);
    v16 += v9;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
      a2,
      (__int64)&v14);
  }
  return a2;
}
