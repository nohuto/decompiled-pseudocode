/*
 * XREFs of ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003F364
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002B9C4 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800423D0 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180042758 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800E1350 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18004D120 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18004D310 (-_Reset_move@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(PSRWLOCK SRWLock, __int64 a2, _DWORD *a3)
{
  int Ptr; // ecx
  __int64 v7; // rbx
  _BYTE *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  _BYTE v11[16]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h]
  _BYTE v13[56]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE *v14; // [rsp+78h] [rbp-11h]
  _BYTE v15[56]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+2Fh]

  v12 = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  v7 = *(_QWORD *)std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(
                    &SRWLock[4],
                    v11,
                    a3)
     + 40LL;
  v8 = 0LL;
  v14 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v9 )
  {
    v8 = (_BYTE *)(**v9)(v9, v13);
    v14 = v8;
  }
  if ( v8 == v13 || *(_QWORD *)(v7 + 56) == v7 )
  {
    v16 = 0LL;
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v15, v13);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v13, v7);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v7, v15);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v15);
  }
  else
  {
    v14 = *(_BYTE **)(v7 + 56);
    *(_QWORD *)(v7 + 56) = v8;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v13);
  ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2);
}
