/*
 * XREFs of ?ResolveEventNotificationHandlerFromType@ContentManagement@@YA?AV?$function@$$A6AJXZ@std@@W4EventNotificationType@1@@Z @ 0x18005D3F8
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x180053B6C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ContentManagement::ResolveEventNotificationHandlerFromType(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  _QWORD *i; // rax
  char *v5; // rdx
  char *v6; // rax
  __int64 (__fastcall **v7)(char *, _QWORD *); // r8
  __int64 v8; // rax

  v3 = 0LL;
  for ( i = &unk_180194190; ; i += 5 )
  {
    if ( i == (_QWORD *)&unk_180194208 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = ContentManagement::NormalEventNotificationHandler;
      a1[3] = a1;
      return a1;
    }
    if ( *(_DWORD *)i == a2 )
      break;
  }
  v5 = (char *)(i + 1);
  a1[3] = 0LL;
  v6 = (char *)i[4];
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall ***)(char *, _QWORD *))v6;
    if ( v6 == v5 )
      v8 = (*v7)(v6, a1);
    else
      v8 = (*v7)(v6, 0LL);
    v3 = v8;
  }
  a1[3] = v3;
  return a1;
}
