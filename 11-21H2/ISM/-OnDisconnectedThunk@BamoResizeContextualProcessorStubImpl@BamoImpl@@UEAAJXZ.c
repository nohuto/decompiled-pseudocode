/*
 * XREFs of ?OnDisconnectedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ @ 0x1801435B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoResizeContextualProcessorPrincipalImpl@1@@Z @ 0x18014321C (--0-$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180143318 (--1-$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoResizeContextualProcessorStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoResizeContextualProcessorStubImpl *this)
{
  BamoImpl::BamoResizeContextualProcessorStubImpl *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v3 = v2 - 16;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>(
    (__int64)v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL),
    v2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>((__int64)v5);
  return (unsigned int)v1;
}
