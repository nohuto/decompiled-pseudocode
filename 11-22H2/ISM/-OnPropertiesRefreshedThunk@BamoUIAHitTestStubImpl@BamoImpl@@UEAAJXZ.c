/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoUIAHitTestStubImpl@BamoImpl@@UEAAJXZ @ 0x1801E50D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028900 (--1-$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoUIAHitTestPrincipalImpl@1@@Z @ 0x1801E4E98 (--0-$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA_ea_1801E4E98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoUIAHitTestStubImpl::OnPropertiesRefreshedThunk(BamoImpl::BamoUIAHitTestStubImpl *this)
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))v3);
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 88LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>((__int64)v6);
  }
  return v2;
}
