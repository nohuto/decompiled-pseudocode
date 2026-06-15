/*
 * XREFs of pow @ 0x18005F984
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001156C (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x1800115E8 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180043684 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800437FC (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180043844 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800CEBC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800D6C20 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
