/*
 * XREFs of ?BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z @ 0x18010F954
 * Callers:
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z @ 0x18010F8E0 (-BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_NIMM@Z @ 0x18010DE88 (--$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_N.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector2Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 32) + 64LL) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float>(
             (__int64)this,
             a2,
             v4,
             a2,
             a3,
             a4);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
    *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v5 + 32),
    0x87B20814,
    0);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3083,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
