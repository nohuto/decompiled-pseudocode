/*
 * XREFs of ?StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z @ 0x18041A458
 * Callers:
 *     ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x18041A4C0 (-StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z.c)
 * Callees:
 *     ?FastPath@internal@tip_rapidjson@@YANNH@Z @ 0x1804185F0 (-FastPath@internal@tip_rapidjson@@YANNH@Z.c)
 *     ?Pow10@internal@tip_rapidjson@@YANH@Z @ 0x180419954 (-Pow10@internal@tip_rapidjson@@YANH@Z.c)
 */

char __fastcall tip_rapidjson::internal::StrtodFast(tip_rapidjson::internal *this, double a2, double *a3, double *a4)
{
  int v4; // edx
  double v5; // xmm0_8
  double v7; // xmm6_8

  v7 = v5;
  if ( (unsigned int)(v4 - 23) > 0xE )
  {
    if ( (unsigned int)(v4 + 22) > 0x2C )
      return 0;
  }
  else
  {
    v7 = v5 * tip_rapidjson::internal::Pow10((tip_rapidjson::internal *)(unsigned int)(v4 - 22));
  }
  if ( v7 <= 9.007199254740991e15 )
  {
    *a3 = tip_rapidjson::internal::FastPath(this, a2);
    return 1;
  }
  return 0;
}
