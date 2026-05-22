/*
 * XREFs of ?AllocateStubThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800CAB60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CAD5C (-OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     ?OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CAD8C (-OnCallProlog@BamoInputProcessPrincipal@@IEAAJXZ.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoInputProcessPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  BamoInputProcessPrincipal *v5; // rax
  __int64 v6; // rbx
  BamoInputProcessPrincipal *v7; // rdi
  int v8; // eax
  const char *v9; // r9
  __int64 (__fastcall ***v10)(_QWORD, BamoInputProcessPrincipal *, __int64, struct Microsoft::Bamo::BamoStub **); // rcx
  int v11; // eax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = (BamoInputProcessPrincipal *)(*(__int64 (__fastcall **)(BamoImpl::BamoInputProcessPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
  v6 = *((_QWORD *)a2 + 2);
  v7 = v5;
  v8 = BamoInputProcessPrincipal::OnCallProlog(v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5CC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v14);
  v10 = (__int64 (__fastcall ***)(_QWORD, BamoInputProcessPrincipal *, __int64, struct Microsoft::Bamo::BamoStub **))*((_QWORD *)v7 + 7);
  if ( !v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB816,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v9);
  v11 = (**v10)(v10, v7, v6, &v16);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5CE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v14);
  v12 = BamoInputProcessPrincipal::OnCallEpilog(v7);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5D0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
  *a3 = v16;
  return 0LL;
}
