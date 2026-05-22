/*
 * XREFs of ?AllocateStubThunk@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1801703C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((_QWORD *)a2 + 2),
         &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2771,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  *a3 = v10;
  return 0LL;
}
