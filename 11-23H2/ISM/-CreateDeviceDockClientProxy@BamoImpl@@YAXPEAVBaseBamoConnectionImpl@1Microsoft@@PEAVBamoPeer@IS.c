/*
 * XREFs of ?CreateDeviceDockClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1801237E4
 * Callers:
 *     ?Materialize_BamoDeviceDockClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18012653C (-Materialize_BamoDeviceDockClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000B660 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DeviceDockClientProxy@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18019F7C8 (--0DeviceDockClientProxy@@QEAA@PEAVDeviceDockServer@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateDeviceDockClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DeviceDockServer *v8; // rbx
  DeviceDockClientProxy *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  const char *v13; // r9
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DeviceDockClientProxy *v16; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v14,
    (__int64)this,
    (__int64)a3,
    0LL);
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v6 + 16);
  v8 = (struct DeviceDockServer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v7 + 248) + 8LL) + 56LL))(*(_QWORD *)(v7 + 248) + 8LL);
  v16 = (DeviceDockClientProxy *)operator new(0x38uLL);
  v9 = DeviceDockClientProxy::DeviceDockClientProxy(v16, v8);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    v14,
    v10,
    v11,
    v12);
  *(_QWORD *)a3 = v9;
  if ( !v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x167F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v13);
}
