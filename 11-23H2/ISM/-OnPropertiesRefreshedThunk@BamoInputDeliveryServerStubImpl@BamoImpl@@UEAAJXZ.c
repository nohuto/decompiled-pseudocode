/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoInputDeliveryServerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801732A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800279C0 (--1-$CalloutWrapper@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputDeliveryServerPrincipalImpl@1@@Z @ 0x1801730C0 (--0-$CalloutWrapper@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@BamoImpl@Micro_ea_1801730C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputDeliveryServerStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoInputDeliveryServerStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 88LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>((__int64)v6);
  }
  return v2;
}
