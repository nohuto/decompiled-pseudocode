/*
 * XREFs of ?Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180127074
 * Callers:
 *     ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801335E0 (-Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receiv.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180050488 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1801729B8 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputAttemptedDeliveryClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3)
{
  struct ISMBamos_AutoBamos::BamoPeer *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  const char *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoInputAttemptedDeliveryClientProxy *v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = (struct ISMBamos_AutoBamos::BamoPeer *)*((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v16,
    *(_QWORD *)(*((_QWORD *)this + 3) + 32LL),
    a3,
    0LL);
  v6 = CreateInputAttemptedDeliveryClientProxy(v5, &v18);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1748,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v15);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v16,
    v7,
    v8,
    v9);
  if ( !v18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x174D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v10);
  v11 = (*(__int64 (__fastcall **)(struct BamoInputAttemptedDeliveryClientProxy *))(*(_QWORD *)v18 + 56LL))(v18);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v11 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v11 + 24) = a2;
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v12 + 40LL))(
          v12,
          *((unsigned int *)this + 9),
          a2,
          v11);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4869,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v15);
  return 0LL;
}
