/*
 * XREFs of ?OnDisconnectedThunk@BamoHeatGripServiceStubImpl@BamoImpl@@UEAAJXZ @ 0x180029540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028AA0 (--1-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoHeatGripServicePrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800295C0 (--0-$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoHeatGripServiceStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>(
      v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3,
      v3 != 0 ? 3 : 0);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>((__int64)v6);
  }
  return v2;
}
