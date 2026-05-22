/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z @ 0x1800F5128
 * Callers:
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x1800F50C0 (-BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IM@Z_NIM@Z @ 0x1800F3DC0 (--$EnumerateStubs@IM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IM@Z_NIM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetScalarValue(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v3 + 64) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float>((__int64)this, a2, v3, a2, a3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2762,
    (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
