/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoSystemContextEndpointStubImpl@BamoImpl@@UEAAJXZ @ 0x1800B1A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemContextEndpointPrincipalImpl@1@@Z @ 0x1800B076C (--0-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 *     ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800B09A0 (--1-$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemContextEndpointStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoSystemContextEndpointStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 120LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>((__int64)v6);
  }
  return v2;
}
