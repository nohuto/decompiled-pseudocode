/*
 * XREFs of ??0?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180131928
 * Callers:
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::ListPrincipal<DisplayOcclusionRect>(
        _QWORD *a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_PrincipalImpl::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Principal'};
  return a1;
}
