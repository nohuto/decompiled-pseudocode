/*
 * XREFs of ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F8F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800F638C (_lambda_249a22bcff1aef3e1794295476d640d0_--operator()_Microsoft--WRL--WeakRef_const__.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800FA130 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::EnumerateProcessSubmixes(CBaseStreamGroupProxy *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v11 = v4;
  CBaseStreamGroupProxy::PruneStaleProcessSubmixes(this);
  v10 = a2;
  v5 = (_QWORD *)*((_QWORD *)this + 28);
  v6 = (_QWORD *)*((_QWORD *)this + 27);
  try
  {
    while ( v6 != v5 )
      lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__(&v10, v6++);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x192,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v7);
  }
  return result;
}
