/*
 * XREFs of ?InitializeProxyThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800D9EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800D9FAC (-OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     ?OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800D9FDC (-OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::InitializeProxyThunk(BamoImpl::BamoInputProcessStubImpl *this)
{
  BamoInputProcessPrincipal *v2; // rbx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (BamoInputProcessPrincipal *)(*((_QWORD *)this + 3) - 16LL);
  v3 = BamoInputProcessPrincipal::OnCallProlog(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA70,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v3,
      v9);
  v5 = *((_QWORD *)v2 + 7);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBAA3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v4);
  v6 = (*(__int64 (__fastcall **)(__int64, BamoInputProcessPrincipal *, char *))(*(_QWORD *)v5 + 8LL))(
         v5,
         v2,
         (char *)this - 16);
  v7 = BamoInputProcessPrincipal::OnCallEpilog(v2);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  return v6;
}
