/*
 * XREFs of ?Materialize_BamoAnimationTargetClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004FBB0
 * Callers:
 *     ?Thunk_Materialize_BamoAnimationTargetClientProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18004FBA0 (-Thunk_Materialize_BamoAnimationTargetClientProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamo.c)
 * Callees:
 *     ?CreateAnimationTargetClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18004FC54 (-CreateAnimationTargetClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPe.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180050488 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoAnimationTargetClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  BamoImpl::CreateAnimationTargetClientProxy(
    *(BamoImpl **)(*((_QWORD *)this + 3) + 32LL),
    a2,
    (struct ISMBamos_AutoBamos::BamoPeer *)&v12,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v6 + 16, this);
  *(_DWORD *)(v6 + 24) = v5;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *((unsigned int *)this + 9),
         v5,
         v6);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x456E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v10);
  return 0LL;
}
