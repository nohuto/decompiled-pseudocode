/*
 * XREFs of ??0BamoInputProcessPrincipal@@QEAA@PEAVBamoInputProcessPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800B14F4
 * Callers:
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
BamoInputProcessPrincipal *__fastcall BamoInputProcessPrincipal::BamoInputProcessPrincipal(
        BamoInputProcessPrincipal *this,
        struct BamoInputProcessPrincipalOwner *a2,
        struct ISMBamos_AutoBamos::BamoConnection *a3)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &BamoInputProcessPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputProcessPrincipal::`vftable'{for `IInputProcessPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((BamoInputProcessPrincipal *)((char *)this + 16), a3);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputProcessPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      40927LL,
      (__int64)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v5);
  return this;
}
