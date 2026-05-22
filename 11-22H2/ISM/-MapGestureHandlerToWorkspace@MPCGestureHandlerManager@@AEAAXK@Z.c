/*
 * XREFs of ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800BB69C
 * Callers:
 *     ?GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA?AV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x1800BB23C (-GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA-AV-$com_ptr_t@VMPCGestureHandler@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x1800BA5A0 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800BA9D4 (--$_Try_emplace@AEBK$$V@-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?attach@?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHandler@@@Z @ 0x1800BBE34 (-attach@-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHand.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace(MPCGestureHandlerManager *this, unsigned int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbx
  const char *v5; // r9
  MPCGestureHandler **v6; // rax
  MPCGestureHandler *v7; // rdx
  MPCGestureHandler *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  _BYTE v11[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  _DWORD *v13; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF
  MPCGestureHandler *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IInputProcessorHost *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 5) == v3 )
  {
    v16 = (struct IInputProcessorHost *)*((_QWORD *)MPCHolographicInputManager::GetInstance() + 412);
    v6 = Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost *>(&v15, &v16);
    v7 = *v6;
    *v6 = 0LL;
    wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::attach(&v13, v7);
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v4 = v13;
  }
  else
  {
    v4 = *(_DWORD **)(v3 - 8);
    v13 = v4;
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 6) - 8LL));
    *((_QWORD *)this + 6) -= 8LL;
  }
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
  v9 = std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::_Try_emplace<unsigned long const &,>(
         (__int64 *)this + 1,
         (__int64)v11,
         &v14);
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
  *(_QWORD *)(*(_QWORD *)v9 + 40LL) = v4;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v4[228] = v14;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
}
