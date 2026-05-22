/*
 * XREFs of ?Materialize_BamoDragManagerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180039A80
 * Callers:
 *     ?Thunk_Materialize_BamoDragManagerClientProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180039A70 (-Thunk_Materialize_BamoDragManagerClientProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeer.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0DragManagerClientProxy@@QEAA@XZ @ 0x180039B68 (--0DragManagerClientProxy@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180050C38 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoDragManagerClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  DragManagerClientProxy *v6; // rbx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+60h] [rbp+8h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    *(_QWORD *)(*((_QWORD *)this + 3) + 32LL),
    a3,
    0LL);
  v16 = operator new(0x98uLL);
  memset_0(v16, 0, 0x98uLL);
  v6 = DragManagerClientProxy::DragManagerClientProxy((DragManagerClientProxy *)v16);
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\d"
                    "ragmanagerclientproxy.cpp",
      v8);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v14,
    v5,
    v7,
    v8);
  v9 = (*(__int64 (__fastcall **)(DragManagerClientProxy *))(*(_QWORD *)v6 + 56LL))(v6);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v9 + 16, this);
  *(_DWORD *)(v9 + 24) = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(
          v10,
          *((unsigned int *)this + 9),
          a2,
          v9);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B98,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v13);
  return 0LL;
}
