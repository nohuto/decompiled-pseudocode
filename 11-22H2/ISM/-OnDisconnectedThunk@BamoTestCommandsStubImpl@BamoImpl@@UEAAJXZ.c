/*
 * XREFs of ?OnDisconnectedThunk@BamoTestCommandsStubImpl@BamoImpl@@UEAAJXZ @ 0x1800291B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028968 (--1-$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoTestCommandsPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180029230 (--0-$CalloutWrapper@VBamoTestCommandsPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoTestCommandsStubImpl::OnDisconnectedThunk(BamoImpl::BamoTestCommandsStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>(
      v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3,
      v3 != 0 ? 3 : 0);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoTestCommandsPrincipalImpl>((__int64)v6);
  }
  return v2;
}
