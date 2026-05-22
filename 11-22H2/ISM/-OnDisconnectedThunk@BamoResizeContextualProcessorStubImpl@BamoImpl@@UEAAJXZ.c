/*
 * XREFs of ?OnDisconnectedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ @ 0x180029B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028CA8 (--1-$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??0?$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoResizeContextualProcessorPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180029BB0 (--0-$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoResizeContextualProcessorStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoResizeContextualProcessorStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>(
      v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3,
      v3 != 0 ? 3 : 0);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>((__int64)v6);
  }
  return v2;
}
