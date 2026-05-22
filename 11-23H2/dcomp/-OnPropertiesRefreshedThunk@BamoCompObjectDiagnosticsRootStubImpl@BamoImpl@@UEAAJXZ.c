/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18016A2F4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A8D0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoCompObjectDiagnosticsRootStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( *(int *)(v4 + 8) > 0 )
  {
    v7 = v4 - 16;
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v12,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      a3,
      a4);
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 72LL))(v7, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v12,
      v8,
      v9,
      v10);
  }
  return v5;
}
