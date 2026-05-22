/*
 * XREFs of ??0?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180036748
 * Callers:
 *     ??0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180037F98 (--0PenDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003ABAC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::ListPrincipal<BamoPenDevicePrincipal>(
        _QWORD *a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_PenDevicePrincipal_Principal'};
  return a1;
}
