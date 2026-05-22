/*
 * XREFs of ?Materialize_BamoEdgyDragSourceClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18010BD70
 * Callers:
 *     ?Thunk_Materialize_BamoEdgyDragSourceClientProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180117F50 (-Thunk_Materialize_BamoEdgyDragSourceClientProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoP.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180048740 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoEdgyDragSourceClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v10; // [rsp+50h] [rbp+18h]

  v10 = operator new(0x60uLL);
  *v10 = &BamoEdgyDragSourceClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v10[1] = &BamoEdgyDragSourceClientProxy::`vftable'{for `IEdgyDragSourceClientProxy'};
  *((_DWORD *)v10 + 6) = 0;
  v10[4] = 0LL;
  *((_DWORD *)v10 + 10) = 0;
  *((_DWORD *)v10 + 11) = 0;
  v10[2] = &BamoImpl::BamoEdgyDragSourceClientProxyImpl::`vftable';
  *((_OWORD *)v10 + 3) = 0LL;
  v10[8] = 0LL;
  v10[9] = 0LL;
  v10[10] = 0LL;
  *((_DWORD *)v10 + 22) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 56LL))(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v4 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v4 + 24) = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((unsigned int *)this + 9),
         a2,
         v4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA23,
      (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
