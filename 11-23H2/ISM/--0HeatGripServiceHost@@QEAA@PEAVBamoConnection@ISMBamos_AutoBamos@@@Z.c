/*
 * XREFs of ??0HeatGripServiceHost@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003A17C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180039E9C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

HeatGripServiceHost *__fastcall HeatGripServiceHost::HeatGripServiceHost(
        HeatGripServiceHost *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoHeatGripServicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((HeatGripServiceHost *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoHeatGripServicePrincipalImpl::`vftable';
  *(_QWORD *)this = &HeatGripServiceHost::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &HeatGripServiceHost::`vftable'{for `IHeatGripServicePrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
