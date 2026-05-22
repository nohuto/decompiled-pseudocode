/*
 * XREFs of ?OnZeroReferenceCount@BamoInputProcessPrincipalImpl@BamoImpl@@EEAAXXZ @ 0x1800DA350
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputProcessPrincipalImpl::OnZeroReferenceCount(
        BamoImpl::BamoInputProcessPrincipalImpl *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 40LL))(v1, (char *)this - 16);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xAA3D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v2,
        v3);
  }
}
