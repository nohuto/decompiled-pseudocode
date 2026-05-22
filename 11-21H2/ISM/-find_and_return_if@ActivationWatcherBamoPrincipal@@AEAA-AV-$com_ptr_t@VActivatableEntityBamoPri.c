/*
 * XREFs of ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18004CB20
 * Callers:
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x18001B760 (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x18008E480 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18008E4C4 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_18008E4C4.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivatableEntityBamoPrincipal@@@Z @ 0x18004CA58 (--0-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActiva.c)
 *     ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x18004CAD8 (--R-$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall ActivationWatcherBamoPrincipal::find_and_return_if(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rax
  const char *v12; // r9
  __int64 v13; // rdx
  const char *v14; // r9
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rcx
  __int64 v18; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void (__fastcall ***v20)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v21 = a2;
  *a2 = 0LL;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  v7 = (__int64)(v6[8] - v6[7]) >> 3;
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6[4] + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(v9 + 16);
      v11 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v11);
      v13 = v6[7];
      if ( (unsigned int)v8 >= (unsigned __int64)((v6[8] - v13) >> 3) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x49,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          v12);
      wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>(
        &v20,
        *(void (__fastcall ****)(_QWORD))(v13 + 8 * v8));
      v15 = v20;
      if ( !v20 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x92,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
          v14);
      if ( (unsigned __int8)std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(a3, (__int64)v20) )
        break;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v20);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        goto LABEL_9;
    }
    v18 = *a2;
    *a2 = v15;
    (**v15)(v15);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v20);
  }
LABEL_9:
  v16 = *(_QWORD *)(a3 + 56);
  if ( v16 )
  {
    LOBYTE(v5) = v16 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a2;
}
