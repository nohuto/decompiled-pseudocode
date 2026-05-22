/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoControllerNavigationManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028B70 (--1-$CalloutWrapper@VBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoControllerNavigationManagerPrincipalImpl@1@@Z @ 0x18019E7EC (--0-$CalloutWrapper@VBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoIm_ea_18019E7EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoControllerNavigationManagerStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoControllerNavigationManagerStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 88LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>((__int64)v6);
  }
  return v2;
}
