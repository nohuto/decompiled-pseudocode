/*
 * XREFs of ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x18016B42C
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x18016DBF0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18016AD84 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  int v4; // eax
  __int64 *v5; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(*(_QWORD *)this + 72LL))(
         this,
         a2,
         &v9);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      671LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v4,
      v7);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  v5[3] = (__int64)this;
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    v5 + 4,
    (void (__fastcall ***)(_QWORD))a2);
  result = (struct Microsoft::BamoImpl::BamoStubImpl *)v5;
  v5[5] = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v5;
  v5[6] = *((_QWORD *)a2 + 7);
  *((_QWORD *)a2 + 7) = v5;
  return result;
}
