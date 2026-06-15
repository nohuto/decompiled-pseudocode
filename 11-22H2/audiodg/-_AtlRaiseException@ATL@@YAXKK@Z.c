/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14005258C
 * Callers:
 *     ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x140050BB0 (-AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z.c)
 *     ?GetKeyAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@H@Z @ 0x1400564E0 (-GetKeyAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140056518 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140066D50 (AudioDGGetVpoFromVpoContext.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x14007A9B0 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140091404 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x140092130 (-GetValueAt@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException(DWORD a1)
{
  RaiseException(a1, 1u, 0, 0LL);
}
