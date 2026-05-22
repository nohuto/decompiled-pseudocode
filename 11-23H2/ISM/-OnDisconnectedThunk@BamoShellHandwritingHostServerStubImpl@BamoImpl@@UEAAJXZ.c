/*
 * XREFs of ?OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180062EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellHandwritingHostServerPrincipalImpl@1@@Z @ 0x180062844 (--0-$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@.c)
 *     ??1?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800629B8 (--1-$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellHandwritingHostServerStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoShellHandwritingHostServerStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 80LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>((__int64)v6);
  }
  return v2;
}
