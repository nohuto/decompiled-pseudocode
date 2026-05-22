/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180034034
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180041B00 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003415C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004C680 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x18004E9AC (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(
        PSRWLOCK SRWLock,
        __int64 a2,
        _DWORD *a3)
{
  int Ptr; // edx
  _QWORD *v7; // rax
  _BYTE v9[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  v7 = (_QWORD *)std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(
                   &SRWLock[6],
                   v9,
                   a3);
  std::function<void (bool)>::operator=(*v7 + 40LL, a2);
  ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(a2);
}
