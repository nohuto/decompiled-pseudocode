/*
 * XREFs of ?OnDisconnectedThunk@BamoDataSourceStubImpl@BamoImpl@@UEAAJXZ @ 0x18011EF50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( *(int *)(v5 + 8) > 0 )
  {
    v6 = v5 - 16;
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v11,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
      a3,
      0LL);
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 64LL))(v6, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v11,
      v7,
      v8,
      v9);
  }
  return v4;
}
