/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800EF920
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x180129868 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x1800679F8 (_o_log10_0.c)
 *     pow @ 0x180067A04 (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) <= a2 )
    return o_log10_0(a2) * 20.0;
  else
    return DOUBLE_N192_0;
}
