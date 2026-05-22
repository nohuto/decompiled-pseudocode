/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180012680
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180012788 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x18008D30C (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  unsigned __int64 v5; // r12
  __int64 *v8; // rdi
  const char **v9; // r8
  __int64 v10; // rax
  const char **v11; // rsi
  const char *v12; // rbx
  int v13; // eax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  const char *v19; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const char *v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  v8 = a1 + 7;
  v9 = (const char **)a1[8];
  v10 = a1[7];
  if ( v5 > ((__int64)v9 - v10) >> 3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  v21 = a4;
  if ( a4 )
  {
    (**(void (__fastcall ***)(const char *))a4)(a4);
    v9 = (const char **)v8[1];
    v10 = *v8;
  }
  v11 = (const char **)(v10 + 8 * v5);
  if ( v9 == (const char **)v8[2] )
  {
    std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
      v8,
      v10 + 8 * v5,
      &v21);
    v12 = v21;
  }
  else
  {
    v12 = 0LL;
    if ( v11 == v9 )
    {
      *v9 = a4;
      v8[1] += 8LL;
    }
    else
    {
      v18 = (int)v8;
      v21 = 0LL;
      v19 = a4;
      v15 = *(v9 - 1);
      *(v9 - 1) = 0LL;
      *v9 = v15;
      v8[1] += 8LL;
      std::_Move_backward_unchecked<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *>(v11);
      v16 = v19;
      v19 = 0LL;
      v17 = *v11;
      *v11 = v16;
      if ( v17 )
        (*(void (__fastcall **)(const char *))(*(_QWORD *)v17 + 8LL))(v17);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v19);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v12 + 8LL))(v12);
  if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 64) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, const char *))(a1[1] + 24LL))(a1 + 1, (unsigned int)v5, a4);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v13,
        v18);
  }
  return 0LL;
}
