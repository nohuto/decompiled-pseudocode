/*
 * XREFs of ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x18048B450
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x18048B09C (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveShellStressTool::HangAsync(
        ImmersiveShellStressTool *this,
        unsigned int a2,
        int a3,
        char *a4)
{
  __int64 v6; // rdi
  _DWORD *v8; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 result; // rax
  __int128 lpTargetHandle; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v16; // [rsp+50h] [rbp-58h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-50h]
  __int128 v18; // [rsp+60h] [rbp-48h] BYREF
  int v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+78h] [rbp-30h]
  volatile signed __int32 *v21; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v6 = a2;
    lpTargetHandle = 0LL;
    if ( a4 )
    {
      v18 = 0LL;
      std::shared_ptr<ViewEventRegistration>::operator=(&lpTargetHandle, (__int64 *)&v18);
      if ( *((_QWORD *)&v18 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v18 + 1));
      if ( !(_QWORD)lpTargetHandle )
      {
        v8 = operator new(0x18uLL);
        v8[2] = 1;
        v8[3] = 1;
        *(_QWORD *)v8 = ___7___Ref_count_obj2_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___std__6B_;
        *((_QWORD *)v8 + 2) = 0LL;
        v16 = v8 + 4;
        v17 = (std::_Ref_count_base *)v8;
        std::shared_ptr<ViewEventRegistration>::operator=(&lpTargetHandle, (__int64 *)&v16);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
      }
      CurrentProcess = GetCurrentProcess();
      v10 = GetCurrentProcess();
      if ( !DuplicateHandle(v10, a4, CurrentProcess, (LPHANDLE)lpTargetHandle, 0, 1, 2u) )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x24,
          (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
          a4);
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)&lpTargetHandle + 1);
    if ( (_DWORD)v6 )
    {
      do
      {
        v12 = *((_QWORD *)this + 2);
        v13 = *((_DWORD *)this + 6);
        v19 = a3;
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v11 = (volatile signed __int32 *)*((_QWORD *)&lpTargetHandle + 1);
        }
        v20 = lpTargetHandle;
        v21 = v11;
        CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(v12, (__int64)&v19, v13);
        --v6;
      }
      while ( v6 );
    }
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35,
                           (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
                           a4);
  }
  return result;
}
