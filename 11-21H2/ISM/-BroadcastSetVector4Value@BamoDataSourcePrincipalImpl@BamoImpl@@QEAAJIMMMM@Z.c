/*
 * XREFs of ?BroadcastSetVector4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800F53D4
 * Callers:
 *     ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x1800F5340 (-BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@Z_NIMMMM@Z @ 0x1800F3F48 (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector4Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v4 + 64) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
             (__int64)this,
             (__int64 (__fastcall *)(__int64, _QWORD))BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector4ValueOnStub,
             v4,
             a2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2792,
    (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
