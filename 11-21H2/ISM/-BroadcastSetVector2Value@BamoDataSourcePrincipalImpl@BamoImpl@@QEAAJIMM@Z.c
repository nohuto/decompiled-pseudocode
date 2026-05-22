/*
 * XREFs of ?BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z @ 0x1800F51F4
 * Callers:
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z @ 0x1800F5180 (-BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_NIMM@Z @ 0x1800F3E34 (--$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_N.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector2Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v4 + 64) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float>(
             (__int64)this,
             a2,
             v4,
             a2,
             a3,
             a4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2771,
    (int)"onecoreuap\\Windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
