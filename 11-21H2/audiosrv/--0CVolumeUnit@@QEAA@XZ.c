/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180043090 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18004350C (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800C23FC (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800CBF60 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800CC8AC (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800CCB9C (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180043890 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this, __int64 a2)
{
  CVolumeUnit::SetDBRange((__int64)this, a2, -96.0, 0.0, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
