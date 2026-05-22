/*
 * XREFs of ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x18008EA24
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18004C968 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActivatableEntityBamoPrincipal@@@Z @ 0x18004CA58 (--0-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVActiva.c)
 *     ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x18004CAD8 (--R-$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18008E1DC (-RemoveAt@-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationWatcherBamoPrincipal::find_and_remove_if(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+48h] [rbp+10h]

  v20 = a2;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  v4 = (__int64)(v3[8] - v3[7]) >> 3;
  v5 = 0LL;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3[4] + 32LL);
      if ( *(int *)(v6 + 8) <= 0 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)(v6 + 16);
      v8 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v8);
      v10 = v3[7];
      if ( (unsigned int)v5 >= (unsigned __int64)((v3[8] - v10) >> 3) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          73LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          v9);
      wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>(
        &v19,
        *(void (__fastcall ****)(_QWORD))(v10 + 8 * v5));
      if ( (unsigned __int8)std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(a2, v19) )
        break;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v19);
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= (unsigned int)v4 )
        goto LABEL_8;
    }
    v14 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::RemoveAt(
            v3,
            v5);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        (const char *)(unsigned int)v14,
        v17);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v19);
    v16 = *(_QWORD *)(a2 + 56);
    if ( v16 )
    {
      LOBYTE(v15) = v16 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 0LL;
  }
  else
  {
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
      (const char *)0x8000FFFFLL);
    v11 = *(__int64 **)(a2 + 56);
    if ( v11 )
    {
      v12 = *v11;
      LOBYTE(v12) = v11 != (__int64 *)a2;
      (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v12);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 2147549183LL;
  }
}
