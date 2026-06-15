/*
 * XREFs of ?RegisterCallback@CBtAudioResourceManagerBase@@UEAAJV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x1800F9C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$_Try_emplace@_K$$V@?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x1800F4E90 (--$_Try_emplace@_K$$V@-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F55F4 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::RegisterCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 176);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 176));
  try
  {
    v14[1] = (unsigned __int64)v6;
    v8 = *(unsigned int *)(a1 + 184);
    *(_DWORD *)(a1 + 184) = v8 + 1;
    v14[0] = v8;
    v9 = (_QWORD *)std::map<unsigned __int64,std::function<void (bool)>>::_Try_emplace<unsigned __int64,>(
                     (__int64 *)(a1 + 192),
                     (__int64)v15,
                     v14,
                     v7);
    std::function<void (bool)>::operator=(*v9 + 40LL, a2);
    *a3 = v8;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    std::_Func_class<void,>::_Tidy(a2, v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14[0]) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x459,
                        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                        v11);
    std::_Func_class<void,>::_Tidy(v16, v13);
    return LODWORD(v14[0]);
  }
  return result;
}
