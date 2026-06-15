/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180043844
 * Callers:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180043890 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800CE8E8 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x18005F978 (_o_log10_0.c)
 *     pow @ 0x18005F984 (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) > a2 )
    return DOUBLE_N192_0;
  else
    return o_log10_0(a2) * 20.0;
}
