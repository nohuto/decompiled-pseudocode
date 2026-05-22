/*
 * XREFs of ?BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18010F404
 * Callers:
 *     ?BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18010F370 (-BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@Z_NIMMMM@Z @ 0x18010DF9C (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetColorValue(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v5 + 64) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
             (__int64)this,
             (__int64 (__fastcall *)(__int64, _QWORD))BamoImpl::BamoDataSourcePrincipalImpl::CallSetColorValueOnStub,
             (__int64)this,
             a2);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
    0x87B20814,
    0);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30CE,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
