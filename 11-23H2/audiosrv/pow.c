/*
 * XREFs of pow @ 0x180067A04
 * Callers:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18001A350 (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18001A398 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18001A434 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18001A628 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800DF428 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800EF920 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
