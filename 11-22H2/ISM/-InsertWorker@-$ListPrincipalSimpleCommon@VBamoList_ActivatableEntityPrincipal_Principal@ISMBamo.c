/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001D580
 * Callers:
 *     ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x18001D24C (-AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STAT.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18001D978 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800B6A5C (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v5; // r12
  _QWORD *v8; // rdi
  const char **v9; // r14
  const char **v10; // r8
  const char *v11; // rbx
  int v12; // eax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  const char *v18; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const char *v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  v8 = a1 + 7;
  if ( a3 > (unsigned __int64)((__int64)(a1[8] - a1[7]) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  v20 = a4;
  if ( a4 )
    (**(void (__fastcall ***)(const char *))a4)(a4);
  v9 = (const char **)(*v8 + 8 * v5);
  v10 = (const char **)v8[1];
  if ( v10 == (const char **)v8[2] )
  {
    std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
      v8,
      *v8 + 8 * v5,
      &v20);
    v11 = v20;
  }
  else
  {
    v11 = 0LL;
    if ( v9 == v10 )
    {
      *v10 = a4;
      v8[1] += 8LL;
    }
    else
    {
      v17 = (int)v8;
      v20 = 0LL;
      v18 = a4;
      v14 = *(v10 - 1);
      *(v10 - 1) = 0LL;
      *v10 = v14;
      v8[1] += 8LL;
      std::_Move_backward_unchecked<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *>(v9);
      v15 = v18;
      v18 = 0LL;
      v16 = *v9;
      *v9 = v15;
      if ( v16 )
        (*(void (__fastcall **)(const char *))(*(_QWORD *)v16 + 8LL))(v16);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v18);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v11 + 8LL))(v11);
  if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) + 64) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, const char *))(a1[1] + 24LL))(a1 + 1, (unsigned int)v5, a4);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v12,
        v17);
  }
  return 0LL;
}
