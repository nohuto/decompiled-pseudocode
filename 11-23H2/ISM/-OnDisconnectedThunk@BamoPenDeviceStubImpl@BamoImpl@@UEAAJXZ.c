/*
 * XREFs of ?OnDisconnectedThunk@BamoPenDeviceStubImpl@BamoImpl@@UEAAJXZ @ 0x1801A8000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenDevicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenDevicePrincipalImpl@1@@Z @ 0x1801A7868 (--0-$CalloutWrapper@VBamoPenDevicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamo.c)
 *     ??1?$CalloutWrapper@VBamoPenDevicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A7A48 (--1-$CalloutWrapper@VBamoPenDevicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenDeviceStubImpl::OnDisconnectedThunk(BamoImpl::BamoPenDeviceStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDevicePrincipalImpl>::CalloutWrapper<BamoImpl::BamoPenDevicePrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDevicePrincipalImpl>::~CalloutWrapper<BamoImpl::BamoPenDevicePrincipalImpl>((__int64)v6);
  }
  return v2;
}
