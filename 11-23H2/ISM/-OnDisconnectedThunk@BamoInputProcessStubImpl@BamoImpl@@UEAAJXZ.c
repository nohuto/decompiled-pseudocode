/*
 * XREFs of ?OnDisconnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CAE80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputProcessPrincipalImpl@1@@Z @ 0x1800CA584 (--0-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800CA92C (--1-$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::OnDisconnectedThunk(BamoImpl::BamoInputProcessStubImpl *this)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v3 + 40) )
  {
    v4 = v3 - 16;
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)(v4 + 56) + 24LL))(
           *(_QWORD *)(v4 + 56),
           v4,
           (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>((__int64)v6);
  }
  return v2;
}
