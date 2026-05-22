/*
 * XREFs of ?AllocateStubThunk@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEAVBaseBamoPeerImpl@36@PEAPEAVBamoStub@56@@Z @ 0x18018CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::AllocateStubThunk(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v14; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
  v6 = *((_QWORD *)a2 + 2);
  v7 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFDEA,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v12);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v7 + 56LL))(
         v7,
         v6,
         &v14);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFDEC,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFDEE,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
  *a3 = v14;
  return 0LL;
}
