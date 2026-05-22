/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoActivatableEntityStubImpl@BamoImpl@@UEAAJXZ @ 0x1800A6230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivatableEntityPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivatableEntityPrincipalImpl@1@@Z @ 0x1800A5E48 (--0-$CalloutWrapper@VBamoActivatableEntityPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoActivatableEntityPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800A5F44 (--1-$CalloutWrapper@VBamoActivatableEntityPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivatableEntityStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoActivatableEntityStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivatableEntityPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivatableEntityPrincipalImpl>(
      (__int64)v6,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 88LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivatableEntityPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoActivatableEntityPrincipalImpl>((__int64)v6);
  }
  return v2;
}
