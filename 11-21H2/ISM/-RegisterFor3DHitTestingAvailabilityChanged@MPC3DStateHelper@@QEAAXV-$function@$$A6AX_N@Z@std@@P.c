/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D7A4
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18002BE88 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800403B8 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ?_Reset_move@?$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800467F0 (-_Reset_move@-$_Func_class@XPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ecx
  __int64 v7; // rbx
  _BYTE *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v12[16]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h]
  _BYTE v14[56]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE *v15; // [rsp+78h] [rbp-11h]
  _BYTE v16[56]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+2Fh]

  v13 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)a1);
  v11 = (RTL_SRWLOCK *)a1;
  v6 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = v6 + 1;
  *a3 = v6;
  v7 = *(_QWORD *)std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(
                    a1 + 48,
                    v12,
                    a3)
     + 40LL;
  v8 = 0LL;
  v15 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v9 )
  {
    v8 = (_BYTE *)(**v9)(v9, v14);
    v15 = v8;
  }
  if ( v8 == v14 || *(_QWORD *)(v7 + 56) == v7 )
  {
    v17 = 0LL;
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v16, v14);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v14, v7);
    std::_Func_class<void,MIT_INPUTSTREAM_ENDED_MESSAGE const *>::_Reset_move(v7, v16);
    std::_Func_class<void,>::_Tidy(v16);
  }
  else
  {
    v15 = *(_BYTE **)(v7 + 56);
    *(_QWORD *)(v7 + 56) = v8;
  }
  std::_Func_class<void,>::_Tidy(v14);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return std::_Func_class<void,>::_Tidy(a2);
}
