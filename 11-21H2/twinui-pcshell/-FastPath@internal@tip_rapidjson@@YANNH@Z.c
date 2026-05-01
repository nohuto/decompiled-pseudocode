/*
 * XREFs of ?FastPath@internal@tip_rapidjson@@YANNH@Z @ 0x18034E530
 * Callers:
 *     ?StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z @ 0x1803506B8 (-StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z.c)
 * Callees:
 *     ?Pow10@internal@tip_rapidjson@@YANH@Z @ 0x18034F63C (-Pow10@internal@tip_rapidjson@@YANH@Z.c)
 */

double __fastcall tip_rapidjson::internal::FastPath(tip_rapidjson::internal *this, double a2)
{
  int v2; // edx
  double v3; // xmm0_8

  if ( v2 < -308 )
    return 0.0;
  if ( v2 < 0 )
    return v3 / tip_rapidjson::internal::Pow10((tip_rapidjson::internal *)(unsigned int)-v2, -v2);
  return tip_rapidjson::internal::Pow10((tip_rapidjson::internal *)(unsigned int)v2, v2) * v3;
}
