/*
 * XREFs of ?RegisterCallback@CBtAudioResourceManager@@UEAAJV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180066BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180066510 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180066878 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800C5FDC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManager::RegisterCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v16 = a2;
  wil::srwlock::lock_exclusive(a1 + 152, &v14);
  try
  {
    v7 = *(unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v7 + 1;
    v13 = v7;
    v8 = (_QWORD *)std::map<unsigned __int64,std::function<void (bool)>>::_Try_emplace<unsigned __int64 const &,>(
                     (__int64 *)(a1 + 168),
                     (__int64)v15,
                     &v13,
                     v6);
    std::function<void (bool)>::operator=(*v8 + 40LL, a2);
    *a3 = v7;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    std::_Func_class<void,>::_Tidy(a2, v9);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x482,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                     v10);
    std::_Func_class<void,>::_Tidy(v16, v12);
    return (unsigned int)v13;
  }
  return result;
}
