/*
 * XREFs of ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180097384
 * Callers:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800024AC (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180013370 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180013850 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180029E7C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18009599C (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5B1C (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5C4C (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5D7C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_variant_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_variant_access::`vftable';
  v1 = 0LL;
  throw (std::bad_variant_access *)&pExceptionObject;
}
